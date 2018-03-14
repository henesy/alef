
#line	2	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
#include <u.h>
#include <libc.h>
#include <bio.h>
#include "parl.h"
#define Extern extern
#include "globl.h"

#line	10	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
typedef union 
{
	Node	*node;
	Sym	*sym;
	Type	*type;
	ulong	ival;
	double	fval;
	int	clas;
	String	*string;
	Tysym	ltype;
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	Tvasgn	57346
#define	Taddeq	57347
#define	Tsubeq	57348
#define	Tmuleq	57349
#define	Tdiveq	57350
#define	Tmodeq	57351
#define	Trsheq	57352
#define	Tlsheq	57353
#define	Tandeq	57354
#define	Toreq	57355
#define	Txoreq	57356
#define	Toror	57357
#define	Tandand	57358
#define	Teq	57359
#define	Tneq	57360
#define	Tleq	57361
#define	Tgeq	57362
#define	Titer	57363
#define	Tlsh	57364
#define	Trsh	57365
#define	Tdec	57366
#define	Tinc	57367
#define	Tcomm	57368
#define	Tindir	57369
#define	Ttypename	57370
#define	Tid	57371
#define	Tconst	57372
#define	Tsname	57373
#define	Tfconst	57374
#define	Tstring	57375
#define	Tint	57376
#define	Tuint	57377
#define	Tsint	57378
#define	Tsuint	57379
#define	Tuchar	57380
#define	Tchar	57381
#define	Tfloat	57382
#define	Tchannel	57383
#define	Tvoid	57384
#define	Tcase	57385
#define	Tcheck	57386
#define	Tbreak	57387
#define	Taggregate	57388
#define	Tunion	57389
#define	Tstorage	57390
#define	Treturn	57391
#define	Tswitch	57392
#define	Twhile	57393
#define	Tfor	57394
#define	Tpar	57395
#define	Telse	57396
#define	Tdo	57397
#define	Tadt	57398
#define	Ttask	57399
#define	Tprocess	57400
#define	Tselect	57401
#define	Tif	57402
#define	Traise	57403
#define	Tset	57404
#define	Trescue	57405
#define	Tintern	57406
#define	Textern	57407
#define	Tdefault	57408
#define	Tcontinue	57409
#define	Tnewtype	57410
#define	Tgoto	57411
#define	Tnil	57412
#define	Talloc	57413
#define	Tunalloc	57414
#define	Tguard	57415
#define	Tprivate	57416
#define	Ttuple	57417
#define	Tbecome	57418
#define	Tzerox	57419
#define	Ttypeof	57420
#define YYEOFCODE 1
#define YYERRCODE 2

#line	1128	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"

short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
-1, 2,
	1, 1,
	-2, 245,
-1, 377,
	4, 141,
	98, 85,
	-2, 0,
-1, 380,
	4, 141,
	98, 89,
	-2, 0,
-1, 393,
	4, 141,
	-2, 0,
-1, 403,
	4, 141,
	-2, 0,
-1, 414,
	4, 141,
	-2, 0,
-1, 475,
	4, 141,
	-2, 0,
-1, 477,
	4, 141,
	-2, 0,
-1, 490,
	4, 141,
	60, 105,
	83, 105,
	98, 105,
	-2, 0,
-1, 493,
	4, 141,
	-2, 0,
-1, 499,
	4, 141,
	60, 104,
	83, 104,
	98, 104,
	-2, 0,
-1, 504,
	4, 141,
	-2, 0,
-1, 506,
	4, 141,
	60, 99,
	83, 99,
	98, 99,
	-2, 0,
-1, 509,
	4, 141,
	60, 98,
	83, 98,
	98, 98,
	-2, 0,
};
#define	YYNPROD	249
#define	YYPRIVATE 57344
#define	YYLAST	1648
short	yyact[] =
{
  91, 377, 384,  68, 456, 429, 440, 389,  15,  69,
  92,   4, 294,  80,  43, 235, 192,  31,  27, 359,
 152, 136, 229, 130,  47,  48,  49, 230, 388, 191,
   3, 320,  93, 508, 503, 482,   8,   9, 319, 414,
  86, 414,  79, 302, 226, 444,  10,  16, 413, 471,
 496,  81,  11, 234,  13,  12, 471, 331,   6, 149,
 480, 471,  84, 316,  14,  84, 232, 479,  63, 115,
 504, 343, 472, 497,  60, 131, 131,  56, 320, 472,
 138,  67, 129,  87, 472, 319, 493, 498, 494, 150,
  60, 134, 141, 142, 473, 193, 132, 148, 189, 469,
 133, 120, 335, 332, 329, 287, 149, 202, 203, 204,
 205, 206, 207, 208, 209, 210, 431, 213, 214,  87,
 228, 140, 468, 430, 140, 223, 140, 146, 125, 461,
 108, 156, 215,  84, 140, 306, 118, 222, 211,  44,
  44,  44,  44,  60,  60, 217, 140, 233, 124, 140,
  84, 350, 364, 251, 219, 120, 315, 231, 255, 256,
 257, 258, 259, 260, 261, 262, 263, 264, 265, 266,
 267, 268, 269, 270, 271, 272, 273, 274,  87, 276,
 277, 278, 279, 280, 281, 282, 283, 284, 285, 286,
 248, 247, 240, 121, 288, 193, 295, 296, 220, 254,
 116,  64,  18, 140, 348, 322,  20, 137, 224, 116,
   8,   9, 382, 193, 441, 381, 300, 376, 297, 299,
  10, 289, 244,  61, 292, 374,  11, 425,  13,  12,
  23, 131,   6, 140, 424, 140,  60, 367,  14,  21,
 366,  19,  13,  12,  54, 312, 318, 219, 218,  23,
 324, 307,  14, 337,  78, 313, 314, 311, 246, 311,
  19, 119, 304,  45,  46,   8,   9,  46,  60, 237,
 476, 127, 116, 326,  60,  10, 327,  59,  57,  58,
  60,  11,  52,  13,  12, 120, 144,   6, 436, 243,
 193,  58,  23,  14, 305, 298, 155, 303, 328, 434,
 310,  21,  22,  19, 154, 241, 330, 250,  41, 336,
 340, 433, 290, 363,  34,  35,  36,  37, 345,  38,
  39,  42,  40, 361, 216, 341, 139, 342, 354,  23,
 225, 349, 344, 154, 353,  23, 153, 155, 128, 339,
 352, 311, 338, 123, 145,  72,  19, 245,  84,  84,
  66,  60, 355, 356,  87,  85,  55, 309, 358,  84,
  59, 201,  58, 362,  84, 137, 351, 360, 365, 370,
 370,  84,  76,  84, 380, 373,  71, 375, 252, 378,
 143, 199, 200, 379, 198, 197, 196, 195, 411, 253,
 242, 417, 295, 295, 117,  62, 421, 295, 295, 428,
 177,  23,  60, 317, 418, 419, 435, 438, 439, 426,
 427, 143, 275, 437,  41,  54, 442, 445, 454, 333,
  34,  35,  36,  37, 333,  38,  39,  42,  40, 432,
 450, 453, 333, 449, 333, 460, 457, 462, 448, 333,
 289,  44,  82,  44, 463, 321, 227, 237, 323,  83,
 443,  51,  41, 410,  51,  50,  51, 126,  34,  35,
  36,  37, 459,  38,  39,  42,  40, 491, 157, 158,
 159, 474, 481, 177,  44, 467, 466, 485, 484, 465,
 486, 387, 458, 464, 490, 488, 160, 161, 157, 158,
 159, 499, 452, 177, 451, 416, 501, 107, 415,  85,
 502, 239,  97, 483, 221, 506, 505, 507,  65,  24,
 509, 412,  98,  99,  96, 372, 347, 100, 102, 106,
 500, 151, 383,  94, 369, 386, 109, 111, 112, 113,
 346,  77, 188, 163, 162, 160, 161, 157, 158, 159,
 390, 409, 177, 135, 105, 400, 406, 402, 401, 405,
  74, 403,  73, 397, 396, 399, 404, 394, 301, 393,
 238,   7, 387, 408,  25, 395, 110, 391, 392, 320,
 446,  75, 398, 101, 407, 478, 319, 495, 107, 487,
 103, 104, 114,  97, 147, 291, 122, 368, 385,  17,
 236, 423, 420,  98,  99,  96, 470, 308, 100, 102,
 106,   5, 151, 293,  94,  95, 422, 109, 111, 112,
 113,   2,   1,  53,   0,   0,   0,   0,   0,   0,
   0, 390, 409,   0,   0, 105, 400, 406, 402, 401,
 405,   0, 403,   0, 397, 396, 399, 404, 394,   0,
 393,   0,   0,   0, 408,   0, 395, 110, 391, 392,
 320, 107,   0, 398, 101, 407,  97, 319,   0,   0,
   0, 103, 104, 114,   0,   0,  98,  99,  96,   0,
   0, 100, 102, 106,   0, 151,   0,  94,  41,  46,
 109, 111, 112, 113,  34,  35,  36,  37,   0,  38,
  39,  42,  40,  33,  41,   0,   0,  26, 105,   0,
  34,  35,  36,  37,   0,  38,  39,  42,  40,   0,
   0,   0,   0,   0,  28,  30,   0,   0,   0,   0,
 110, 190,   0, 107,  29,  70,   0, 101,  97,   0,
 194,   0,  13,  12, 103, 104, 114,   0,  98,  99,
  96,  32,  14, 100, 102, 106,   0, 151,   0,  94,
  41,  46, 109, 111, 112, 113,  34,  35,  36,  37,
   0,  38,  39,  42,  40,   0,   0,   0,   0,   0,
 105,   0,   0,   0,  41,   0,   0,   0,   0,   0,
  34,  35,  36,  37,   0,  38,  39,  42,  40,   0,
   0,   0, 110,   0,   0,   0,   0,  70,   0, 101,
   0,   0, 194,   0,   0,   0, 103, 104, 114, 175,
 176, 178, 179, 180, 181, 182, 183, 184, 185, 186,
 187,  70, 174, 173, 172, 171, 170, 168, 169, 164,
 165, 166, 167, 188, 163, 162, 160, 161, 157, 158,
 159,   0,   0, 177, 175, 176, 178, 179, 180, 181,
 182, 183, 184, 185, 186, 187,   0, 174, 173, 172,
 171, 170, 168, 169, 164, 165, 166, 167, 188, 163,
 162, 160, 161, 157, 158, 159,  41,   0, 177,   0,
   0,   0,  34,  35,  36,  37,   0,  38,  39,  42,
  40, 175, 176, 178, 179, 180, 181, 182, 183, 184,
 185, 186, 187, 489, 174, 173, 172, 171, 170, 168,
 169, 164, 165, 166, 167, 188, 163, 162, 160, 161,
 157, 158, 159, 371,   0, 177,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0, 357, 175, 176,
 178, 179, 180, 181, 182, 183, 184, 185, 186, 187,
   0, 174, 173, 172, 171, 170, 168, 169, 164, 165,
 166, 167, 188, 163, 162, 160, 161, 157, 158, 159,
   0,   0, 177,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0, 334, 175, 176, 178, 179, 180,
 181, 182, 183, 184, 185, 186, 187,   0, 174, 173,
 172, 171, 170, 168, 169, 164, 165, 166, 167, 188,
 163, 162, 160, 161, 157, 158, 159,   0,   0, 177,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0, 249, 175, 176, 178, 179, 180, 181, 182, 183,
 184, 185, 186, 187,   0, 174, 173, 172, 171, 170,
 168, 169, 164, 165, 166, 167, 188, 163, 162, 160,
 161, 157, 158, 159,   0,   0, 177,   0,   0, 431,
   0,   0,   0,   0,   0,   0, 430, 175, 176, 178,
 179, 180, 181, 182, 183, 184, 185, 186, 187,   0,
 174, 173, 172, 171, 170, 168, 169, 164, 165, 166,
 167, 188, 163, 162, 160, 161, 157, 158, 159,   0,
   0, 177,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 492, 175, 176, 178, 179, 180, 181, 182,
 183, 184, 185, 186, 187,   0, 174, 173, 172, 171,
 170, 168, 169, 164, 165, 166, 167, 188, 163, 162,
 160, 161, 157, 158, 159, 107,   0, 177,   0,   0,
  97,   0,   0,   0,   0,   0,   0, 477,   0,   0,
  98,  99,  96,   0,   0, 100, 102, 106,   0,  89,
  88,  94,   0,  46, 109, 111, 112, 113, 107,   0,
   0,   0,   0,  97,   0,   0,   0,   0,   0,   0,
   0,   0, 105,  98,  99,  96,   0,   0, 100, 102,
 106,   0, 151, 475,  94,   0,  46, 109, 111, 112,
 113,   0,   0,   0, 110,   0,   8,   9,   0,   0,
   0, 101,   0,   0,  90, 105,  10,   0, 103, 104,
 114,   0,  11,   0,  13,  12,   0,   0,   6,   0,
   0,   0,   0,   0,  14,   0,   0, 110,   0,   0,
 107,   0,   0,   0, 101,  97,   0, 194,   0,   0,
   0, 103, 104, 114,   0,  98,  99,  96,   0,   0,
 100, 102, 106,   0, 151,   0,  94,   0,  46, 109,
 111, 112, 113, 107,   0,   0,   0,   0,  97,   0,
   0,   0,   0,   0,   0,   0,   0, 105,  98,  99,
  96,   0,   0, 100, 102, 106,   0, 151,   0,  94,
   0,  46, 109, 111, 112, 113,   0,   0,   0, 110,
   0,   0,   0,   0,   0,   0, 101,   0,   0, 325,
 105,  41,   0, 103, 104, 114,   0,  34,  35,  36,
  37,   0,  38,  39,  42,  40,   0,   0,   0,   0,
   0,   0, 110,   0,   0, 107,   0,   0,   0, 101,
  97,   0,   0,   0,   0,   0, 103, 104, 114,   0,
  98,  99,  96,   0,   0, 100, 102, 106,   0, 151,
   0, 212,   0,  46, 109, 111, 112, 113,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 105, 173, 172, 171, 170, 168, 169, 164,
 165, 166, 167, 188, 163, 162, 160, 161, 157, 158,
 159,   0,   0, 177, 110,   0,   0,   0,   0,   0,
   0, 101,   0,   0,   0,   0,   0,   0, 103, 104,
 114, 455,   0, 175, 176, 178, 179, 180, 181, 182,
 183, 184, 185, 186, 187,   0, 174, 173, 172, 171,
 170, 168, 169, 164, 165, 166, 167, 188, 163, 162,
 160, 161, 157, 158, 159,   0,   0, 177, 447, 175,
 176, 178, 179, 180, 181, 182, 183, 184, 185, 186,
 187,   0, 174, 173, 172, 171, 170, 168, 169, 164,
 165, 166, 167, 188, 163, 162, 160, 161, 157, 158,
 159,   0,   0, 177, 175, 176, 178, 179, 180, 181,
 182, 183, 184, 185, 186, 187,   0, 174, 173, 172,
 171, 170, 168, 169, 164, 165, 166, 167, 188, 163,
 162, 160, 161, 157, 158, 159,   0,   0, 177, 172,
 171, 170, 168, 169, 164, 165, 166, 167, 188, 163,
 162, 160, 161, 157, 158, 159,   0,   0, 177, 171,
 170, 168, 169, 164, 165, 166, 167, 188, 163, 162,
 160, 161, 157, 158, 159,   0,   0, 177, 170, 168,
 169, 164, 165, 166, 167, 188, 163, 162, 160, 161,
 157, 158, 159,   0,   0, 177, 168, 169, 164, 165,
 166, 167, 188, 163, 162, 160, 161, 157, 158, 159,
   0,   0, 177, 164, 165, 166, 167, 188, 163, 162,
 160, 161, 157, 158, 159,   0,   0, 177
};
short	yypact[] =
{
-1000,-1000,1163,-1000, 257, 505, 651, 649, 218, 218,
 218, 218,-1000,-1000,-1000, 451, 238, 312,-1000,-1000,
 233, 366, 353,-1000,-1000, 195, 504,-1000,-1000,-1000,
-1000,-1000, 306, 729,-1000,-1000,-1000,-1000,-1000,-1000,
-1000, 333, 301,-1000,-1000,-1000,-1000,-1000, 329,-1000,
-1000, 195, 407,-1000,1137, 407, 229, 352,-1000, 366,
-1000, 239, 221, 299, 316,-1000, 729,  32, 452, 294,
 161, 729, 729,   3,  -6,-1000, 221, -17,-1000, 409,
 230,-1000,1296, 369, 300, 161,-1000,-1000,1275, 291,
1137,1518,-1000,-1000, 633, 343,1275,1275,1275,1275,
1275,1275,1275,1275,1275,1347,1275,1275,-1000,-1000,
-1000,-1000,-1000,-1000,  82, 228,1275, 221, 229, 201,
-1000,-1000, 500, 407,  29,-1000, 729, 367, 366,-1000,
 -55, 441,  24,1163,1163, -31,  48,-1000, 221, 497,
 263,-1000,-1000, 348, 245, 366,-1000,-1000, 214,1137,
 932, 262,1275, 336, 347,-1000, 101,1275,1275,1275,
1275,1275,1275,1275,1275,1275,1275,1275,1275,1275,
1275,1275,1275,1275,1275,1275,1275, 406,1275,1275,
1275,1275,1275,1275,1275,1275,1275,1275,1275,   9,
 729, 216,-1000,1518,1170,1275,1275, 250, 250,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000, 705,-1000,-1000,-1000,-1000, -56,-1000,-1000,
 166,-1000, 198,-1000,-1000,  39,-1000, 729, 314, 202,
-1000, 147,1163,-1000, 221,  58,-1000, 397, -12,-1000,
-1000, 338,-1000, 366, 229, 109, 366,-1000,-1000,1242,
 336,1518, 250,-1000,-1000, 360, 360, 360, 433, 433,
 453, 453, 502, 502, 502, 502,1607,1607,1592,1575,
1557,1538,1393,1518,1518,1275,1518,1518,1518,1518,
1518,1518,1518,1518,1518,1518, 502,1275,   8,1170,
-1000, -41, 435,   7, 419,1518, 885,-1000,-1000,-1000,
   6, -12,-1000, 157, 298,-1000, 295,-1000,-1000,1275,
 218,-1000, 218, -27,-1000,-1000, 221,1275,-1000,-1000,
-1000, 108, 287,  55,1518,1137,-1000,1518,-1000,1275,
-1000,-1000,-1000,1275,-1000,-1000,-1000, 284, 407, 407,
 838,-1000,-1000, 218,-1000,1518,-1000,-1000, 279, 407,
 269,  54,-1000,1518, 407, 144, 141,-1000,-1000, 831,
 831, 407, 129, 407,-1000, 121,-1000,-1000,-1000,-1000,
 195, 161,-1000, 119,-1000, 116,-1000, 479, 449, 195,
 479,-1000,-1000, -50,-1000,-1000, -61, 494, 491,-1000,
1275,1275,1275, 560, 188, 181,1275,1275,1275,  26,
1275, 267, 255, 479, 244, -12,1275,1275, 167, 167,
-1000, 446, -53,-1000, 479,-1000,-1000,1483, 434, 429,
-1000,-1000, -59, 490,-1000, 488, 427, 414,1447,-1000,
-1000,-1000, 478,1275,1275,  61,1275,-1000, 979,1518,
 475,-1000, 472,-1000,-1000,-1000, 471,  72,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,   1,  -4,-1000, 467,
1117, 226,1071,-1000, -30,-1000,-1000,-1000,-1000,-1000,
-1000,1275, -65,-1000,1275, 479,1275, 479,-1000,-1000,
-1000, 803,-1000, 463,-1000,1026,  15, -10, -11,-1000,
 479,1275,-1000, 479,-1000,-1000, 729, -66,-1000, 479,
 -26,-1000,-1000,-1000, 479, -67, 479,-1000,-1000, 479
};
short	yypgo[] =
{
   0, 613, 202,  40, 612, 611,  27,   8,  42,  14,
  13,  77, 201,   7,   1,   2,  28, 605, 603,  12,
 601,  22, 130,  19,  51, 597,   4, 596, 592, 591,
 590, 589, 588,   5,   0,  10,  32, 587,  15, 586,
  29,  16, 585, 584, 579, 577, 575, 571,  21, 570,
   3,   9,  11,  81, 564,  23, 561,   6,  20, 560,
 558, 552, 550, 543, 531, 530, 524, 522, 516, 515,
 511, 506, 483
};
short	yyr1[] =
{
   0,   4,   5,   5,   6,  59,   6,  60,   6,   6,
   6,   6,   6,  39,  39,  54,  54,  54,  54,  31,
  31,  61,  20,  62,  20,  63,  20,  64,  20,   9,
   9,   9,  47,  47,  48,  48,  38,  38,  30,  30,
  30,  22,  21,  21,   7,   7,   7,   2,   1,   1,
   3,   3,   3,   3,   3,   3,   8,   8,   8,   8,
  11,  11,  12,  12,  10,  10,  10,  10,  10,  24,
  24,  24,  24,  24,  24,  24,  43,  43,  43,  23,
  23,  37,  37,  65,  66,  67,  13,  68,  69,  70,
  13,  14,  14,  46,  46,  44,  44,  71,  45,  45,
  33,  33,  26,  26,  27,  27,  28,  28,  29,  29,
  15,  15,  49,  49,  32,  32,  32,  32,  32,  32,
  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
  32,  32,  32,  32,  32,  72,  32,  32,  32,  57,
  57,  16,  16,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  35,  35,  35,  50,
  50,  50,  50,  36,  36,  36,  36,  36,  36,  36,
  36,  36,  36,  36,  36,  36,  42,  42,  41,  41,
  40,  40,  17,  17,  17,  17,  17,  17,  17,  17,
  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
  58,  58,  18,  18,  19,  19,  53,  53,  52,  52,
  52,  55,  55,  51,  51,  51,  51,  51,  51,  51,
  51,  51,  51,  25,  25,  56,  56,  56,  56
};
short	yyr2[] =
{
   0,   1,   0,   2,   3,   0,   7,   0,   7,   6,
   2,   5,   3,   0,   3,   1,   1,   1,   1,   3,
   4,   0,   7,   0,   7,   0,   8,   0,   6,   0,
   1,   1,   0,   3,   1,   3,   1,   3,   0,   1,
   3,   1,   1,   2,   0,   1,   3,   2,   0,   2,
   1,   4,   3,   3,   6,   3,   2,   3,   8,   9,
   0,   4,   1,   2,   0,   1,   2,   2,   3,   1,
   3,   7,   8,   2,   2,   3,   1,   7,   2,   0,
   2,   3,   4,   0,   0,   0,   7,   0,   0,   0,
   7,   0,   2,   3,   3,   0,   2,   0,   5,   3,
   3,   3,   0,   2,   4,   3,   1,   2,   0,   1,
   1,   3,   0,   2,   2,   2,   1,   4,   3,   3,
   2,   3,   3,   3,   3,   3,   2,   3,   9,   5,
   6,   5,   7,   2,   3,   0,   4,   3,   3,   0,
   1,   0,   1,   1,   3,   3,   3,   3,   3,   3,
   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
   3,   3,   3,   3,   4,   3,   3,   3,   3,   3,
   3,   3,   3,   3,   3,   3,   1,   4,   5,   1,
   2,   7,   2,   1,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   0,   1,   1,   3,
   1,   3,   3,   4,   4,   4,   3,   4,   3,   2,
   2,   2,   1,   3,   1,   1,   1,   1,   1,   2,
   1,   1,   0,   1,   1,   3,   1,   3,   2,   5,
   4,   1,   3,   1,   1,   1,   1,   1,   1,   1,
   1,   4,   5,   0,   3,   0,   1,   1,   1
};
short	yychk[] =
{
-1000,  -4,  -5,  -6, -52, -20,  85, -56,  63,  64,
  73,  79,  82,  81,  91,  -7,  -8, -31,  -2,  46,
 -12,  44,  45,  35,   4, -54,  46, -52,  63,  73,
  64, -51,  92,  44,  51,  52,  53,  54,  56,  57,
  59,  45,  58,  -9, -22,  45,  46,  -9,  -9,  -9,
   4,   5,  44,  -1,   6,  44, -11,  45,  46,  44,
  35, -12,  42,  -8, -12,   4,  44, -53, -50, -51,
  92,  43,  44, -61, -62, -47,  43, -64,  -2,  -8,
 -10, -24,  35,  42, -51,  92,  -3, -16,  43,  42,
  97, -34, -35, -36,  44, -17,  35,  23,  33,  34,
  38,  94,  39, 101, 102,  65,  40,  18, -22,  47,
  87,  48,  49,  50, 103, -10,  43,  42, -11, -12,
  46, -22, -39,  44, -53,  96,   5, -12,  44, -52,
 -55, -50, -55,  97,  97, -63, -48, -22,  97,  96,
   5, -51, -51,  42, -12,  44,  -8, -43, -52,   5,
 -34,  42, -58,  45,  42,  46,  -3,  35,  36,  37,
  33,  34,  32,  31,  26,  27,  28,  29,  24,  25,
  23,  22,  21,  20,  19,   6,   7,  40,   8,   9,
  10,  11,  12,  13,  14,  15,  16,  17,  30, -50,
  88, -40, -41, -34,  97,  44,  43,  42,  41,  38,
  39,  18, -35, -35, -35, -35, -35, -35, -35, -35,
 -35, -36,  44, -35, -35,  50,  96, -16, -22,  46,
 -11,   4, -10,  96, -53, -12,  99,   5,  96, -21,
  -6, -21,  97,  99,   5, -38, -30, -22, -59,   4,
 -24,  42,  42,  44, -11, -12,  44,  -8,  -3,  99,
  45, -34,  42,  42,  98, -34, -34, -34, -34, -34,
 -34, -34, -34, -34, -34, -34, -34, -34, -34, -34,
 -34, -34, -34, -34, -34,   6, -34, -34, -34, -34,
 -34, -34, -34, -34, -34, -34, -34,  96, -50,   5,
  96, -42, -40, -18, -19, -34, -34, -58,  45, -58,
 -50, -60,  99, -11,  96,  96,  96, -55, -25,  43,
  98,  -6,  98, -21, -48,  98,   5,   6, -13,  97,
  90, -12,  96, -12, -34,  97, -58, -34, -35,  96,
 -41,  98,  96,   5,  99,  96, -13,  96,  44,  44,
 -34,  -9,  -9,  98, -38, -34, -65, -68,  96,  44,
  96,  -3, -35, -34,  44, -10, -10,  99,  -9, -23,
 -23,  44, -10,  44,  98, -10,  96,  96, -37, -66,
 -51,  92, -69, -10,  96, -10,  96, -14,  -7, -52,
 -14,  96,  96, -67, -15, -32,  46,   2, -16, -13,
  61,  88,  89,  80,  78,  86,  75,  74,  93,  76,
  66,  69,  68,  72,  77,  70,  67,  95,  84,  62,
   4,  -7, -70,  98, 100,   4,   4, -34, -19, -19,
 -28, -15,  46, -29,  46,  46, -19, -19, -34, -33,
  97,  90, -16,  44,  44, -15,  44, -13, -34, -34,
 -57,  47, -57,   4,  98, -15, -49,   5,   4,   4,
 -13,   4,   4,   4,   4,   4, -26, -26,   4, -16,
 -34,  68, -34, -33, -72,   4,   4,   4,  50,  98,
 -27,  60,  83,  98,   4,  96,  44,  96, -46,  97,
  90, -34, 100, -16, -15, -34, -15, -44, -26, 100,
 -14,   4,  96,  71,  98, -45,  60,  83,  98, -14,
 -16, -15, -50, 100,  96, -71, -14, -15, 100, -14
};
short	yydef[] =
{
   2,  -2,  -2,   3,  44,   0, 245,   0,  29,  29,
  29,  29, 246, 247, 248,   0,  48,   0,  45,  60,
   0,   0,   0,  62,  10,   0,   0,  15,  16,  17,
  18, 228,   0,   0, 233, 234, 235, 236, 237, 238,
 239, 240,   0,  21,  30,  31,  41,  23,  32,  27,
   4,   0,  64,  47, 141,  64,  56,   0,  60,   0,
  63,   0,   0,  13,   0,  12,   0,   0, 226, 179,
 245,   0,   0,   0,   0,  25,   0,   0,  46,  48,
   0,  65,   0,   0,  69, 245,  49,  50,   0,   0,
 141, 142, 143, 176,   0, 183,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 212, 214,
 215, 216, 217, 218,   0,   0, 141,   0,  57,   0,
  60,  19,   0,  64,   0, 230,   0, 180,   0, 182,
   0, 231,   0, 245, 245,   0,   0,  34,  38,   5,
   0,  66,  67,   0,  60,   0,  74,  73,  76, 141,
   0,   0,   0, 221,   0, 220,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 200, 198, 196, 222,   0,   0,   0, 209,
 210, 211, 184, 185, 186, 187, 188, 189, 190, 191,
 192, 193,   0, 194, 195, 219,   7,   0,  20,  60,
   0,  11,   0, 229, 227,   0, 241,   0, 243, 245,
  42, 245, 245,  33,   0,   0,  36,  39,   0,   9,
  68,   0,  75,   0,  70,   0,   0,  78,  55,   0,
   0,  52,   0, 213,  53, 144, 145, 146, 147, 148,
 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
 159, 160, 161, 162, 163,   0, 165, 166, 167, 168,
 169, 170, 171, 172, 173, 174, 175,   0,   0,   0,
 202,   0, 197,   0, 223, 224,   0, 206, 221, 208,
   0,   0,  61,   0,   0,  14,   0, 232, 242,   0,
  29,  43,  29, 245,  35,  28,  38,   0,   6,  83,
  87,   0,   0,   0,  51, 141, 207, 164, 177,   0,
 201, 199, 204,   0, 205, 203,   8,   0,  64,  64,
   0,  22,  24,  29,  37,  40,  79,  79,   0,  64,
   0,   0, 178, 225,  64,   0,   0, 244,  26,  84,
  88,  64,   0,  64,  54,   0,  58, 181,  80,  91,
  44, 245,  91,   0,  71,   0,  59,  -2,   0,  44,
  -2,  72,  77,   0,  92, 110,  41,   0,   0, 116,
   0,   0,   0,  -2, 108,   0,   0,   0,   0,   0,
 141,   0,   0,  -2,   0,   0,   0,   0, 139, 139,
  81,   0,   0,  86,  -2, 114, 115, 112,   0,   0,
 120, 106,  41,   0, 109,   0,   0,   0,   0, 126,
 102, 102,   0, 141,   0,   0,   0, 133,   0, 135,
   0, 140,   0,  82,  90, 111,   0,   0, 118, 119,
 107, 121, 122, 123, 124, 125,   0,   0, 127,   0,
   0,   0,   0, 134,   0, 137, 138, 117, 113, 100,
 103,   0,   0, 101, 141,  -2,   0,  -2, 136,  95,
 102,   0,  91,   0, 129,   0, 131,   0,   0,  91,
  -2, 141, 130,  -2,  93,  96,   0,   0,  94,  -2,
   0, 132,  97,  91,  -2,   0,  -2, 128,  91,  -2
};
short	yytok1[] =
{
   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 101,   0,   0, 103,  37,  23,   0,
  44,  96,  35,  33,   5,  34,  42,  36,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 100,   4,
  26,   6,  27,  18,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,  43,   0,  99,  22,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,  97,  21,  98, 102
};
short	yytok2[] =
{
   2,   3,   7,   8,   9,  10,  11,  12,  13,  14,
  15,  16,  17,  19,  20,  24,  25,  28,  29,  30,
  31,  32,  38,  39,  40,  41,  45,  46,  47,  48,
  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,
  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,
  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,
  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,
  89,  90,  91,  92,  93,  94,  95
};
long	yytok3[] =
{
   0
};

#line	1	"/sys/lib/yaccpar"
#define YYFLAG 		-1000
#define	yyclearin	yychar = -1
#define	yyerrok		yyerrflag = 0

#ifdef	yydebug
#include	"y.debug"
#else
#define	yydebug		0
char*	yytoknames[1];		/* for debugging */
char*	yystates[1];		/* for debugging */
#endif

/*	parser for yacc output	*/

int	yynerrs = 0;		/* number of errors */
int	yyerrflag = 0;		/* error recovery flag */

extern	int	fprint(int, char*, ...);
extern	int	sprint(char*, char*, ...);

char*
yytokname(int yyc)
{
	static char x[16];

	if(yyc > 0 && yyc <= sizeof(yytoknames)/sizeof(yytoknames[0]))
	if(yytoknames[yyc-1])
		return yytoknames[yyc-1];
	sprint(x, "<%d>", yyc);
	return x;
}

char*
yystatname(int yys)
{
	static char x[16];

	if(yys >= 0 && yys < sizeof(yystates)/sizeof(yystates[0]))
	if(yystates[yys])
		return yystates[yys];
	sprint(x, "<%d>\n", yys);
	return x;
}

long
yylex1(void)
{
	long yychar;
	long *t3p;
	int c;

	yychar = yylex();
	if(yychar <= 0) {
		c = yytok1[0];
		goto out;
	}
	if(yychar < sizeof(yytok1)/sizeof(yytok1[0])) {
		c = yytok1[yychar];
		goto out;
	}
	if(yychar >= YYPRIVATE)
		if(yychar < YYPRIVATE+sizeof(yytok2)/sizeof(yytok2[0])) {
			c = yytok2[yychar-YYPRIVATE];
			goto out;
		}
	for(t3p=yytok3;; t3p+=2) {
		c = t3p[0];
		if(c == yychar) {
			c = t3p[1];
			goto out;
		}
		if(c == 0)
			break;
	}
	c = 0;

out:
	if(c == 0)
		c = yytok2[1];	/* unknown char */
	if(yydebug >= 3)
		fprint(2, "lex %.4lux %s\n", yychar, yytokname(c));
	return c;
}

int
yyparse(void)
{
	struct
	{
		YYSTYPE	yyv;
		int	yys;
	} yys[YYMAXDEPTH], *yyp, *yypt;
	short *yyxi;
	int yyj, yym, yystate, yyn, yyg;
	long yychar;
	YYSTYPE save1, save2;
	int save3, save4;

	save1 = yylval;
	save2 = yyval;
	save3 = yynerrs;
	save4 = yyerrflag;

	yystate = 0;
	yychar = -1;
	yynerrs = 0;
	yyerrflag = 0;
	yyp = &yys[-1];
	goto yystack;

ret0:
	yyn = 0;
	goto ret;

ret1:
	yyn = 1;
	goto ret;

ret:
	yylval = save1;
	yyval = save2;
	yynerrs = save3;
	yyerrflag = save4;
	return yyn;

yystack:
	/* put a state and value onto the stack */
	if(yydebug >= 4)
		fprint(2, "char %s in %s", yytokname(yychar), yystatname(yystate));

	yyp++;
	if(yyp >= &yys[YYMAXDEPTH]) {
		yyerror("yacc stack overflow");
		goto ret1;
	}
	yyp->yys = yystate;
	yyp->yyv = yyval;

yynewstate:
	yyn = yypact[yystate];
	if(yyn <= YYFLAG)
		goto yydefault; /* simple state */
	if(yychar < 0)
		yychar = yylex1();
	yyn += yychar;
	if(yyn < 0 || yyn >= YYLAST)
		goto yydefault;
	yyn = yyact[yyn];
	if(yychk[yyn] == yychar) { /* valid shift */
		yychar = -1;
		yyval = yylval;
		yystate = yyn;
		if(yyerrflag > 0)
			yyerrflag--;
		goto yystack;
	}

yydefault:
	/* default state action */
	yyn = yydef[yystate];
	if(yyn == -2) {
		if(yychar < 0)
			yychar = yylex1();

		/* look through exception table */
		for(yyxi=yyexca;; yyxi+=2)
			if(yyxi[0] == -1 && yyxi[1] == yystate)
				break;
		for(yyxi += 2;; yyxi += 2) {
			yyn = yyxi[0];
			if(yyn < 0 || yyn == yychar)
				break;
		}
		yyn = yyxi[1];
		if(yyn < 0)
			goto ret0;
	}
	if(yyn == 0) {
		/* error ... attempt to resume parsing */
		switch(yyerrflag) {
		case 0:   /* brand new error */
			yyerror("syntax error");
			yynerrs++;
			if(yydebug >= 1) {
				fprint(2, "%s", yystatname(yystate));
				fprint(2, "saw %s\n", yytokname(yychar));
			}

		case 1:
		case 2: /* incompletely recovered error ... try again */
			yyerrflag = 3;

			/* find a state where "error" is a legal shift action */
			while(yyp >= yys) {
				yyn = yypact[yyp->yys] + YYERRCODE;
				if(yyn >= 0 && yyn < YYLAST) {
					yystate = yyact[yyn];  /* simulate a shift of "error" */
					if(yychk[yystate] == YYERRCODE)
						goto yystack;
				}

				/* the current yyp has no shift onn "error", pop stack */
				if(yydebug >= 2)
					fprint(2, "error recovery pops state %d, uncovers %d\n",
						yyp->yys, (yyp-1)->yys );
				yyp--;
			}
			/* there is no state on the stack with an error shift ... abort */
			goto ret1;

		case 3:  /* no shift yet; clobber input char */
			if(yydebug >= 2)
				fprint(2, "error recovery discards %s\n", yytokname(yychar));
			if(yychar == YYEOFCODE)
				goto ret1;
			yychar = -1;
			goto yynewstate;   /* try again in the same state */
		}
	}

	/* reduction by production yyn */
	if(yydebug >= 2)
		fprint(2, "reduce %d in:\n\t%s", yyn, yystatname(yystate));

	yypt = yyp;
	yyp -= yyr2[yyn];
	yyval = (yyp+1)->yyv;
	yym = yyn;

	/* consult goto table to find next state */
	yyn = yyr1[yyn];
	yyg = yypgo[yyn];
	yyj = yyg + yyp->yys + 1;

	if(yyj >= YYLAST || yychk[yystate=yyact[yyj]] != -yyn)
		yystate = yyact[yyg];
	switch(yym) {
		
case 1:
#line	69	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			polyasgn();
			packdepend();
			strop();
		} break;
case 2:
#line	77	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 3:
#line	79	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
			pushdcl(yypt[-0].yyv.node, Global);
			gendata(yypt[-0].yyv.node);
		} break;
case 4:
#line	87	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = simpledecl(yypt[-2].yyv.type, yypt[-1].yyv.node);
		} break;
case 5:
#line	91	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			fundecl(yypt[-4].yyv.type, yypt[-3].yyv.node, yypt[-1].yyv.node);
		} break;
case 6:
#line	95	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			fungen(yypt[-0].yyv.node, yypt[-5].yyv.node);
			yyval.node = yypt[-5].yyv.node->left;
		} break;
case 7:
#line	100	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-4].yyv.type->class != External && yypt[-4].yyv.type->class != Global)
				diag(yypt[-3].yyv.node, "%s illegal storage class for adt function",
						sclass[yypt[-4].yyv.type->class]);
			fundecl(yypt[-4].yyv.type, yypt[-3].yyv.node, yypt[-1].yyv.node);
			adtchk(yypt[-3].yyv.node->init, yypt[-3].yyv.node);
			yypt[-1].yyv.node->init = nil;
		} break;
case 8:
#line	109	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			fungen(yypt[-0].yyv.node, yypt[-5].yyv.node);
			adtbfun = nil;
			yyval.node = yypt[-5].yyv.node->left;
		} break;
case 9:
#line	115	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			applytype(yypt[-5].yyv.type, yypt[-4].yyv.node);
			funproto(yypt[-4].yyv.node, yypt[-2].yyv.node);
			yyval.node = yypt[-4].yyv.node;
		} break;
case 10:
#line	121	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-1].yyv.node)
				buildtype(yypt[-1].yyv.node);
		} break;
case 11:
#line	126	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			newtype(yypt[-3].yyv.type, yypt[-2].yyv.node, yypt[-1].yyv.node);
			yyval.node = nil;
		} break;
case 12:
#line	131	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-1].yyv.sym->lexval = Ttypename;
			yypt[-1].yyv.sym->ltype = at(TPOLY, nil);
			yypt[-1].yyv.sym->ltype->sym = yypt[-1].yyv.sym;
			yyval.node = nil;
		} break;
case 13:
#line	140	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 14:
#line	142	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = yypt[-1].yyv.node; } break;
case 16:
#line	147	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 17:
#line	149	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 18:
#line	151	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = nil; } break;
case 19:
#line	155	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->init = adtfunc(yypt[-2].yyv.ltype, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
		} break;
case 20:
#line	160	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->init = adtfunc(yypt[-2].yyv.ltype, yypt[-0].yyv.node);
			yypt[-0].yyv.node->right = yypt[-3].yyv.node;
			yyval.node = yypt[-0].yyv.node;
		} break;
case 21:
#line	168	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-0].yyv.node)
				yypt[-0].yyv.node->sym->lexval = Ttypename;
		} break;
case 22:
#line	173	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OAGDECL, an(OLIST, yypt[-5].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
		} break;
case 23:
#line	177	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-0].yyv.node)
				yypt[-0].yyv.node->sym->lexval = Ttypename; 
		} break;
case 24:
#line	182	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OUNDECL, an(OLIST, yypt[-5].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
		} break;
case 25:
#line	186	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-1].yyv.node) {
				yypt[-1].yyv.node->sym->lexval = Ttypename;
				yypt[-1].yyv.node->right = buildadt;
				buildadt = yypt[-1].yyv.node;
			}
			else
				diag(nil, "adt decl needs type name");
		} break;
case 26:
#line	196	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			if(yypt[-6].yyv.node) {
				buildadt = yypt[-6].yyv.node->right;
				yypt[-6].yyv.node->right = nil;
				yyval.node = an(OADTDECL, an(OLIST, yypt[-6].yyv.node, yypt[-0].yyv.node), yypt[-2].yyv.node);
				yyval.node->poly = yypt[-5].yyv.node;
			}
			else
				yyval.node = nil;
		} break;
case 27:
#line	207	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			setbase = 0;
			if(yypt[-0].yyv.node) {
				yypt[-0].yyv.node->sym->lexval = Ttypename;
				newtype(builtype[TINT], yypt[-0].yyv.node, nil);
			}
		} break;
case 28:
#line	215	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSETDECL, nil, nil);
		} break;
case 29:
#line	221	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 31:
#line	224	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, nil, nil);
			yyval.node->sym = yypt[-0].yyv.ltype.s;
		} break;
case 32:
#line	231	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 33:
#line	233	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 34:
#line	239	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			polytyp(yypt[-0].yyv.node);
		} break;
case 35:
#line	243	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-2].yyv.node->left = yypt[-0].yyv.node;
			yyval.node = yypt[-2].yyv.node;
		} break;
case 37:
#line	251	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 38:
#line	257	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 39:
#line	259	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->sym->lexval = Tsname;
			coverset(yypt[-0].yyv.node);
		} break;
case 40:
#line	264	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-2].yyv.node->sym->lexval = Tsname;
			yypt[-2].yyv.node->left = yypt[-0].yyv.node;
			coverset(yypt[-2].yyv.node);
		} break;
case 41:
#line	272	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, nil, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 43:
#line	280	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 44:
#line	286	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 46:
#line	289	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 47:
#line	295	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node->init = yypt[-0].yyv.node;
			typechk(yypt[-0].yyv.node, 0);
			rewrite(yypt[-0].yyv.node);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 48:
#line	304	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 49:
#line	306	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-0].yyv.node;
		} break;
case 51:
#line	313	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 52:
#line	317	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 53:
#line	322	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
		} break;
case 54:
#line	326	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OINDEX, yypt[-4].yyv.node, an(OILIST, yypt[-1].yyv.node, nil));
		} break;
case 55:
#line	330	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 56:
#line	336	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 57:
#line	341	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONAME, yypt[-0].yyv.node, yypt[-2].yyv.node);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 58:
#line	346	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OFUNC, an(OLIST, yypt[-4].yyv.node, yypt[-6].yyv.node), nil);
			yyval.node->sym = yypt[-5].yyv.sym;
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 59:
#line	352	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OFUNC, an(OLIST, yypt[-4].yyv.node, yypt[-6].yyv.node), yypt[-8].yyv.node);
			yyval.node->sym = yypt[-5].yyv.sym;
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 60:
#line	360	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 61:
#line	362	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OARRAY, yypt[-1].yyv.node, yypt[-3].yyv.node);
			typechk(yypt[-1].yyv.node, 0);
			rewrite(yypt[-1].yyv.node);
		} break;
case 62:
#line	370	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIND, nil, nil);
		} break;
case 63:
#line	374	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIND, yypt[-1].yyv.node, nil);
		} break;
case 64:
#line	381	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = builtype[TVOID];
		} break;
case 66:
#line	387	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADTARG, nil, nil);
			yyval.node->t = at(TIND, yypt[-0].yyv.type);
		} break;
case 67:
#line	392	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADTARG, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 68:
#line	397	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 69:
#line	403	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 70:
#line	408	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = argproto(yypt[-2].yyv.type, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 71:
#line	412	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = yypt[-6].yyv.type;
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 72:
#line	420	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = mkcast(yypt[-7].yyv.type, yypt[-6].yyv.node);
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 73:
#line	428	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-0].yyv.node;
		} break;
case 74:
#line	432	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			applytype(yypt[-1].yyv.type, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
			if(yyval.node->t->type == TARRAY) {
				yyval.node->t->type = TIND;
				yyval.node->t->size = builtype[TIND]->size;
			}
		} break;
case 75:
#line	441	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OVARARG, nil, nil);
		} break;
case 76:
#line	447	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPROTO, nil, nil);
			yyval.node->t = yypt[-0].yyv.type;
		} break;
case 77:
#line	452	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node= an(OPROTO, nil, nil);
			yyval.node->t = yypt[-6].yyv.type;
			yyval.node->t = at(TFUNC, yyval.node->t);
			yyval.node->t = mkcast(yyval.node->t, yypt[-4].yyv.node);
			yyval.node->proto = yypt[-1].yyv.node;
		} break;
case 78:
#line	460	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			applytype(yypt[-1].yyv.type, yypt[-0].yyv.node);
			yyval.node = yypt[-0].yyv.node;
			if(yyval.node->t->type == TARRAY) {
				yyval.node->t->type = TIND;
				yyval.node->t->size = builtype[TIND]->size;
			}
		} break;
case 79:
#line	471	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 80:
#line	473	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 81:
#line	479	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			applytype(yypt[-2].yyv.type, yypt[-1].yyv.node);
			pushdcl(yypt[-1].yyv.node, Automatic);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 82:
#line	485	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			applytype(yypt[-2].yyv.type, yypt[-1].yyv.node);
			pushdcl(yypt[-1].yyv.node, Automatic);
			yyval.node = yypt[-1].yyv.node;
		} break;
case 83:
#line	493	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ enterblock(); } break;
case 84:
#line	495	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ scopeis(Automatic); } break;
case 85:
#line	497	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ leaveblock(); } break;
case 86:
#line	499	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = an(OBLOCK, yypt[-2].yyv.node, nil); } break;
case 87:
#line	501	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ enterblock(); } break;
case 88:
#line	503	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ scopeis(Automatic); } break;
case 89:
#line	505	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ leaveblock(); } break;
case 90:
#line	507	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = an(OLBLOCK, yypt[-2].yyv.node, nil); } break;
case 91:
#line	511	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 92:
#line	513	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 93:
#line	519	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 94:
#line	523	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLBLOCK, yypt[-1].yyv.node, nil);
		} break;
case 95:
#line	529	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 96:
#line	531	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 97:
#line	536	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ settype(yypt[-0].yyv.type); } break;
case 98:
#line	537	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			unsettype();
			yyval.node = an(OCASE, con(typesig(yypt[-3].yyv.type)), yypt[-0].yyv.node);
		} break;
case 99:
#line	542	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODEFAULT, nil, yypt[-0].yyv.node);
		} break;
case 100:
#line	548	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 101:
#line	552	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLBLOCK, yypt[-1].yyv.node, nil);
		} break;
case 102:
#line	558	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 103:
#line	560	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 104:
#line	566	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCASE, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 105:
#line	570	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODEFAULT, nil, yypt[-0].yyv.node);
		} break;
case 107:
#line	577	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLABEL, yypt[-0].yyv.node, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 108:
#line	584	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 109:
#line	586	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLABEL, nil, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 111:
#line	594	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, an(OLABEL, nil, nil), yypt[-0].yyv.node);
			yyval.node->left->sym = yypt[-2].yyv.sym;
		} break;
case 112:
#line	601	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 113:
#line	603	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 0);
		} break;
case 114:
#line	609	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 117:
#line	613	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCHECK, yypt[-2].yyv.node, yypt[-1].yyv.node);
		} break;
case 118:
#line	617	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OALLOC, yypt[-1].yyv.node, nil);
		} break;
case 119:
#line	621	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OUALLOC, yypt[-1].yyv.node, nil);
		} break;
case 120:
#line	625	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORESCUE, yypt[-0].yyv.node, nil);
		} break;
case 121:
#line	629	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORAISE, yypt[-1].yyv.node, nil);
		} break;
case 122:
#line	633	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OGOTO, nil, nil);
			yyval.node->sym = yypt[-1].yyv.sym;
		} break;
case 123:
#line	638	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPROCESS, yypt[-1].yyv.node, nil);
		} break;
case 124:
#line	642	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OTASK, yypt[-1].yyv.node, nil);
		} break;
case 125:
#line	646	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OBECOME, yypt[-1].yyv.node, nil);
		} break;
case 126:
#line	650	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSELECT, yypt[-0].yyv.node, nil);
		} break;
case 127:
#line	654	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORET, yypt[-1].yyv.node, nil);
		} break;
case 128:
#line	658	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OFOR, an(OLIST, yypt[-6].yyv.node, an(OLIST, yypt[-4].yyv.node, yypt[-2].yyv.node)), yypt[-0].yyv.node);
		} break;
case 129:
#line	662	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OWHILE, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 130:
#line	666	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODWHILE, yypt[-1].yyv.node, yypt[-4].yyv.node);
		} break;
case 131:
#line	670	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIF, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 132:
#line	674	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIF, yypt[-4].yyv.node, an(OELSE, yypt[-2].yyv.node, yypt[-0].yyv.node));
		} break;
case 133:
#line	678	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPAR, yypt[-0].yyv.node, nil);
		} break;
case 134:
#line	682	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSWITCH, yypt[-1].yyv.node, yypt[-0].yyv.node);
		} break;
case 135:
#line	686	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-0].yyv.node->link = swstack;
			swstack = yypt[-0].yyv.node;
		} break;
case 136:
#line	691	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			swstack = yypt[-2].yyv.node->link;
			yyval.node = an(OSWITCH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 137:
#line	696	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCONT, nil, nil);
			yyval.node->ival = yypt[-1].yyv.ival;
		} break;
case 138:
#line	701	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OBREAK, nil, nil);
			yyval.node->ival = yypt[-1].yyv.ival;
		} break;
case 139:
#line	708	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.ival = 1; } break;
case 141:
#line	713	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 144:
#line	719	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OMUL, yypt[-2].yyv.node, yypt[-0].yyv.node); 
		} break;
case 145:
#line	723	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODIV, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 146:
#line	727	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OMOD, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 147:
#line	731	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADD, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 148:
#line	735	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSUB, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 149:
#line	739	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORSH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 150:
#line	743	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLSH, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 151:
#line	747	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLT, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 152:
#line	751	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OGT, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 153:
#line	755	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 154:
#line	759	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OGEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 155:
#line	763	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 156:
#line	767	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 157:
#line	771	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLAND, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 158:
#line	775	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OXOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 159:
#line	779	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 160:
#line	783	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCAND, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 161:
#line	787	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCOR, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 162:
#line	791	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OASGN, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 163:
#line	795	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OVASGN, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 164:
#line	799	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OASGN, an(OSEND, yypt[-3].yyv.node, nil), yypt[-0].yyv.node);
		} break;
case 165:
#line	803	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADDEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 166:
#line	807	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSUBEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 167:
#line	811	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OMULEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 168:
#line	815	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODIVEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 169:
#line	819	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OMODEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 170:
#line	823	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORSHEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 171:
#line	827	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLSHEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 172:
#line	831	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OANDEQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 173:
#line	835	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OOREQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 174:
#line	839	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OXOREQ, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 175:
#line	843	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OITER, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 177:
#line	850	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCONV, yypt[-0].yyv.node, nil);
			yyval.node->t = yypt[-2].yyv.type;
		} break;
case 178:
#line	855	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OALLOC, yypt[-0].yyv.node, nil);
			yyval.node->t = yypt[-2].yyv.type;
		} break;
case 180:
#line	863	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = mkcast(yypt[-1].yyv.type, yypt[-0].yyv.node);
		} break;
case 181:
#line	867	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = mkcast(at(TFUNC, yypt[-6].yyv.type), yypt[-4].yyv.node);
			yyval.type = yyval.type->next;
			yyval.type->proto = an(OPROTO, yypt[-1].yyv.node, nil);
			yyval.type = at(TIND, yyval.type);
		} break;
case 182:
#line	874	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = yypt[-0].yyv.type;
		} break;
case 184:
#line	881	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIND, yypt[-0].yyv.node, nil);
		} break;
case 185:
#line	885	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADDR, yypt[-0].yyv.node, nil);
		} break;
case 186:
#line	889	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OADD, yypt[-0].yyv.node, con(0));
		} break;
case 187:
#line	893	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSUB, con(0), yypt[-0].yyv.node);
		} break;
case 188:
#line	897	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OEDEC, yypt[-0].yyv.node, nil);
		} break;
case 189:
#line	901	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OXEROX, yypt[-0].yyv.node, nil);
		} break;
case 190:
#line	905	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OEINC, yypt[-0].yyv.node, nil);
		} break;
case 191:
#line	909	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ONOT, yypt[-0].yyv.node, nil);
		} break;
case 192:
#line	913	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OXOR, yypt[-0].yyv.node, con(-1));
		} break;
case 193:
#line	917	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSTORAGE, yypt[-0].yyv.node, nil);
		} break;
case 194:
#line	921	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ORECV, yypt[-0].yyv.node, nil);
		} break;
case 195:
#line	925	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCRCV, yypt[-0].yyv.node, nil);
		} break;
case 196:
#line	930	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 199:
#line	935	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
			yyval.node->t = at(TAGGREGATE, 0);
		} break;
case 201:
#line	943	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 202:
#line	948	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
			if(yypt[-1].yyv.node->type == OLIST) {
				yyval.node = an(OILIST, yypt[-1].yyv.node, nil);
				yyval.node->t = at(TAGGREGATE, 0);
			}
		} break;
case 203:
#line	956	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OSTORAGE, nil, nil);
			yyval.node->t = yypt[-1].yyv.type;
		} break;
case 204:
#line	961	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCALL, yypt[-3].yyv.node, yypt[-1].yyv.node);
		} break;
case 205:
#line	965	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OIND, an(OADD, yypt[-3].yyv.node, yypt[-1].yyv.node), nil);
		} break;
case 206:
#line	969	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODOT, yypt[-2].yyv.node, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 207:
#line	974	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCONST, nil, nil);
			yyval.node->t = at(TVOID, 0);
			yyval.node->t = at(TIND, yyval.node->t);
			yyval.node->ival = 0;
			yyval.node = an(OCONV, yyval.node, nil);
			yyval.node->t = at(TIND, yypt[-2].yyv.ltype.t);
			yyval.node = an(OIND, yyval.node, nil);
			yyval.node = an(ODOT, yyval.node, nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 208:
#line	986	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(ODOT, an(OIND, yypt[-2].yyv.node, nil), nil);
			yyval.node->sym = yypt[-0].yyv.sym;
		} break;
case 209:
#line	991	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPDEC, yypt[-1].yyv.node, nil);
		} break;
case 210:
#line	995	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OPINC, yypt[-1].yyv.node, nil);
		} break;
case 211:
#line	999	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCSND, yypt[-1].yyv.node, nil);
		} break;
case 212:
#line	1003	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			derivetype(yypt[-0].yyv.node);
		} break;
case 213:
#line	1007	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = vargptr();
		} break;
case 214:
#line	1011	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = con(yypt[-0].yyv.ival);
		} break;
case 215:
#line	1015	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = con(0);
			yyval.node->t = at(TIND, builtype[TVOID]);
		} break;
case 216:
#line	1020	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = con(yypt[-0].yyv.ival);
		} break;
case 217:
#line	1024	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OCONST, nil, nil);
			yyval.node->t = builtype[TFLOAT];
			yyval.node->fval = yypt[-0].yyv.fval;
		} break;
case 218:
#line	1030	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 0);
		} break;
case 219:
#line	1034	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = strnode(yypt[-0].yyv.string, 1);
		} break;
case 221:
#line	1041	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.sym = yypt[-0].yyv.ltype.s;
		} break;
case 222:
#line	1047	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 225:
#line	1053	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = an(OLIST, yypt[-2].yyv.node, yypt[-0].yyv.node);
		} break;
case 227:
#line	1060	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-2].yyv.type->member = yypt[-0].yyv.type;
			yyval.type = yypt[-2].yyv.type;
		} break;
case 228:
#line	1067	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-0].yyv.type->class = yypt[-1].yyv.clas;
			yyval.type = yypt[-0].yyv.type;
		} break;
case 229:
#line	1072	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = unshape(yypt[-1].yyv.type);
			yyval.type->class = yypt[-4].yyv.clas;
		} break;
case 230:
#line	1077	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = unshape(yypt[-1].yyv.type);
			yyval.type->class = yypt[-3].yyv.clas;
		} break;
case 232:
#line	1085	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yypt[-2].yyv.type->variant = yypt[-0].yyv.type;
			yyval.type = yypt[-2].yyv.type;
		} break;
case 233:
#line	1091	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TINT, 0); } break;
case 234:
#line	1092	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TUINT, 0); } break;
case 235:
#line	1093	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TSINT, 0); } break;
case 236:
#line	1094	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TSUINT, 0); } break;
case 237:
#line	1095	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TCHAR, 0); } break;
case 238:
#line	1096	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TFLOAT, 0); } break;
case 239:
#line	1097	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = at(TVOID, 0); } break;
case 240:
#line	1099	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = yypt[-0].yyv.ltype.t; } break;
case 241:
#line	1101	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.type = polybuild(yypt[-3].yyv.ltype.t, yypt[-1].yyv.type); } break;
case 242:
#line	1103	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.type = at(TCHANNEL, yypt[-2].yyv.type);
			if(yypt[-0].yyv.node != nil)
				chani(yyval.type, yypt[-0].yyv.node);
		} break;
case 243:
#line	1111	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.node = nil; } break;
case 244:
#line	1113	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.node = yypt[-1].yyv.node;
		} break;
case 245:
#line	1119	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{
			yyval.clas = Global;
			if(buildadt)
				yyval.clas = Adtdeflt;
		} break;
case 246:
#line	1124	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.clas = External; } break;
case 247:
#line	1125	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.clas = Internal; } break;
case 248:
#line	1126	"/usr/seh/wrk/alef/sys/src/alef/port/parl.y"
{ yyval.clas = Private; } break;
	}
	goto yystack;  /* stack new state and value */
}
