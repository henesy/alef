#include <u.h>
#include <libc.h>
#include <bio.h>
#include <ctype.h>
#define Extern extern
#include "parl.h"
#include "globl.h"

void
peep(void)
{
	Reg *r, *r1, *r2;
	Inst *p, *p1;
	int t;
/*
 * complete R structure
 */
	t = 0;
	for(r=firstr; r!=R; r=r1) {
		r1 = r->next;
		if(r1 == R)
			break;
		p = r->prog->next;
		while(p != r1->prog)
		switch(p->op) {
		default:
			r2 = rega();
			r->next = r2;
			r2->next = r1;

			r2->prog = p;
			r2->p1 = r;
			r->s1 = r2;
			r2->s1 = r1;
			r1->p1 = r2;

			r = r2;
			t++;

		case ADATA:
		case AGLOBL:
		case ANAME:
		case ADYNT:
		case AINIT:
			p = p->next;
		}
	}

loop1:
	t = 0;
	for(r=firstr; r!=R; r=r->next) {
		p = r->prog;
		if(p->op == AMOVW || p->op == AMOVF || p->op == AMOVD)
		if(regtyp(&p->dst)) {
			if(regtyp(&p->src1))
			if(p->src1.type == p->dst.type) {
				if(copyprop(r)) {
					excise(r);
					t++;
				} else
				if(subprop(r) && copyprop(r)) {
					excise(r);
					t++;
				}
			}
			if(regzer(&p->src1))
			if(p->dst.type == A_REG) {
				p->src1.type = A_REG;
				p->src1.reg = 0;
				if(copyprop(r)) {
					excise(r);
					t++;
				} else
				if(subprop(r) && copyprop(r)) {
					excise(r);
					t++;
				}
			}
		}
	}
	if(t)
		goto loop1;
	/*
	 * look for MOVB x,R; MOVB R,R
	 *	    MOVW Ra, Rb; MOVW Rb, Ra
	 */
	for(r=firstr; r!=R; r=r->next) {
		p = r->prog;
		switch(p->op) {
		default:
			continue;
		case AMOVH:
		case AMOVHU:
		case AMOVB:
		case AMOVBU:
			if(p->dst.type != A_REG)
				continue;
			break;
		}
		r1 = r->next;
		if(r1 == R)
			continue;
		p1 = r1->prog;
		if(p1->op != p->op)
			continue;
		if(p1->src1.type != A_REG || p1->src1.reg != p->dst.reg)
			continue;
		if(p1->dst.type != A_REG || p1->dst.reg != p->dst.reg)
			continue;
		excise(r1);
	}
}

void
excise(Reg *r)
{
	Inst *p;

	p = r->prog;
	p->op = ANOP;
	p->src1 = zprog.src1;
	p->dst = zprog.dst;
	p->reg = zprog.reg; /**/
}

Reg*
uniqp(Reg *r)
{
	Reg *r1;

	r1 = r->p1;
	if(r1 == R) {
		r1 = r->p2;
		if(r1 == R || r1->p2next != R)
			return R;
	} else
		if(r->p2 != R)
			return R;
	return r1;
}

Reg*
uniqs(Reg *r)
{
	Reg *r1;

	r1 = r->s1;
	if(r1 == R) {
		r1 = r->s2;
		if(r1 == R)
			return R;
	} else
		if(r->s2 != R)
			return R;
	return r1;
}

int
regzer(Adres *a)
{

	if(a->type == A_CONST)
		if(a->sym == ZeroS)
			if(a->ival == 0)
				return 1;
	if(a->type == A_REG)
		if(a->reg == 0)
			return 1;
	return 0;
}

int
regtyp(Adres *a)
{

	if(a->type == A_REG) {
		if(a->reg != 0)
			return 1;
		return 0;
	}
	if(a->type == A_FREG)
		return 1;
	return 0;
}

/*
 * the idea is to substitute
 * one register for another
 * from one MOV to another
 *	MOV	a, R0
 *	ADD	b, R0	/ no use of R1
 *	MOV	R0, R1
 * would be converted to
 *	MOV	a, R1
 *	ADD	b, R1
 *	MOV	R1, R0
 * hopefully, then the former or latter MOV
 * will be eliminated by copy propagation.
 */
int
subprop(Reg *r0)
{
	Inst *p;
	Adres *v1, *v2;
	Reg *r;
	int t;

	p = r0->prog;
	v1 = &p->src1;
	if(!regtyp(v1))
		return 0;
	v2 = &p->dst;
	if(!regtyp(v2))
		return 0;
	for(r=uniqp(r0); r!=R; r=uniqp(r)) {
		if(uniqs(r) == R)
			break;
		p = r->prog;
		switch(p->op) {
		case AJAL:
			return 0;

		case ASGT:
		case ASGTU:

		case AADD:
		case AADDU:
		case ASUB:
		case ASUBU:
		case ASLL:
		case ASRL:
		case ASRA:
		case AOR:
		case AAND:
		case AXOR:
		case AMUL:
		case AMULU:
		case ADIV:
		case ADIVU:

		case AADDD:
		case AADDF:
		case ASUBD:
		case ASUBF:
		case AMULD:
		case AMULF:
		case ADIVD:
		case ADIVF:
			if(p->dst.type == v1->type)
			if(p->dst.reg == v1->reg) {
				if(p->reg == Nreg)
					p->reg = p->dst.reg;
				goto gotit;
			}
			break;

		case AMOVF:
		case AMOVD:
		case AMOVW:
			if(p->dst.type == v1->type)
			if(p->dst.reg == v1->reg)
				goto gotit;
			break;
		}
		if(copyau(&p->src1, v2) ||
		   copyau1(p, v2) ||
		   copyau(&p->dst, v2))
			break;
		if(copysub(&p->src1, v1, v2, 0) ||
		   copysub1(p, v1, v2, 0) ||
		   copysub(&p->dst, v1, v2, 0))
			break;
	}
	return 0;

gotit:
	copysub(&p->dst, v1, v2, 1);
	if(opt('P')) {
		print("gotit: %a->%a\n%i", v1, v2, r->prog);
		if(p->src1.type == v2->type)
			print(" excise");
		print("\n");
	}
	for(r=uniqs(r); r!=r0; r=uniqs(r)) {
		p = r->prog;
		copysub(&p->src1, v1, v2, 1);
		copysub1(p, v1, v2, 1);
		copysub(&p->dst, v1, v2, 1);
		if(opt('P'))
			print("%i\n", r->prog);
	}
	t = v1->reg;
	v1->reg = v2->reg;
	v2->reg = t;
	if(opt('P'))
		print("%i last\n", r->prog);
	return 1;
}

/*
 * The idea is to remove redundant copies.
 *	v1->v2	F=0
 *	(use v2	s/v2/v1/)*
 *	set v1	F=1
 *	use v2	return fail
 *	-----------------
 *	v1->v2	F=0
 *	(use v2	s/v2/v1/)*
 *	set v1	F=1
 *	set v2	return success
 */
int
copyprop(Reg *r0)
{
	Inst *p;
	Adres *v1, *v2;
	Reg *r;

	p = r0->prog;
	v1 = &p->src1;
	v2 = &p->dst;
	if(copyas(v1, v2))
		return 1;
	for(r=firstr; r!=R; r=r->next)
		r->active = 0;
	return copy1(v1, v2, r0->s1, 0);
}

int
copy1(Adres *v1, Adres *v2, Reg *r, int f)
{
	int t;
	Inst *p;

	if(r->active) {
		if(opt('P'))
			print("act set; return 1\n");
		return 1;
	}
	r->active = 1;
	if(opt('P'))
		print("copy %a->%a f=%d\n", v1, v2, f);
	for(; r != R; r = r->s1) {
		p = r->prog;
		if(opt('P'))
			print("%i", p);
		if(!f && uniqp(r) == R) {
			f = 1;
			if(opt('P'))
				print("; merge; f=%d", f);
		}
		t = copyu(p, v2, A);
		switch(t) {
		case 2:	/* rar, cant split */
			if(opt('P'))
				print("; %arar; return 0\n", v2);
			return 0;

		case 3:	/* set */
			if(opt('P'))
				print("; %aset; return 1\n", v2);
			return 1;

		case 1:	/* used, substitute */
		case 4:	/* use and set */
			if(f) {
				if(!opt('P'))
					return 0;
				if(t == 4)
					print("; %aused+set and f=%d; return 0\n", v2, f);
				else
					print("; %aused and f=%d; return 0\n", v2, f);
				return 0;
			}
			if(copyu(p, v2, v1)) {
				if(opt('P'))
					print("; sub fail; return 0\n");
				return 0;
			}
			if(opt('P'))
				print("; sub%a/%a", v2, v1);
			if(t == 4) {
				if(opt('P'))
					print("; %aused+set; return 1\n", v2);
				return 1;
			}
			break;
		}
		if(!f) {
			t = copyu(p, v1, A);
			if(!f && (t == 2 || t == 3 || t == 4)) {
				f = 1;
				if(opt('P'))
					print("; %aset and !f; f=%d", v1, f);
			}
		}
		if(opt('P'))
			print("\n");
		if(r->s2)
			if(!copy1(v1, v2, r->s2, f))
				return 0;
	}
	return 1;
}

/*
 * return
 * 1 if v only used (and substitute),
 * 2 if read-alter-rewrite
 * 3 if set
 * 4 if set and used
 * 0 otherwise (not touched)
 */
copyu(Inst *p, Adres *v, Adres *s)
{

	switch(p->op) {

	default:
		if(opt('P'))
			print(" (???)");
		return 2;


	case ANOP:	/* read, write */
	case AMOVW:
	case AMOVF:
	case AMOVD:
	case AMOVH:
	case AMOVHU:
	case AMOVB:
	case AMOVBU:
	case AMOVDW:
	case AMOVWD:
	case AMOVFD:
	case AMOVDF:
		if(s != A) {
			if(copysub(&p->src1, v, s, 1))
				return 1;
			if(!copyas(&p->dst, v))
				if(copysub(&p->dst, v, s, 1))
					return 1;
			return 0;
		}
		if(copyas(&p->dst, v)) {
			if(copyau(&p->src1, v))
				return 4;
			return 3;
		}
		if(copyau(&p->src1, v))
			return 1;
		if(copyau(&p->dst, v))
			return 1;
		return 0;

	case ASGT:	/* read, read, write */
	case ASGTU:

	case AADD:
	case AADDU:
	case ASUB:
	case ASUBU:
	case ASLL:
	case ASRL:
	case ASRA:
	case AOR:
	case ANOR:
	case AAND:
	case AXOR:
	case AMUL:
	case AMULU:
	case ADIV:
	case ADIVU:

	case AADDF:
	case AADDD:
	case ASUBF:
	case ASUBD:
	case AMULF:
	case AMULD:
	case ADIVF:
	case ADIVD:
		if(s != A) {
			if(copysub(&p->src1, v, s, 1))
				return 1;
			if(copysub1(p, v, s, 1))
				return 1;
			if(!copyas(&p->dst, v))
				if(copysub(&p->dst, v, s, 1))
					return 1;
			return 0;
		}
		if(copyas(&p->dst, v)) {
			if(p->reg == Nreg)
				p->reg = p->dst.reg;
			if(copyau(&p->src1, v))
				return 4;
			if(copyau1(p, v))
				return 4;
			return 3;
		}
		if(copyau(&p->src1, v))
			return 1;
		if(copyau1(p, v))
			return 1;
		if(copyau(&p->dst, v))
			return 1;
		return 0;

	case ABEQ:	/* read, read */
	case ABNE:
	case ABGTZ:
	case ABGEZ:
	case ABLTZ:
	case ABLEZ:

	case ACMPEQD:
	case ACMPEQF:
	case ACMPGED:
	case ACMPGEF:
	case ACMPGTD:
	case ACMPGTF:
	case ABFPF:
	case ABFPT:
		if(s != A) {
			if(copysub(&p->src1, v, s, 1))
				return 1;
			return copysub1(p, v, s, 1);
		}
		if(copyau(&p->src1, v))
			return 1;
		if(copyau1(p, v))
			return 1;
		return 0;

	case AJMP:	/* funny */
		if(s != A) {
			if(copysub(&p->dst, v, s, 1))
				return 1;
			return 0;
		}
		if(copyau(&p->dst, v))
			return 1;
		return 0;

	case ARET:	/* funny */
		if(v->type == A_REG && v->reg == Retireg)
			return 2;
		if(v->type == A_FREG && v->reg == Retfregno)
			return 2;

		/* Fall through */
	case AJAL:	/* funny */
		if(v->type == A_REG) {
			if(v->reg >= Pregs)
				return 2;
			if(v->reg == Regspass || v->reg == RegSP)
				return 2;

		}
		if(s != A) {
			if(copysub(&p->dst, v, s, 1))
				return 1;
			return 0;
		}
		if(copyau(&p->dst, v))
			return 4;
		return 3;

	case ATEXT:	/* funny */
		if(v->type == A_REG)
			if(v->reg == Regspass)
				return 3;
		return 0;
	}
	return 0;
}

int
a2type(Inst *p)
{

	switch(p->op) {
	case ABEQ:
	case ABNE:
	case ABGTZ:
	case ABGEZ:
	case ABLTZ:
	case ABLEZ:

	case ASGT:
	case ASGTU:

	case AADD:
	case AADDU:
	case ASUB:
	case ASUBU:
	case ASLL:
	case ASRL:
	case ASRA:
	case AOR:
	case AAND:
	case AXOR:
	case AMUL:
	case AMULU:
	case ADIV:
	case ADIVU:
		return A_REG;

	case ACMPEQD:
	case ACMPEQF:
	case ACMPGED:
	case ACMPGEF:
	case ACMPGTD:
	case ACMPGTF:

	case AADDF:
	case AADDD:
	case ASUBF:
	case ASUBD:
	case AMULF:
	case AMULD:
	case ADIVF:
	case ADIVD:
		return A_FREG;
	}
	return A_NONE;
}

/*
 * direct reference,
 * could be set/use depending on
 * semantics
 */
int
copyas(Adres *a, Adres *v)
{

	if(regtyp(v))
		if(a->type == v->type)
		if(a->reg == v->reg)
			return 1;
	return 0;
}

/*
 * either direct or indirect
 */
int
copyau(Adres *a, Adres *v)
{

	if(copyas(a, v))
		return 1;
	if(v->type == A_REG)
		if(a->type == A_INDREG)
			if(v->reg == a->reg)
				return 1;
	return 0;
}

int
copyau1(Inst *p, Adres *v)
{

	if(regtyp(v))
		if(p->src1.type == v->type || p->dst.type == v->type)
		if(p->reg == v->reg) {
			if(a2type(p) != v->type)
				print("botch a2type %i\n", p);
			return 1;
		}
	return 0;
}

/*
 * substitute s for v in a
 * return failure to substitute
 */
int
copysub(Adres *a, Adres *v, Adres *s, int f)
{

	if(f)
	if(copyau(a, v))
		a->reg = s->reg;
	return 0;
}

int
copysub1(Inst *p1, Adres *v, Adres *s, int f)
{

	if(f)
	if(copyau1(p1, v))
		p1->reg = s->reg;
	return 0;
}
