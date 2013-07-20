#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20101229

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 18 "ats_grammar.yats"
/**/
#include <stdio.h> /* for [fprintf]*/
#include "ats_memory.h" /* HX: loading [ats_types.h] as well*/
/*
// HX: this is okay
#define malloc ats_malloc_gc
#define realloc ats_realloc_gc
#define free ats_free_gc
*/
/**/
/* HX-2011-09-06:*/
/**/
#define malloc ats_malloc_ngc
#define realloc ats_realloc_ngc
#define free ats_free_ngc

extern void yyerror (char *s) ;

/* ****** ****** */

typedef ats_ptr_type c0har_t ;
typedef ats_ptr_type e0xtcode_t ;
typedef ats_ptr_type f0loat_t ;
typedef ats_ptr_type f0loatsp_t ;
typedef ats_ptr_type i0nt_t ;
typedef ats_ptr_type i0ntsp_t ;
typedef ats_ptr_type s0tring_t ;
typedef ats_ptr_type t0kn_t ;

typedef ats_ptr_type abskind_t ;
typedef ats_ptr_type dcstkind_t ;
typedef ats_ptr_type datakind_t ;
typedef ats_ptr_type stadefkind_t ;
typedef ats_ptr_type valkind_t ;
typedef ats_ptr_type funkind_t ;
typedef ats_ptr_type lamkind_t ;
typedef lamkind_t fixkind_t ;
typedef ats_ptr_type srpifkindtok_t ;

typedef ats_ptr_type i0de_t ;
typedef ats_ptr_type i0delst_t ;
typedef ats_ptr_type i0delstlst_t ;
typedef ats_ptr_type i0dext_t ;
typedef ats_ptr_type l0ab_t ;

typedef ats_ptr_type p0rec_t ;

typedef ats_ptr_type e0xp_t ;
typedef ats_ptr_type e0xplst_t ;
typedef ats_ptr_type e0xpopt_t ;

typedef ats_ptr_type e0fftag_t ;
typedef ats_ptr_type e0fftaglst_t ;
typedef ats_ptr_type e0fftaglstopt_t ;

typedef ats_ptr_type s0rtq_t ;
typedef ats_ptr_type s0rt_t ;
typedef ats_ptr_type s0rtlst_t ;
typedef ats_ptr_type s0rtopt_t ;
typedef ats_ptr_type s0rtpol_t ;

typedef ats_ptr_type d0atsrtcon_t ;
typedef ats_ptr_type d0atsrtconlst_t ;
typedef ats_ptr_type d0atsrtdec_t ;
typedef ats_ptr_type d0atsrtdeclst_t ;

typedef ats_ptr_type s0taq_t ;
typedef ats_ptr_type d0ynq_t ;
typedef ats_ptr_type sqi0de_t ;
typedef ats_ptr_type dqi0de_t ;
typedef ats_ptr_type arrqi0de_t ;
typedef ats_ptr_type tmpqi0de_t ;
typedef ats_ptr_type s0arg_t ;
typedef ats_ptr_type s0arglst_t ;
typedef ats_ptr_type s0arglstlst_t ;
typedef ats_ptr_type s0exp_t ;
typedef ats_ptr_type s0expext_t ; /* for external types*/
typedef ats_ptr_type s0explst_t ;
typedef ats_ptr_type s0expopt_t ;
typedef ats_ptr_type s0explstlst_t ;
typedef ats_ptr_type s0explstopt_t ;
typedef ats_ptr_type labs0explst_t ;
typedef ats_ptr_type s0arrind_t ;
typedef ats_ptr_type t1mps0explstlst_t ; /* with location information*/
typedef ats_ptr_type s0rtext_t ;
typedef ats_ptr_type s0qua_t ;
typedef ats_ptr_type s0qualst_t ;
typedef ats_ptr_type s0qualstlst_t ;
typedef ats_ptr_type s0qualstopt_t ;
typedef ats_ptr_type impqi0de_t ;

typedef ats_ptr_type sp0at_t ;

typedef ats_ptr_type d0atarg_t ;
typedef ats_ptr_type d0atarglst_t ;
typedef ats_ptr_type s0rtdef_t ;
typedef ats_ptr_type s0rtdeflst_t ;
typedef ats_ptr_type s0tacon_t ;
typedef ats_ptr_type s0taconlst_t ;
typedef ats_ptr_type s0tacst_t ;
typedef ats_ptr_type s0tacstlst_t ;
typedef ats_ptr_type s0tavar_t ;
typedef ats_ptr_type s0tavarlst_t ;
typedef ats_ptr_type s0expdef_t ;
typedef ats_ptr_type s0expdeflst_t ;
typedef ats_ptr_type s0aspdec_t ;
typedef ats_ptr_type d0atcon_t ;
typedef ats_ptr_type d0atconlst_t ;
typedef ats_ptr_type d0atdec_t ;
typedef ats_ptr_type d0atdeclst_t ;
typedef ats_ptr_type e0xndec_t ;
typedef ats_ptr_type e0xndeclst_t ;

typedef ats_ptr_type p0arg_t ;
typedef ats_ptr_type p0arglst_t ;
typedef ats_ptr_type d0arg_t ;
typedef ats_ptr_type d0arglst_t ;
typedef ats_ptr_type m0acarg_t ;
typedef ats_ptr_type m0acarglst_t ;
typedef ats_ptr_type extnamopt_t ;
typedef ats_ptr_type d0cstdec_t ;
typedef ats_ptr_type d0cstdeclst_t ;
typedef ats_ptr_type p0at_t ;
typedef ats_ptr_type p0atlst_t ;
typedef ats_ptr_type labp0atlst_t ;
typedef ats_ptr_type s0vararg_t ;
typedef ats_ptr_type s0exparg_t ;
typedef ats_ptr_type f0arg_t ;
typedef ats_ptr_type f0arglst_t ;
typedef ats_ptr_type s0elop_t ;
typedef ats_ptr_type witht0ype_t ;
typedef ats_ptr_type d0exp_t ;
typedef ats_ptr_type d0explst_t ;
typedef ats_ptr_type d0expopt_t ;
typedef ats_ptr_type labd0explst_t ;
typedef ats_ptr_type d0arrind_t ;
typedef ats_ptr_type ifhead_t ;
typedef ats_ptr_type casehead_t ;
typedef ats_ptr_type loophead_t ;
typedef ats_ptr_type tryhead_t ;
typedef ats_ptr_type m0atch_t ;
typedef ats_ptr_type m0atchlst_t ;
typedef ats_ptr_type guap0at_t ;
typedef ats_ptr_type c0lau_t ;
typedef ats_ptr_type c0laulst_t ;
typedef ats_ptr_type sc0lau_t ;
typedef ats_ptr_type sc0laulst_t ;
typedef ats_ptr_type i0nvarg_t ;
typedef ats_ptr_type i0nvarglst_t ;
typedef ats_ptr_type i0nvresstate_t ;
typedef ats_ptr_type loopi0nv_t ;
typedef ats_ptr_type initestpost_t ;
typedef ats_ptr_type v0aldec_t ;
typedef ats_ptr_type v0aldeclst_t ;
typedef ats_ptr_type f0undec_t ;
typedef ats_ptr_type f0undeclst_t ;
typedef ats_ptr_type v0arwth_t ;
typedef ats_ptr_type v0ardec_t ;
typedef ats_ptr_type v0ardeclst_t ;
typedef ats_ptr_type m0acdef_t ;
typedef ats_ptr_type m0acdeflst_t ;
typedef ats_ptr_type i0mpdec_t ;
typedef ats_ptr_type d0ec_t ;
typedef ats_ptr_type d0eclst_t ;
typedef ats_ptr_type d0ecllst_t ;
typedef ats_ptr_type guad0ec_t ;

/* ****** ****** */

typedef ats_ptr_type yyres_t ;

/* ****** ****** */

yyres_t theYYVALyyres ; /* the result of parsing */

/* ****** ****** */

extern abskind_t abskind_prop (void) ;
extern abskind_t abskind_type (void) ;
extern abskind_t abskind_t0ype (void) ;
extern abskind_t abskind_view (void) ;
extern abskind_t abskind_viewtype (void) ;
extern abskind_t abskind_viewt0ype (void) ;

extern dcstkind_t dcstkind_fun (void) ;
extern dcstkind_t dcstkind_val (void) ;
extern dcstkind_t dcstkind_castfn (void) ;
extern dcstkind_t dcstkind_praxi (void) ;
extern dcstkind_t dcstkind_prfun (void) ;
extern dcstkind_t dcstkind_prval (void) ;

extern datakind_t datakind_prop (void) ;
extern datakind_t datakind_type (void) ;
extern datakind_t datakind_view (void) ;
extern datakind_t datakind_viewtype (void) ;

extern stadefkind_t stadefkind_generic (void) ;
extern stadefkind_t stadefkind_prop (t0kn_t) ;
extern stadefkind_t stadefkind_type (t0kn_t) ;
extern stadefkind_t stadefkind_view (t0kn_t) ;
extern stadefkind_t stadefkind_viewtype (t0kn_t) ;

extern valkind_t valkind_val (void) ;
extern valkind_t valkind_valminus (void) ;
extern valkind_t valkind_valplus (void) ;
extern valkind_t valkind_prval (void) ;

extern funkind_t funkind_fn (void) ;
extern funkind_t funkind_fnstar (void) ;
extern funkind_t funkind_fun (void) ;
extern funkind_t funkind_castfn (void) ;
extern funkind_t funkind_prfn (void) ;
extern funkind_t funkind_prfun (void) ;

extern lamkind_t lamkind_lam (t0kn_t) ;
extern lamkind_t lamkind_atlam (t0kn_t) ;
extern lamkind_t lamkind_llam (t0kn_t) ;
extern lamkind_t lamkind_atllam (t0kn_t) ;
extern fixkind_t fixkind_fix (t0kn_t) ;
extern fixkind_t fixkind_atfix (t0kn_t) ;

extern srpifkindtok_t srpifkindtok_if (t0kn_t) ;
extern srpifkindtok_t srpifkindtok_ifdef (t0kn_t) ;
extern srpifkindtok_t srpifkindtok_ifndef (t0kn_t) ;

/* ****** ****** */

extern i0de_t i0de_make_ampersand (t0kn_t) ;
extern i0de_t i0de_make_backslash (t0kn_t) ;
extern i0de_t i0de_make_bang (t0kn_t) ;
extern i0de_t i0de_make_eq (t0kn_t) ;
extern i0de_t i0de_make_gt (t0kn_t) ;
extern i0de_t i0de_make_gtlt (t0kn_t) ;
extern i0de_t i0de_make_lt (t0kn_t) ;
extern i0de_t i0de_make_minusgt (t0kn_t) ;
extern i0de_t i0de_make_minuslt (t0kn_t) ;
extern i0de_t i0de_make_minusltgt (t0kn_t) ;
extern i0de_t i0de_make_module (t0kn_t) ;
extern i0de_t i0de_make_r0ead (t0kn_t) ;
extern i0de_t i0de_make_tilde (t0kn_t) ;
extern i0de_t i0de_make_t0ype (t0kn_t) ;
extern i0de_t i0de_make_viewt0ype (t0kn_t) ;

extern i0de_t i0de_make_DO (t0kn_t) ;
extern i0de_t i0de_make_IN (t0kn_t) ;
extern i0de_t i0de_make_WHILE (t0kn_t) ;

extern i0delst_t i0delst_nil (void) ;
extern i0delst_t i0delst_sing (i0de_t) ;
extern i0delst_t i0delst_cons (i0de_t, i0delst_t) ;

extern i0delstlst_t i0delstlst_nil (void) ;
extern i0delstlst_t i0delstlst_cons (i0delst_t, i0delstlst_t) ;

extern l0ab_t l0ab_ide (i0de_t) ;
extern l0ab_t l0ab_int (i0nt_t) ;

extern i0de_t stai0de_make (i0de_t) ;

/* ****** ****** */

extern p0rec_t p0rec_emp (void) ;
extern p0rec_t p0rec_ide (i0de_t) ;
extern p0rec_t p0rec_int (i0nt_t) ;
extern p0rec_t p0rec_opr (i0de_t, i0de_t/*opr*/, i0nt_t) ;

/* ****** ****** */

extern e0xp_t e0xp_app (e0xp_t, e0xp_t) ;
extern e0xp_t e0xp_char (c0har_t) ;
extern e0xp_t e0xp_eval (t0kn_t, e0xp_t, t0kn_t) ;
extern e0xp_t e0xp_float (f0loat_t) ;
extern e0xp_t e0xp_ide (i0de_t) ;
extern e0xp_t e0xp_int (i0nt_t) ;
extern e0xp_t e0xp_list (t0kn_t, e0xplst_t, t0kn_t) ;
extern e0xp_t e0xp_string (s0tring_t) ;
extern e0xplst_t e0xplst_nil (void) ;
extern e0xplst_t e0xplst_cons (e0xp_t, e0xplst_t) ;
extern e0xpopt_t e0xpopt_none (void) ;
extern e0xpopt_t e0xpopt_some (e0xp_t) ;

/* ****** ****** */

extern e0fftag_t e0fftag_cst (int, i0de_t) ;
extern e0fftag_t e0fftag_var (i0de_t) ;
extern e0fftag_t e0fftag_var_fun (t0kn_t) ;
extern e0fftag_t e0fftag_int (i0nt_t) ;
extern e0fftaglst_t e0fftaglst_nil (void) ;
extern e0fftaglst_t e0fftaglst_cons (e0fftag_t, e0fftaglst_t) ;
extern e0fftaglstopt_t e0fftaglstopt_none (void) ;
extern e0fftaglstopt_t e0fftaglstopt_some (e0fftaglst_t) ;

/* ****** ****** */

extern s0rtq_t s0rtq_str (s0tring_t) ;
extern s0rtq_t s0rtq_sym (i0de_t) ;

extern s0rt_t s0rt_prop (t0kn_t) ;
extern s0rt_t s0rt_type (t0kn_t) ;
extern s0rt_t s0rt_t0ype (t0kn_t) ;
extern s0rt_t s0rt_view (t0kn_t) ;
extern s0rt_t s0rt_viewtype (t0kn_t) ;
extern s0rt_t s0rt_viewt0ype (t0kn_t) ;

extern s0rt_t s0rt_app (s0rt_t, s0rt_t) ;
extern s0rt_t s0rt_ide (i0de_t) ;
extern s0rt_t s0rt_qid (s0rtq_t, i0de_t) ;
extern s0rt_t s0rt_list (t0kn_t, s0rtlst_t, t0kn_t) ;
extern s0rt_t s0rt_tup (t0kn_t, s0rtlst_t, t0kn_t) ;

extern s0rtlst_t s0rtlst_nil (void) ;
extern s0rtlst_t s0rtlst_cons (s0rt_t, s0rtlst_t) ;

extern s0rtopt_t s0rtopt_none (void) ;
extern s0rtopt_t s0rtopt_some (s0rt_t) ;

extern s0rtpol_t s0rtpol_make (s0rt_t, int) ;

/* ****** ****** */

/*
** datasort declaration
*/
extern d0atsrtcon_t d0atsrtcon_make_none (i0de_t) ;
extern d0atsrtcon_t d0atsrtcon_make_some (i0de_t, s0rt_t) ;
extern d0atsrtconlst_t d0atsrtconlst_nil (void) ;
extern d0atsrtconlst_t d0atsrtconlst_cons (d0atsrtcon_t, d0atsrtconlst_t) ;
extern d0atsrtdec_t d0atsrtdec_make (i0de_t, d0atsrtconlst_t) ;
extern d0atsrtdeclst_t d0atsrtdeclst_nil (void) ;
extern d0atsrtdeclst_t d0atsrtdeclst_cons (d0atsrtdec_t, d0atsrtdeclst_t) ;

/* ****** ****** */

/*
** static qualifiers
*/
extern s0taq_t s0taq_symdot (i0de_t) ;
extern s0taq_t s0taq_symcolon (i0de_t) ;
extern s0taq_t s0taq_fildot (s0tring_t) ;

/*
** dynamic qualifiers
*/
extern d0ynq_t d0ynq_symcolon(i0de_t) ;
extern d0ynq_t d0ynq_symdot(i0de_t) ;
extern d0ynq_t d0ynq_symdot_symcolon(i0de_t, i0de_t) ;
extern d0ynq_t d0ynq_fildot(s0tring_t) ;
extern d0ynq_t d0ynq_fildot_symcolon(s0tring_t, i0de_t) ;

/* ****** ****** */

/*
** (qualified) static identifiers
*/
extern sqi0de_t sqi0de_make_none (i0de_t) ;
extern sqi0de_t sqi0de_make_some (s0taq_t, i0de_t) ;

/*
** (qualified) dynamic identifiers
*/
extern dqi0de_t dqi0de_make_none (i0de_t) ;
extern dqi0de_t dqi0de_make_some (d0ynq_t, i0de_t) ;

/*
** (qualified) array identifiers
*/
extern arrqi0de_t arrqi0de_make_none (i0de_t) ;
extern arrqi0de_t arrqi0de_make_some (d0ynq_t, i0de_t) ;

/*
** (qualified) template identifiers
*/
extern tmpqi0de_t tmpqi0de_make_none (i0de_t) ;
extern tmpqi0de_t tmpqi0de_make_some (d0ynq_t, i0de_t) ;

/* ****** ****** */

/*
** static arguments
*/
extern s0arg_t s0arg_make (i0de_t, s0rtopt_t) ;
extern s0arg_t s0arg_make_none (i0de_t) ;
extern s0arglst_t s0arglst_nil (void) ;
extern s0arglst_t s0arglst_cons (s0arg_t, s0arglst_t) ;
extern s0arglstlst_t s0arglstlst_nil (void) ;
extern s0arglstlst_t s0arglstlst_cons (s0arglst_t, s0arglstlst_t) ;
extern s0arglstlst_t s0arglstlst_cons_ide (i0de_t, s0arglstlst_t) ;

/* ****** ****** */

extern impqi0de_t impqi0de_make_none (dqi0de_t) ;
extern impqi0de_t impqi0de_make_some
  (tmpqi0de_t, s0explst_t, t1mps0explstlst_t, t0kn_t) ;

/* ****** ****** */

extern sp0at_t sp0at_con (sqi0de_t, s0arglst_t, t0kn_t) ;

/* ****** ****** */

/*
** static expressions
*/
extern s0exp_t s0exp_ann (s0exp_t, s0rt_t) ;
extern s0exp_t s0exp_app (s0exp_t, s0exp_t) ;
extern s0exp_t s0exp_char (c0har_t) ;
extern s0exp_t s0exp_exi (t0kn_t, int/*funres*/, s0qualst_t, t0kn_t) ;
extern s0expext_t s0expext_nam (t0kn_t, s0tring_t/*name*/) ;
extern s0expext_t s0expext_app (s0expext_t/*fun*/, s0exp_t/*arg*/) ;
extern s0exp_t s0exp_extern (s0expext_t) ;
extern s0exp_t s0exp_ide (i0de_t) ;
extern s0exp_t s0exp_imp (t0kn_t, e0fftaglst_t, t0kn_t) ;
extern s0exp_t s0exp_imp_emp (t0kn_t) ;
extern s0exp_t s0exp_int (i0nt_t) ;
extern s0exp_t s0exp_intsp_err (i0nt_t) ; /* error handling */
extern s0exp_t s0exp_lams (t0kn_t, s0arglstlst_t, s0rtopt_t, s0exp_t) ;
extern s0exp_t s0exp_list (t0kn_t, s0explst_t, t0kn_t) ;
extern s0exp_t s0exp_list2 (t0kn_t, s0explst_t, s0explst_t, t0kn_t) ;
/*
// HX-2010-12-04: inadequate design
extern s0exp_t s0exp_named (i0de_t, s0exp_t) ;
*/
extern s0exp_t s0exp_opide (t0kn_t, i0de_t) ;
extern s0exp_t s0exp_qid (s0taq_t, i0de_t) ;
extern s0exp_t s0exp_struct (t0kn_t, labs0explst_t, t0kn_t) ;
extern s0exp_t s0exp_tyarr (t0kn_t, s0exp_t, s0arrind_t) ;
extern s0exp_t s0exp_tyrec (int, t0kn_t, labs0explst_t, t0kn_t) ;
extern s0exp_t s0exp_tyrec_ext (t0kn_t, s0tring_t, labs0explst_t, t0kn_t) ;
extern s0exp_t s0exp_tytup (int, t0kn_t, s0explst_t, t0kn_t) ;
extern s0exp_t s0exp_tytup2 (int, t0kn_t, s0explst_t, s0explst_t, t0kn_t) ;
extern s0exp_t s0exp_uni (t0kn_t, s0qualst_t, t0kn_t) ;
extern s0exp_t s0exp_union (t0kn_t, s0exp_t, labs0explst_t, t0kn_t) ;

extern s0explst_t s0explst_nil (void) ;
extern s0explst_t s0explst_cons (s0exp_t, s0explst_t) ;

extern s0expopt_t s0expopt_none (void) ;
extern s0expopt_t s0expopt_some (s0exp_t) ;

extern s0explstlst_t s0explstlst_nil (void) ;
extern s0explstlst_t s0explstlst_cons (s0explst_t, s0explstlst_t) ;

extern s0explstopt_t s0explstopt_none (void) ;
extern s0explstopt_t s0explstopt_some (s0explst_t) ;

extern labs0explst_t labs0explst_nil (void) ;
extern labs0explst_t labs0explst_cons (l0ab_t, s0exp_t, labs0explst_t) ;

extern s0arrind_t s0arrind_make_sing (s0explst_t, t0kn_t) ;
extern s0arrind_t s0arrind_make_cons (s0explst_t, s0arrind_t) ;

extern t1mps0explstlst_t gtlt_t1mps0expseqseq_nil (void) ;
extern t1mps0explstlst_t
gtlt_t1mps0expseqseq_cons_tok (t0kn_t, s0explst_t, t1mps0explstlst_t) ;
/* end of [extern]*/

/* ****** ****** */

extern s0rtext_t s0rtext_srt (s0rt_t) ;
extern s0rtext_t s0rtext_sub
  (t0kn_t, i0de_t, s0rtext_t, s0exp_t, s0explst_t, t0kn_t) ;

extern s0qua_t s0qua_prop(s0exp_t) ;
extern s0qua_t s0qua_vars(i0de_t, i0delst_t, s0rtext_t) ;
extern s0qualst_t s0qualst_nil (void) ;
extern s0qualst_t s0qualst_cons (s0qua_t, s0qualst_t) ;
extern s0qualstlst_t s0qualstlst_nil (void) ;
extern s0qualstlst_t s0qualstlst_cons (s0qualst_t, s0qualstlst_t) ;
extern s0qualstopt_t s0qualstopt_none (void) ;
extern s0qualstopt_t s0qualstopt_some (s0qualst_t) ;

/* ****** ****** */

extern d0atarg_t d0atarg_srt (s0rtpol_t) ;
extern d0atarg_t d0atarg_id_srt (i0de_t, s0rtpol_t) ;
extern d0atarglst_t d0atarglst_nil (void) ;
extern d0atarglst_t d0atarglst_cons (d0atarg_t, d0atarglst_t) ;

/* ****** ****** */

extern s0rtdef_t s0rtdef_make (i0de_t, s0rtext_t) ;
extern s0rtdeflst_t s0rtdeflst_nil (void) ;
extern s0rtdeflst_t s0rtdeflst_cons (s0rtdef_t, s0rtdeflst_t) ;

/* ****** ****** */

extern s0tacon_t s0tacon_make_none_none (i0de_t) ;
extern s0tacon_t s0tacon_make_some_none (i0de_t, d0atarglst_t, t0kn_t) ;
extern s0tacon_t s0tacon_make_none_some (i0de_t, s0exp_t) ;
extern s0tacon_t s0tacon_make_some_some (i0de_t, d0atarglst_t, s0exp_t) ;
extern s0taconlst_t s0taconlst_nil (void) ;
extern s0taconlst_t s0taconlst_cons (s0tacon_t, s0taconlst_t) ;

extern s0tacst_t s0tacst_make_none (i0de_t, s0rt_t) ;
extern s0tacst_t s0tacst_make_some (i0de_t, d0atarglst_t, s0rt_t) ;
extern s0tacstlst_t s0tacstlst_nil (void) ;
extern s0tacstlst_t s0tacstlst_cons (s0tacst_t, s0tacstlst_t) ;

extern s0tavar_t s0tavar_make (i0de_t, s0rt_t) ;
extern s0tavarlst_t s0tavarlst_nil (void) ;
extern s0tavarlst_t s0tavarlst_cons (s0tavar_t, s0tavarlst_t) ;

/* ****** ****** */

extern s0expdef_t s0expdef_make (i0de_t, s0arglstlst_t, s0rtopt_t, s0exp_t) ;
extern s0expdeflst_t s0expdeflst_nil (void) ;
extern s0expdeflst_t s0expdeflst_cons (s0expdef_t, s0expdeflst_t) ;
/**/
extern s0aspdec_t s0aspdec_make (i0de_t, s0arglstlst_t, s0rtopt_t, s0exp_t) ;
/**/
extern d0atcon_t
d0atcon_make (s0qualstlst_t, i0de_t, s0explstopt_t, s0expopt_t) ;
extern d0atconlst_t d0atconlst_nil (void) ;
extern d0atconlst_t d0atconlst_cons (d0atcon_t, d0atconlst_t) ;
/**/
extern d0atdec_t d0atdec_make_none (i0de_t, d0atconlst_t) ;
extern d0atdec_t
d0atdec_make_some (i0de_t, d0atarglst_t, t0kn_t, d0atconlst_t) ;
extern d0atdeclst_t d0atdeclst_nil (void) ;
extern d0atdeclst_t d0atdeclst_cons (d0atdec_t, d0atdeclst_t) ;
/**/
extern e0xndec_t e0xndec_make (s0qualstlst_t, i0de_t, s0expopt_t) ;
extern e0xndeclst_t e0xndeclst_nil (void) ;
extern e0xndeclst_t e0xndeclst_cons (e0xndec_t, e0xndeclst_t) ;

/* ****** ****** */

extern p0arg_t p0arg_make_none (i0de_t) ;
extern p0arg_t p0arg_make_some (i0de_t, s0exp_t) ;
extern p0arglst_t p0arglst_nil (void) ;
extern p0arglst_t p0arglst_cons (p0arg_t, p0arglst_t) ;
/**/
extern d0arg_t d0arg_var (i0de_t) ;
extern d0arg_t d0arg_dyn (t0kn_t, p0arglst_t, t0kn_t) ;
extern d0arg_t d0arg_dyn2 (t0kn_t, p0arglst_t, p0arglst_t, t0kn_t) ;
extern d0arg_t d0arg_sta (t0kn_t, s0qualst_t, t0kn_t) ;
extern d0arglst_t d0arglst_nil (void) ;
extern d0arglst_t d0arglst_cons (d0arg_t, d0arglst_t) ;
/**/
extern m0acarg_t m0acarg_one (i0de_t) ;
extern m0acarg_t m0acarg_lst (t0kn_t, i0delst_t, t0kn_t) ;
extern m0acarglst_t m0acarglst_nil () ;
extern m0acarglst_t m0acarglst_cons (m0acarg_t, m0acarglst_t) ;

/* ****** ****** */

extern extnamopt_t extnamopt_none (void) ;
extern extnamopt_t extnamopt_some (s0tring_t) ;

extern d0cstdec_t
d0cstdec_make (i0de_t, d0arglst_t, e0fftaglstopt_t, s0exp_t, extnamopt_t) ;
extern d0cstdeclst_t d0cstdeclst_nil (void) ;
extern d0cstdeclst_t d0cstdeclst_cons (d0cstdec_t, d0cstdeclst_t) ;

/* ****** ****** */

extern p0at_t p0at_ann (p0at_t, s0exp_t) ;
extern p0at_t p0at_apps (p0at_t, p0atlst_t) ;
extern p0at_t p0at_as (i0de_t, p0at_t) ;
extern p0at_t p0at_char (c0har_t) ;
extern p0at_t p0at_exist (t0kn_t, s0arglst_t, t0kn_t) ;
extern p0at_t p0at_float (f0loat_t); 
extern p0at_t p0at_free (t0kn_t, p0at_t); 
extern p0at_t p0at_ide (i0de_t) ;
extern p0at_t p0at_int (i0nt_t) ;
extern p0at_t p0at_list (t0kn_t, p0atlst_t, t0kn_t) ;
extern p0at_t p0at_list2 (t0kn_t, p0atlst_t, p0atlst_t, t0kn_t) ;
extern p0at_t p0at_lst (t0kn_t, p0atlst_t, t0kn_t) ;
extern p0at_t p0at_qid (d0ynq_t, i0de_t) ;
extern p0at_t p0at_opide (t0kn_t, i0de_t) ;
extern p0at_t p0at_rec (int, t0kn_t, labp0atlst_t, t0kn_t) ;
extern p0at_t p0at_ref (t0kn_t, i0de_t); 
extern p0at_t p0at_refas (t0kn_t, i0de_t, p0at_t); 
extern p0at_t p0at_svararg (t0kn_t, s0vararg_t, t0kn_t) ;
extern p0at_t p0at_string (s0tring_t) ;
extern p0at_t p0at_tup (int, t0kn_t, p0atlst_t, t0kn_t) ;
extern p0at_t p0at_tup2 (int, t0kn_t, p0atlst_t, p0atlst_t, t0kn_t) ;
/**/
extern p0atlst_t p0atlst_nil (void) ;
extern p0atlst_t p0atlst_cons (p0at_t, p0atlst_t) ;
/**/
extern labp0atlst_t labp0atlst_nil (void) ;
extern labp0atlst_t labp0atlst_dot (void) ;
extern labp0atlst_t labp0atlst_cons (l0ab_t, p0at_t, labp0atlst_t) ;
/**/
extern s0vararg_t s0vararg_one (void) ;
extern s0vararg_t s0vararg_all (void) ;
extern s0vararg_t s0vararg_seq (s0arglst_t) ;

/* ****** ****** */

extern s0exparg_t s0exparg_one (void) ;
extern s0exparg_t s0exparg_all (void) ;
extern s0exparg_t s0exparg_seq (s0explst_t) ;

extern f0arg_t f0arg_sta1 (t0kn_t, s0qualst_t, t0kn_t) ;
extern f0arg_t f0arg_sta2 (t0kn_t, s0arglst_t, t0kn_t) ;
extern f0arg_t f0arg_dyn (p0at_t) ;
extern f0arg_t f0arg_met_none (t0kn_t) ;
extern f0arg_t f0arg_met_some (t0kn_t, s0explst_t, t0kn_t) ;
extern f0arglst_t f0arglst_nil (void) ;
extern f0arglst_t f0arglst_cons (f0arg_t, f0arglst_t) ;

extern s0elop_t s0elop_make (int, t0kn_t) ;

extern witht0ype_t witht0ype_none (void) ;
extern witht0ype_t witht0ype_prop (s0exp_t) ;
extern witht0ype_t witht0ype_type (s0exp_t) ;
extern witht0ype_t witht0ype_view (s0exp_t) ;
extern witht0ype_t witht0ype_viewtype (s0exp_t) ;

/* ****** ****** */

/*
** dynamic expressions
*/
extern d0exp_t d0exp_ann (d0exp_t, s0exp_t) ;
/**/
extern d0exp_t d0exp_apps (d0exp_t, d0explst_t) ;
/**/
extern d0exp_t d0exp_arrinit_none
  (t0kn_t, s0exp_t, d0explst_t /*elt*/, t0kn_t) ;
extern d0exp_t d0exp_arrinit_some
  (t0kn_t, s0exp_t, d0exp_t /*asz*/, d0explst_t /*elt*/, t0kn_t) ;
/**/
extern d0exp_t d0exp_arrsize
  (t0kn_t, s0exp_t, t0kn_t/*lparen*/, d0explst_t, t0kn_t/*rparen*/) ;
/**/
extern d0exp_t d0exp_arrsub (arrqi0de_t, d0arrind_t) ;
/**/
extern d0exp_t d0exp_char (t0kn_t) ;
/**/
extern d0exp_t d0exp_caseof (casehead_t, d0exp_t, t0kn_t, c0laulst_t) ;
/**/
extern d0exp_t d0exp_crypt (int, t0kn_t) ;
/**/
extern d0exp_t d0exp_decseq (t0kn_t, d0eclst_t, t0kn_t) ;
/**/
extern d0exp_t d0exp_delay (int/*lin*/, t0kn_t) ;
/**/
extern d0exp_t d0exp_dynload (t0kn_t) ;
/**/
/* HX: [d0exp_effmask_*] are implemented in [ats_effect.dats]*/
/**/
extern d0exp_t d0exp_effmask_all (t0kn_t) ;
extern d0exp_t d0exp_effmask_exn (t0kn_t) ;
extern d0exp_t d0exp_effmask_ntm (t0kn_t) ;
extern d0exp_t d0exp_effmask_ref (t0kn_t) ;
/**/
extern d0exp_t d0exp_exist (t0kn_t, s0exparg_t, t0kn_t, d0exp_t, t0kn_t) ;
/**/
extern d0exp_t d0exp_extval (t0kn_t, s0exp_t, s0tring_t, t0kn_t) ;
/**/
extern d0exp_t d0exp_fix
  (fixkind_t, i0de_t, f0arglst_t, s0expopt_t, e0fftaglstopt_t, d0exp_t) ;
/**/
extern d0exp_t d0exp_float (f0loat_t) ;
extern d0exp_t d0exp_floatsp (f0loatsp_t) ;
/**/
extern d0exp_t d0exp_foldat (t0kn_t, d0explst_t) ;
/**/
extern d0exp_t d0exp_for_itp (loophead_t, initestpost_t, d0exp_t) ;
/**/
extern d0exp_t d0exp_freeat (t0kn_t, d0explst_t) ;
/**/
extern d0exp_t d0exp_ide (i0de_t) ;
extern d0exp_t d0exp_idext (i0de_t) ;
/**/
extern d0exp_t d0exp_if_none (ifhead_t, d0exp_t, d0exp_t) ;
extern d0exp_t d0exp_if_some (ifhead_t, d0exp_t, d0exp_t, d0exp_t) ;
/**/
extern d0exp_t d0exp_int (i0nt_t) ;
extern d0exp_t d0exp_intsp (i0ntsp_t) ;
/**/
extern
d0exp_t d0exp_lam
  (lamkind_t, f0arglst_t, s0expopt_t, e0fftaglstopt_t, d0exp_t) ;
/**/
extern
d0exp_t d0exp_let_seq (t0kn_t, d0eclst_t, t0kn_t, d0explst_t, t0kn_t) ;
/**/
extern
d0exp_t d0exp_list (t0kn_t, d0explst_t, t0kn_t) ;
extern
d0exp_t d0exp_list2 (t0kn_t, d0explst_t, d0explst_t, t0kn_t) ;
/**/
extern
d0exp_t d0exp_lst (
  int, t0kn_t, s0expopt_t, t0kn_t/*lparen*/, d0explst_t, t0kn_t/*rparen*/
) ; /* end of [d0exp_lst]*/
extern d0exp_t d0exp_lst_quote (t0kn_t, d0explst_t, t0kn_t) ;
/**/
extern d0exp_t d0exp_loopexn (int, t0kn_t) ;
/**/
extern d0exp_t d0exp_macsyn_cross (t0kn_t, d0explst_t, t0kn_t) ;
extern d0exp_t d0exp_macsyn_decode (t0kn_t, d0explst_t, t0kn_t) ;
extern d0exp_t d0exp_macsyn_encode_seq (t0kn_t, d0explst_t, t0kn_t) ;
/**/
extern d0exp_t d0exp_opide (t0kn_t, i0de_t) ;
extern d0exp_t d0exp_ptrof (t0kn_t) ;
extern d0exp_t d0exp_qid (d0ynq_t, i0de_t) ;
extern d0exp_t d0exp_raise (t0kn_t, d0exp_t) ;
extern d0exp_t d0exp_rec (int, t0kn_t, labd0explst_t, t0kn_t) ;
extern d0exp_t d0exp_scaseof (casehead_t, s0exp_t, t0kn_t, sc0laulst_t) ;
extern d0exp_t d0exp_sel_lab (t0kn_t, l0ab_t) ;
extern d0exp_t d0exp_sel_ind (t0kn_t, d0arrind_t) ;
extern d0exp_t d0exp_seq (t0kn_t, d0explst_t, t0kn_t) ;
extern d0exp_t d0exp_sexparg (t0kn_t, s0exparg_t, t0kn_t) ;
extern d0exp_t d0exp_sif (ifhead_t, s0exp_t, d0exp_t, d0exp_t) ;
extern d0exp_t d0exp_string (s0tring_t) ;
extern d0exp_t d0exp_tmpid (tmpqi0de_t, s0explst_t, t1mps0explstlst_t, t0kn_t) ;
extern d0exp_t d0exp_trywith_seq (tryhead_t, d0explst_t, t0kn_t, c0laulst_t) ;
extern d0exp_t d0exp_tup (int, t0kn_t, d0explst_t, t0kn_t) ;
extern d0exp_t d0exp_tup2 (int, t0kn_t, d0explst_t, d0explst_t, t0kn_t) ;
extern d0exp_t d0exp_viewat (t0kn_t) ;
extern d0exp_t d0exp_where (d0exp_t, d0eclst_t, t0kn_t) ;
extern d0exp_t d0exp_while (loophead_t, d0exp_t, d0exp_t) ;
/**/
extern d0exp_t d0exp_FILENAME (t0kn_t) ; /* a special string constant*/
extern d0exp_t d0exp_LOCATION (t0kn_t) ; /* a special string constant*/
/**/
extern d0explst_t d0explst_nil (void) ;
extern d0explst_t d0explst_cons (d0exp_t, d0explst_t) ;
extern d0explst_t d0explst_sing (d0exp_t) ;
/**/
extern d0expopt_t d0expopt_none (void) ;
extern d0expopt_t d0expopt_some (d0exp_t) ;
/**/
extern labd0explst_t labd0explst_nil (void) ;
extern labd0explst_t labd0explst_cons (l0ab_t, d0exp_t, labd0explst_t) ;
/**/
extern d0arrind_t d0arrind_make_sing (d0explst_t, t0kn_t) ;
extern d0arrind_t d0arrind_make_cons (d0explst_t, d0arrind_t) ;

/* ****** ****** */

extern ifhead_t ifhead_make (t0kn_t, i0nvresstate_t) ;
extern casehead_t casehead_make (int, t0kn_t, i0nvresstate_t) ;
extern loophead_t loophead_make_none (t0kn_t) ;
extern loophead_t loophead_make_some (t0kn_t, loopi0nv_t, t0kn_t) ;
extern tryhead_t tryhead_make (t0kn_t) ;

/* ****** ****** */

/*
** pattern matching
*/
extern m0atch_t m0atch_make_none (d0exp_t) ;
extern m0atch_t m0atch_make_some (d0exp_t, p0at_t) ;
extern m0atchlst_t m0atchlst_nil (void) ;
extern m0atchlst_t m0atchlst_cons (m0atch_t, m0atchlst_t) ;

extern guap0at_t guap0at_make_none (p0at_t) ;
extern guap0at_t guap0at_make_some (p0at_t, d0exp_t) ;

extern c0lau_t c0lau_make (guap0at_t, int, int, d0exp_t) ;
extern c0laulst_t c0laulst_nil (void) ;
extern c0laulst_t c0laulst_cons (c0lau_t, c0laulst_t) ;

extern sc0lau_t sc0lau_make (sp0at_t, d0exp_t) ;
extern sc0laulst_t sc0laulst_nil (void) ;
extern sc0laulst_t sc0laulst_cons (sc0lau_t, sc0laulst_t) ;

/* ****** ****** */

extern i0nvarg_t i0nvarg_make_none (i0de_t) ;
extern i0nvarg_t i0nvarg_make_some (i0de_t, s0exp_t) ;

extern i0nvarglst_t i0nvarglst_nil (void) ;
extern i0nvarglst_t i0nvarglst_cons (i0nvarg_t, i0nvarglst_t) ;

extern i0nvresstate_t i0nvresstate_none (void) ;
extern i0nvresstate_t i0nvresstate_some (s0qualstopt_t, i0nvarglst_t) ;

extern loopi0nv_t loopi0nv_make
  (s0qualstopt_t, s0explstopt_t, i0nvarglst_t, i0nvresstate_t) ;

extern initestpost_t initestpost_make
  (t0kn_t, d0explst_t, t0kn_t, d0explst_t, t0kn_t, d0explst_t, t0kn_t) ;
/* end of [extern]*/

/* ****** ****** */

extern v0aldec_t v0aldec_make (p0at_t, d0exp_t, witht0ype_t) ;
extern v0aldeclst_t v0aldeclst_nil (void) ;
extern v0aldeclst_t v0aldeclst_cons (v0aldec_t, v0aldeclst_t) ;

extern f0undec_t f0undec_make_none
  (i0de_t, f0arglst_t, d0exp_t, witht0ype_t) ;
extern f0undec_t f0undec_make_some
  (i0de_t, f0arglst_t, e0fftaglstopt_t, s0exp_t, d0exp_t, witht0ype_t) ;
extern f0undeclst_t f0undeclst_nil (void) ;
extern f0undeclst_t f0undeclst_cons (f0undec_t, f0undeclst_t) ;

extern v0arwth_t v0arwth_none () ;
extern v0arwth_t v0arwth_some (i0de_t) ;

extern v0ardec_t v0ardec_make_some_none
  (int /*stadyn*/, i0de_t, v0arwth_t, s0exp_t) ;
extern v0ardec_t v0ardec_make_none_some
  (int /*stadyn*/, i0de_t, v0arwth_t, d0exp_t) ;
extern v0ardec_t v0ardec_make_some_some
  (int /*stadyn*/, i0de_t, s0exp_t, v0arwth_t, d0exp_t) ;
extern v0ardeclst_t v0ardeclst_nil (void) ;
extern v0ardeclst_t v0ardeclst_cons (v0ardec_t, v0ardeclst_t) ;

/* ****** ****** */

extern m0acdef_t m0acdef_make (i0de_t, m0acarglst_t, d0exp_t) ;
extern m0acdeflst_t m0acdeflst_nil (void) ;
extern m0acdeflst_t m0acdeflst_cons (m0acdef_t, m0acdeflst_t) ;

/* ****** ****** */

extern
i0mpdec_t i0mpdec_make (impqi0de_t, f0arglst_t, s0expopt_t, d0exp_t) ;
/* end of [i0mpdec_make]*/
 
/* ****** ****** */

/*
** static and dynamic declarations
*/
extern d0ec_t d0ec_infix (t0kn_t, p0rec_t, int, i0delst_t) ;
extern d0ec_t d0ec_prefix (t0kn_t, p0rec_t, i0delst_t) ;
extern d0ec_t d0ec_postfix (t0kn_t, p0rec_t, i0delst_t) ;
extern d0ec_t d0ec_nonfix (t0kn_t, i0delst_t) ;
extern d0ec_t d0ec_symintr (t0kn_t, i0delst_t) ;
extern d0ec_t d0ec_include (int/*0:sta/1:dyn*/, s0tring_t) ;
extern d0ec_t d0ec_e0xpundef (i0de_t) ;
extern d0ec_t d0ec_e0xpdef (i0de_t, e0xpopt_t) ;
extern d0ec_t d0ec_e0xpact_assert (e0xp_t) ;
extern d0ec_t d0ec_e0xpact_error (e0xp_t) ;
extern d0ec_t d0ec_e0xpact_print (e0xp_t) ;
extern d0ec_t d0ec_srtdefs (s0rtdef_t, s0rtdeflst_t) ;
extern d0ec_t d0ec_datsrts (int/*para*/, d0atsrtdec_t, d0atsrtdeclst_t) ;
extern d0ec_t d0ec_stacons (abskind_t, s0tacon_t, s0taconlst_t) ;
extern d0ec_t d0ec_stacsts (s0tacst_t, s0tacstlst_t) ;
extern d0ec_t d0ec_stavars (s0tavar_t, s0tavarlst_t) ;
extern d0ec_t d0ec_sexpdefs (stadefkind_t, s0expdef_t, s0expdeflst_t) ;
extern d0ec_t d0ec_propdefs (t0kn_t, s0expdef_t, s0expdeflst_t) ;
extern d0ec_t d0ec_typedefs (t0kn_t, s0expdef_t, s0expdeflst_t) ;
extern d0ec_t d0ec_viewdefs (t0kn_t, s0expdef_t, s0expdeflst_t) ;
extern d0ec_t d0ec_viewtypedefs (t0kn_t, s0expdef_t, s0expdeflst_t) ;
extern d0ec_t d0ec_saspdec (s0aspdec_t) ;
extern d0ec_t d0ec_dcstdecs
  (dcstkind_t, s0qualstlst_t, d0cstdec_t, d0cstdeclst_t) ;
extern d0ec_t d0ec_datdecs
  (datakind_t, d0atdec_t, d0atdeclst_t, s0explstopt_t) ;
extern d0ec_t d0ec_exndecs (t0kn_t, e0xndec_t, e0xndeclst_t) ;
/**/
extern d0ec_t d0ec_classdec_none (t0kn_t, i0de_t) ;
extern d0ec_t d0ec_classdec_some (t0kn_t, i0de_t, s0exp_t) ;
/**/
extern d0ec_t d0ec_overload (t0kn_t, i0de_t, dqi0de_t) ;
extern d0ec_t d0ec_overload_lrbrackets (t0kn_t, t0kn_t, t0kn_t, dqi0de_t) ;
/**/
extern d0ec_t d0ec_dynload (s0tring_t) ;
extern d0ec_t d0ec_staload_none (s0tring_t) ;
extern d0ec_t d0ec_staload_some (i0de_t, s0tring_t) ;

extern d0ec_t d0ec_extype (s0tring_t, s0exp_t) ;
extern d0ec_t d0ec_extval (s0tring_t, d0exp_t) ;
extern d0ec_t d0ec_extcode_dyn (e0xtcode_t) ;
extern d0ec_t d0ec_extcode_sta (e0xtcode_t) ;
extern d0ec_t d0ec_valdecs (valkind_t, v0aldec_t, v0aldeclst_t) ;
extern d0ec_t d0ec_valdecs_par (v0aldec_t, v0aldeclst_t) ;
extern d0ec_t d0ec_valdecs_rec (v0aldec_t, v0aldeclst_t) ;
extern d0ec_t d0ec_fundecs (funkind_t, s0qualstlst_t, f0undec_t, f0undeclst_t) ;
extern d0ec_t d0ec_vardecs (v0ardec_t, v0ardeclst_t) ;
extern d0ec_t d0ec_macdefs (int, m0acdef_t, m0acdeflst_t) ;
extern d0ec_t d0ec_impdec (t0kn_t, s0arglstlst_t, i0mpdec_t) ;

extern d0ec_t d0ec_local (t0kn_t, d0eclst_t, d0eclst_t, t0kn_t) ;
extern d0ec_t d0ec_guadec (srpifkindtok_t, guad0ec_t) ;

extern guad0ec_t guad0ec_one (e0xp_t, d0eclst_t, t0kn_t) ;
extern guad0ec_t guad0ec_two (e0xp_t, d0eclst_t, d0eclst_t, t0kn_t) ;
extern guad0ec_t guad0ec_cons (e0xp_t, d0eclst_t, srpifkindtok_t, guad0ec_t) ;

extern d0eclst_t d0eclst_nil (void) ;
extern d0eclst_t d0eclst_cons (d0ec_t, d0eclst_t) ;
extern d0ecllst_t d0ecllst_nil (void) ;
extern d0ecllst_t d0ecllst_cons (d0ecllst_t, d0ec_t) ;
extern d0eclst_t d0ecllst_reverse (d0ecllst_t) ;

/* ****** ****** */

/*
** HX: implemented in [ats_parser.dats]
*/
extern yyres_t atsopt_yyres_i0de (i0de_t) ;
extern yyres_t atsopt_yyres_s0exp (s0exp_t) ;
extern yyres_t atsopt_yyres_d0exp (d0exp_t) ;
extern yyres_t atsopt_yyres_d0eclst (d0eclst_t) ;

/* ****** ****** */

typedef union {
t0kn_t t0kn ;
c0har_t c0har ;
e0xtcode_t e0xtcode ;
f0loat_t f0loat ;
f0loatsp_t f0loatsp ;
i0nt_t i0nt ;
i0ntsp_t i0ntsp ;
s0tring_t s0tring ;
i0de_t i0de ;
i0delst_t i0delst ;
l0ab_t l0ab ;
p0rec_t p0rec ;
abskind_t abskind ;
dcstkind_t dcstkind ;
datakind_t datakind ;
stadefkind_t stadefkind ;
valkind_t valkind ;
funkind_t funkind ;
lamkind_t lamkind ;
fixkind_t fixkind ;
srpifkindtok_t srpifkindtok ;
e0xp_t e0xp ;
e0xplst_t e0xplst ;
e0xpopt_t e0xpopt ;
e0fftag_t e0fftag ;
e0fftaglst_t e0fftaglst ;
e0fftaglstopt_t e0fftaglstopt ;
s0rt_t s0rt ;
s0rtq_t s0rtq ;
s0rtlst_t s0rtlst ;
s0rtopt_t s0rtopt ;
s0rtpol_t s0rtpol ;
d0atsrtcon_t d0atsrtcon ;
d0atsrtconlst_t d0atsrtconlst ;
d0atsrtdec_t d0atsrtdec ;
d0atsrtdeclst_t d0atsrtdeclst ;
s0taq_t s0taq ;
d0ynq_t d0ynq ;
sqi0de_t sqi0de ;
dqi0de_t dqi0de ;
arrqi0de_t arrqi0de ;
tmpqi0de_t tmpqi0de ;
s0arg_t s0arg ;
s0arglst_t s0arglst ;
s0arglstlst_t s0arglstlst ;
sp0at_t sp0at ;
s0exp_t s0exp ;
s0expext_t s0expext ;
s0explst_t s0explst ;
s0expopt_t s0expopt ;
s0explstlst_t s0explstlst ;
s0explstopt_t s0explstopt ;
labs0explst_t labs0explst ;
s0arrind_t s0arrind ;
t1mps0explstlst_t t1mps0explstlst ;
s0qua_t s0qua ;
s0qualst_t s0qualst ;
s0qualstlst_t s0qualstlst ;
s0qualstopt_t s0qualstopt ;
s0rtext_t s0rtext ;
impqi0de_t impqi0de ;
s0rtdef_t s0rtdef ;
s0rtdeflst_t s0rtdeflst ;
d0atarg_t d0atarg ;
d0atarglst_t d0atarglst ;
s0tacon_t s0tacon ;
s0taconlst_t s0taconlst ;
s0tacst_t s0tacst ;
s0tacstlst_t s0tacstlst ;
s0tavar_t s0tavar ;
s0tavarlst_t s0tavarlst ;
s0expdef_t s0expdef ;
s0expdeflst_t s0expdeflst ;
s0aspdec_t s0aspdec ;
d0atcon_t d0atcon ;
d0atconlst_t d0atconlst ;
d0atdec_t d0atdec ;
d0atdeclst_t d0atdeclst ;
e0xndec_t e0xndec ;
e0xndeclst_t e0xndeclst ;
p0arg_t p0arg ;
p0arglst_t p0arglst ;
d0arg_t d0arg ;
d0arglst_t d0arglst ;
extnamopt_t extnamopt ;
d0cstdec_t d0cstdec ;
d0cstdeclst_t d0cstdeclst ;
s0vararg_t s0vararg ;
s0exparg_t s0exparg ;
s0elop_t s0elop ;
witht0ype_t witht0ype ;
p0at_t p0at ;
p0atlst_t p0atlst ;
labp0atlst_t labp0atlst ;
f0arg_t f0arg ;
f0arglst_t f0arglst ;
d0exp_t d0exp ;
d0explst_t d0explst ;
d0expopt_t d0expopt ;
labd0explst_t labd0explst ;
d0arrind_t d0arrind ;
ifhead_t ifhead ;
casehead_t casehead ;
loophead_t loophead ;
tryhead_t tryhead ;
m0atch_t m0atch ;
m0atchlst_t m0atchlst ;
guap0at_t guap0at ;
c0lau_t c0lau ;
c0laulst_t c0laulst ;
sc0lau_t sc0lau ;
sc0laulst_t sc0laulst ;
i0nvarg_t i0nvarg ;
i0nvarglst_t i0nvarglst ;
i0nvresstate_t i0nvresstate ;
loopi0nv_t loopi0nv ;
initestpost_t initestpost ;
m0acarg_t m0acarg ;
m0acarglst_t m0acarglst ;
m0acdef_t m0acdef ;
m0acdeflst_t m0acdeflst ;
v0aldec_t v0aldec ;
v0aldeclst_t v0aldeclst ;
f0undec_t f0undec ;
f0undeclst_t f0undeclst ;
v0arwth_t v0arwth ;
v0ardec_t v0ardec ;
v0ardeclst_t v0ardeclst ;
i0mpdec_t i0mpdec ;
d0ec_t d0ec ;
d0eclst_t d0eclst ;
} YYSTYPE_union ;
#define YYSTYPE YYSTYPE_union

#line 1053 "ats_grammar_yats.c"
/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();

#define YYBEG_i0de 257
#define YYBEG_s0rtid 258
#define YYBEG_si0de 259
#define YYBEG_di0de 260
#define YYBEG_s0exp 261
#define YYBEG_d0exp 262
#define YYBEG_d0ecseq_sta 263
#define YYBEG_d0ecseq_dyn 264
#define TOKEN_eof 265
#define LITERAL_char 266
#define LITERAL_extcode 267
#define LITERAL_float 268
#define LITERAL_floatsp 269
#define LITERAL_int 270
#define LITERAL_intsp 271
#define LITERAL_string 272
#define IDENTIFIER_alp 273
#define IDENTIFIER_sym 274
#define IDENTIFIER_arr 275
#define IDENTIFIER_tmp 276
#define IDENTIFIER_ext 277
#define IDENTIFIER_dlr 278
#define IDENTIFIER_srp 279
#define ABSPROP 280
#define ABSTYPE 281
#define ABST0YPE 282
#define ABSVIEW 283
#define ABSVIEWTYPE 284
#define ABSVIEWT0YPE 285
#define AND 286
#define AS 287
#define ASSUME 288
#define ATLAM 289
#define ATLLAM 290
#define ATFIX 291
#define BEGIN 292
#define BREAK 293
#define CASE 294
#define CASEMINUS 295
#define CASEPLUS 296
#define CASTFN 297
#define CLASSDEC 298
#define CONTINUE 299
#define DATASORT 300
#define DATAPARASORT 301
#define DATAPROP 302
#define DATATYPE 303
#define DATAVIEW 304
#define DATAVIEWTYPE 305
#define DO 306
#define DYN 307
#define DYNLOAD 308
#define ELSE 309
#define END 310
#define EXCEPTION 311
#define EXTERN 312
#define FIX 313
#define FN 314
#define FNSTAR 315
#define FOR 316
#define FORSTAR 317
#define FUN 318
#define IF 319
#define IMPLEMENT 320
#define IN 321
#define INFIX 322
#define INFIXL 323
#define INFIXR 324
#define LAM 325
#define LET 326
#define LLAM 327
#define LOCAL 328
#define MACDEF 329
#define MACRODEF 330
#define NONFIX 331
#define OF 332
#define OP 333
#define OVERLOAD 334
#define PAR 335
#define POSTFIX 336
#define PRAXI 337
#define PREFIX 338
#define PRFN 339
#define PRFUN 340
#define PROPDEF 341
#define PROPMINUS 342
#define PROPPLUS 343
#define PRVAL 344
#define REC 345
#define R0EAD 346
#define SCASE 347
#define SIF 348
#define SORTDEF 349
#define STACST 350
#define STADEF 351
#define STAIF 352
#define STALOAD 353
#define STAVAR 354
#define SYMELIM 355
#define SYMINTR 356
#define THEN 357
#define TRY 358
#define TYPEDEF 359
#define TYPEMINUS 360
#define TYPEPLUS 361
#define T0YPE 362
#define T0YPEMINUS 363
#define T0YPEPLUS 364
#define VAL 365
#define VALMINUS 366
#define VALPLUS 367
#define VAR 368
#define VIEWDEF 369
#define VIEWMINUS 370
#define VIEWPLUS 371
#define VIEWTYPEDEF 372
#define VIEWTYPEMINUS 373
#define VIEWTYPEPLUS 374
#define VIEWT0YPE 375
#define VIEWT0YPEMINUS 376
#define VIEWT0YPEPLUS 377
#define WHEN 378
#define WHERE 379
#define WHILE 380
#define WHILESTAR 381
#define WITH 382
#define WITHPROP 383
#define WITHTYPE 384
#define WITHVIEW 385
#define WITHVIEWTYPE 386
#define AMPERSAND 387
#define BACKQUOTE 388
#define BACKSLASH 389
#define BANG 390
#define BAR 391
#define COMMA 392
#define COLON 393
#define SEMICOLON 394
#define DOT 395
#define EQ 396
#define LT 397
#define GT 398
#define DOLLAR 399
#define HASH 400
#define TILDE 401
#define DOTDOT 402
#define DOTDOTDOT 403
#define EQLT 404
#define EQGT 405
#define EQLTGT 406
#define EQGTGT 407
#define EQSLASHEQGT 408
#define EQSLASHEQGTGT 409
#define GTLT 410
#define DOTLT 411
#define GTDOT 412
#define DOTLTGTDOT 413
#define MINUSLT 414
#define MINUSGT 415
#define MINUSLTGT 416
#define COLONLT 417
#define COLONLTGT 418
#define BACKQUOTELPAREN 419
#define COMMALPAREN 420
#define PERCENTLPAREN 421
#define DLRARRSZ 422
#define DLRLST_T 423
#define DLRLST_VT 424
#define DLRREC_T 425
#define DLRREC_VT 426
#define DLRTUP_T 427
#define DLRTUP_VT 428
#define DLRDELAY 429
#define DLRLDELAY 430
#define DLRDYNLOAD 431
#define DLREFFMASK_ALL 432
#define DLREFFMASK_EXN 433
#define DLREFFMASK_NTM 434
#define DLREFFMASK_REF 435
#define DLRDECRYPT 436
#define DLRENCRYPT 437
#define DLREXTERN 438
#define DLREXTVAL 439
#define DLREXTYPE 440
#define DLREXTYPE_STRUCT 441
#define DLRFOLD 442
#define DLRUNFOLD 443
#define DLRRAISE 444
#define DLRTYPEOF 445
#define SRPFILENAME 446
#define SRPLOCATION 447
#define SRPCHARCOUNT 448
#define SRPLINECOUNT 449
#define SRPASSERT 450
#define SRPDEFINE 451
#define SRPELSE 452
#define SRPELIF 453
#define SRPELIFDEF 454
#define SRPELIFNDEF 455
#define SRPENDIF 456
#define SRPERROR 457
#define SRPIF 458
#define SRPIFDEF 459
#define SRPIFNDEF 460
#define SRPINCLUDE 461
#define SRPPRINT 462
#define SRPTHEN 463
#define SRPUNDEF 464
#define FOLDAT 465
#define FREEAT 466
#define VIEWAT 467
#define LPAREN 468
#define RPAREN 469
#define LBRACKET 470
#define RBRACKET 471
#define LBRACE 472
#define RBRACE 473
#define ATLPAREN 474
#define ATLBRACKET 475
#define ATLBRACE 476
#define QUOTELPAREN 477
#define QUOTELBRACKET 478
#define QUOTELBRACE 479
#define HASHLPAREN 480
#define HASHLBRACKET 481
#define HASHLBRACE 482
#define PATAS 483
#define PATFREE 484
#define SEXPLAM 485
#define DEXPLAM 486
#define DEXPFIX 487
#define CLAUS 488
#define DEXPCASE 489
#define DEXPIF 490
#define DEXPRAISE 491
#define DEXPTRY 492
#define DEXPFOR 493
#define DEXPWHILE 494
#define BARCLAUSSEQNONE 495
#define TMPSEXP 496
#define TMPSARG 497
#define SARRIND 498
#define SEXPDARGSEQEMPTY 499
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    0,    0,    0,    1,    1,
    1,    1,    1,    1,    2,    2,    2,    2,    2,    2,
    3,    3,    3,    3,    4,    4,    4,    4,    4,    5,
    5,    5,    5,    6,    6,    6,    6,    6,    6,    7,
    7,    7,    7,    8,    8,    9,    9,    9,   10,   10,
   10,  202,  202,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   12,   13,   13,   14,   14,
   14,   15,   15,   15,   16,   17,   17,   17,   17,   18,
   18,   19,   19,   19,   19,   19,   19,   19,   20,   20,
   21,   21,   22,   22,   23,   24,   24,   24,   24,   24,
   25,   25,   26,   26,   27,   27,   27,   28,   28,   29,
   29,   30,   30,   30,   30,   30,   30,   30,   31,   31,
   31,   31,   32,   32,   33,   33,   34,   34,   34,   34,
   34,   34,   34,   34,   34,   34,   34,   34,   34,   35,
   35,   36,   36,   37,   37,   38,   39,   39,   40,   40,
   40,   41,   41,   41,   41,   41,   42,   42,   42,   42,
   42,   42,   42,   42,   42,   42,   43,   43,   44,   44,
   45,   45,   45,   45,   45,   45,   45,   45,   45,   46,
   46,   47,   47,   48,   48,   49,   50,   50,   51,   52,
   52,   53,   53,   54,   55,   55,   56,   56,   57,   57,
   57,   58,   58,   59,   59,   60,   60,   61,   62,   62,
   62,   62,   63,   63,   63,   63,   63,   63,   63,   63,
   63,   63,   63,   63,   63,   63,   63,   63,   63,   63,
   63,   63,   63,   63,   63,   63,   63,   63,   63,   64,
   64,   65,   65,   66,   66,   66,   67,   67,   68,   68,
   69,   69,   70,   70,   70,   71,   71,   72,   72,   73,
   73,   73,   74,   74,   75,   76,   76,   77,   77,   78,
   78,   79,   80,   80,   81,   81,   82,   82,   83,   83,
   84,   85,   85,   86,   86,   87,   87,   88,   88,   89,
   89,   89,   89,   90,   90,   91,   91,   92,   92,   93,
   94,   94,   95,   96,   96,   97,   98,   98,   99,   99,
  100,  100,  101,  102,  102,  103,  103,  104,  104,  105,
  105,  106,  106,  107,  108,  108,  109,  109,  110,  110,
  111,  111,  112,  112,  112,  112,  113,  113,  114,  114,
  115,  116,  116,  117,  117,  117,  118,  118,  118,  119,
  119,  120,  120,  120,  120,  120,  121,  121,  121,  121,
  121,  122,  122,  122,  122,  122,  122,  122,  122,  122,
  122,  122,  122,  122,  122,  122,  122,  122,  122,  123,
  123,  124,  124,  125,  125,  126,  126,  127,  127,  128,
  128,  128,  129,  129,  129,  129,  130,  130,  131,  131,
  132,  132,  133,  133,  133,  133,  133,  133,  133,  133,
  133,  133,  133,  133,  133,  133,  134,  134,  134,  134,
  134,  134,  134,  134,  134,  134,  134,  134,  134,  134,
  134,  134,  134,  134,  134,  134,  134,  134,  134,  134,
  134,  134,  134,  134,  134,  134,  134,  134,  134,  134,
  134,  134,  134,  134,  134,  134,  134,  134,  134,  134,
  134,  134,  134,  134,  134,  134,  134,  134,  134,  134,
  134,  134,  134,  134,  135,  136,  136,  137,  137,  138,
  138,  139,  139,  140,  140,  141,  141,  141,  142,  142,
  143,  144,  145,  145,  145,  146,  147,  147,  148,  149,
  150,  150,  151,  151,  152,  152,  152,  153,  154,  154,
  155,  155,  156,  156,  157,  158,  158,  159,  159,  160,
  160,  160,  160,  161,  161,  162,  162,  163,  164,  164,
  165,  165,  166,  166,  167,  167,  167,  168,  168,  169,
  169,  170,  170,  171,  172,  172,  173,  173,  174,  175,
  176,  177,  177,  178,  178,  179,  179,  180,  180,  181,
  182,  182,  183,  184,  184,  185,  185,  186,  186,  187,
  187,  188,  188,  188,  188,  189,  189,  190,  191,  191,
  191,  191,  191,  191,  191,  191,  191,  191,  191,  191,
  191,  191,  191,  191,  191,  191,  191,  191,  191,  191,
  191,  191,  191,  191,  191,  191,  191,  191,  191,  191,
  192,  193,  193,  203,  203,  194,  194,  194,  194,  194,
  194,  195,  195,  195,  196,  197,  197,  198,  198,  198,
  198,  198,  198,  198,  198,  198,  198,  198,  198,  198,
  198,  198,  199,  199,  199,  200,  201,  201,
};
static const short yylen[] = {                            2,
    3,    3,    3,    3,    3,    3,    3,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    0,    2,    1,    1,
    1,    1,    1,    3,    1,    0,    1,    3,    5,    2,
    1,    1,    1,    1,    1,    1,    3,    3,    0,    2,
    0,    3,    0,    1,    1,    2,    2,    1,    1,    1,
    0,    2,    0,    3,    1,    1,    3,    2,    1,    2,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    2,
    3,    3,    0,    2,    0,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    1,    2,    0,    3,    3,    0,    3,    2,    2,
    3,    2,    2,    3,    3,    4,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    0,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    2,    1,    1,    1,    2,    1,    1,    2,    1,    1,
    2,    0,    2,    2,    0,    2,    0,    3,    0,    2,
    4,    0,    2,    0,    3,    0,    4,    4,    1,    1,
    3,    5,    1,    1,    1,    1,    2,    2,    3,    5,
    3,    3,    4,    4,    5,    5,    6,    6,    3,    3,
    4,    4,    6,    5,    3,    1,    3,    3,    3,    2,
    1,    2,    2,    0,    3,    3,    2,    4,    1,    4,
    0,    2,    0,    3,    3,    1,    8,    0,    1,    0,
    3,    3,    0,    3,    2,    0,    4,    0,    5,    1,
    2,    1,    0,    2,    0,    3,    0,    3,    1,    4,
    3,    0,    3,    1,    3,    0,    2,    0,    3,    1,
    4,    3,    6,    0,    3,    3,    6,    0,    3,    3,
    0,    3,    5,    0,    3,    5,    0,    4,    0,    3,
    0,    2,    4,    1,    2,    0,    3,    3,    6,    0,
    3,    0,    3,    3,    0,    3,    1,    3,    0,    2,
    0,    3,    1,    3,    5,    3,    0,    2,    0,    2,
    5,    0,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    0,    2,    2,    2,    2,    2,    3,    3,    4,
    2,    1,    1,    1,    1,    1,    2,    2,    2,    3,
    5,    3,    3,    3,    5,    5,    3,    3,    3,    1,
    3,    0,    2,    0,    2,    0,    3,    1,    4,    0,
    2,    5,    3,    1,    3,    1,    0,    2,    3,    1,
    0,    2,    2,    3,    4,    6,    6,    4,    4,    5,
    6,    3,    3,    2,    4,    5,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    2,    2,    1,    1,    1,
    1,    2,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    6,    9,    5,    2,    2,    3,    4,
    5,    3,    5,    5,    5,    3,    3,    3,    3,    3,
    4,    4,    5,    5,    3,    3,    4,    4,    6,    3,
    3,    3,    5,    3,    3,    0,    2,    1,    1,    0,
    2,    2,    4,    0,    2,    1,    1,    3,    0,    2,
    2,    2,    2,    2,    2,    2,    1,    3,    3,    1,
    0,    2,    0,    3,    0,    1,    3,    3,    0,    4,
    0,    5,    1,    3,    2,    0,    3,    1,    3,    3,
    3,    3,    3,    1,    2,    0,    3,    3,    1,    2,
    0,    3,    0,    3,    0,    3,    1,    2,    3,    0,
    2,    0,    3,    3,    0,    3,    0,    5,    4,    7,
    1,    0,    2,    0,    3,    1,    3,    0,    2,    4,
    0,    3,    4,    0,    3,    5,    7,    0,    3,    0,
    2,    4,    5,    4,    6,    0,    3,    5,    3,    3,
    3,    3,    3,    2,    2,    2,    3,    2,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    2,    4,    3,
    2,    4,    4,    5,    3,    4,    3,    4,    2,    4,
    3,    0,    2,    0,    2,    1,    4,    1,    2,    2,
    5,    4,    6,    5,    1,    0,    3,    1,    5,    5,
    5,    3,    4,    4,    4,    3,    3,    5,    1,    2,
    2,    2,    4,    6,    5,    1,    0,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,  626,  647,    0,   54,
   55,   56,   57,   58,   59,   62,   60,   65,   61,   63,
   64,    0,  112,  113,  114,  115,  116,  117,  118,    0,
  157,  158,  159,  160,  161,  162,  164,  163,  166,  165,
    0,  171,  172,  173,  174,  175,  178,  176,  179,  177,
    0,  213,  214,  215,   66,    0,    0,    0,    0,  236,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  216,    0,  241,
    0,    0,  417,  418,  419,  420,  421,  422,  186,  189,
   69,   41,   43,   45,    0,  430,    0,    0,    0,  431,
   70,   44,  497,    0,    0,   40,  647,   42,    0,    0,
    0,  500,   71,    0,  429,  350,    0,  351,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  437,  438,
  439,  440,  441,  442,  443,  435,  436,    0,    0,  423,
  424,    0,    0,  434,    0,  647,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  428,    0,  425,  187,
    0,  190,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    3,    4,    5,
    6,    0,    0,    0,  217,    0,  100,   95,   99,    0,
    0,   98,    0,    0,    0,    0,    0,    0,  242,    0,
    0,    0,  259,    0,    0,    0,    0,    0,    0,    0,
   73,    0,   72,    0,    0,    0,    0,    0,  150,  149,
  218,    7,    0,  240,  243,    0,    0,    0,  493,    0,
  494,  495,    0,    0,    0,  491,    0,  426,  496,  492,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  432,  433,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  347,  348,  349,    0,  362,  364,  363,  365,
  182,  183,    0,    0,    0,  396,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  366,  394,    0,    0,    0,
  153,  152,    0,  427,  188,  191,  447,    0,  270,    0,
    0,    0,    0,  448,    8,    0,    0,    0,  478,  479,
    0,  403,    0,    0,    0,    0,    0,    0,    0,    0,
    1,  618,    9,   10,   11,   12,   13,   14,    0,   17,
    0,    0,    0,   21,   22,   23,   24,    0,   15,    0,
    0,    0,  626,    0,    0,    0,    0,    0,   18,    0,
   19,   26,   20,    0,    0,   25,    0,    0,    0,   27,
   16,   28,   29,    0,    0,    0,   46,   47,   48,    0,
    0,    0,    0,    0,    0,    0,    0,  616,  614,    2,
  639,   37,    0,    0,   34,   35,   36,    0,  647,   38,
   39,   33,    0,   31,   32,    0,    0,    0,    0,    0,
  628,  614,    0,    0,    0,  200,    0,    0,  151,   96,
   97,    0,  102,  235,    0,    0,    0,    0,    0,    0,
  265,    0,  219,    0,    0,    0,    0,  252,  238,  237,
    0,  221,    0,    0,    0,  229,    0,  222,  230,  239,
    0,    0,    0,    0,    0,    0,  119,  109,    0,  457,
    0,    0,  490,    0,    0,  537,    0,  498,    0,  499,
  155,    0,  472,  471,  470,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  477,    0,    0,  502,
    0,  452,  458,  474,    0,  459,    0,    0,  465,    0,
  460,  456,  466,    0,  368,  367,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  388,    0,    0,    0,
    0,    0,  369,  398,    0,    0,    0,  154,    0,  271,
    0,  274,    0,    0,  449,  647,    0,  481,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  167,    0,  598,
    0,    0,    0,    0,    0,    0,    0,   77,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  584,
    0,    0,    0,    0,    0,    0,    0,    0,  609,   75,
    0,    0,    0,  585,   82,   83,   84,   85,    0,    0,
   86,    0,   81,    0,    0,  620,    0,  586,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  619,    0,
  642,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  641,    0,    0,    0,    0,  640,    0,  194,
    0,  196,    0,    0,    0,    0,  231,  232,    0,  223,
    0,  224,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   74,    0,    0,    0,    0,    0,    0,  110,  108,
  120,  507,    0,    0,  534,    0,    0,    0,    0,  156,
  246,  245,    0,    0,    0,  467,  468,  461,  462,    0,
  475,    0,  508,    0,    0,    0,    0,    0,    0,    0,
  395,    0,    0,    0,    0,    0,  385,    0,  380,    0,
  357,    0,  370,  379,  393,    0,  373,    0,  377,    0,
  374,  372,  378,    0,    0,  486,  487,    0,    0,    0,
    0,    0,  450,    0,    0,    0,    0,    0,    0,    0,
  408,  524,    0,    0,    0,    0,  409,  529,    0,  415,
  168,    0,    0,    0,    0,  592,  593,    0,    0,    0,
  600,    0,  579,  580,  581,  626,    0,    0,  551,  556,
    0,    0,    0,  605,    0,  607,   68,    0,    0,  583,
  582,    0,    0,  591,    0,    0,    0,  595,    0,    0,
    0,  596,    0,    0,    0,   80,    0,  587,    0,    0,
    0,  594,    0,  613,    0,    0,    0,    0,    0,    0,
    0,    0,  597,   53,  626,  615,    0,    0,    0,    0,
    0,    0,  180,  279,    0,    0,  637,  647,    0,    0,
    0,    0,    0,    0,    0,  636,    0,    0,  632,    0,
  184,    0,    0,  647,    0,  201,    0,  104,    0,    0,
    0,  264,  220,  170,    0,    0,  250,  254,  255,  225,
  234,    0,    0,  267,  226,  111,    0,  124,  121,  122,
  546,    0,    0,    0,  536,    0,  549,  473,  446,  454,
  455,    0,  504,  453,  463,    0,    0,    0,  510,  464,
  451,    0,    0,    0,    0,  344,  345,  346,    0,  383,
    0,    0,    0,    0,    0,    0,    0,  483,  276,  278,
  416,    0,    0,    0,    0,    0,    0,    0,    0,  525,
    0,    0,    0,  530,    0,    0,    0,    0,    0,    0,
  146,  142,    0,    0,    0,  324,    0,    0,   78,    0,
  606,    0,    0,  559,    0,    0,  608,    0,    0,  603,
  281,    0,    0,    0,    0,  128,  129,  130,  131,  132,
  133,  134,  135,  136,  137,  138,  139,    0,    0,    0,
    0,    0,  284,    0,    0,    0,  610,    0,    0,   88,
    0,   90,   87,    0,    0,    0,  611,    0,    0,  333,
    0,    0,    0,  617,    0,    0,    0,  318,  314,    0,
    0,    0,  599,    0,    0,    0,    0,    0,    0,    0,
  203,    0,  181,    0,    0,  400,    0,    0,    0,  633,
  634,    0,  571,    0,    0,    0,    0,    0,  185,    0,
    0,  635,    0,  198,  227,  228,  233,    0,    0,    0,
    0,    0,    0,  541,  548,  544,  469,  444,    0,    0,
    0,  387,  381,  371,  375,    0,  389,  376,  488,    0,
    0,    0,  527,    0,    0,  519,    0,    0,    0,    0,
  532,    0,    0,    0,    0,    0,    0,  143,  148,  308,
    0,  326,    0,  621,    0,  553,  557,    0,  562,  604,
  283,    0,    0,  287,    0,  299,  302,    0,    0,  295,
    0,    0,    0,    0,  338,  105,    0,  106,    0,    0,
    0,    0,  315,    0,  321,    0,    0,  305,  626,   49,
   50,   51,  622,    0,    0,    0,  629,    0,  207,    0,
    0,  402,    0,  638,    0,    0,    0,  577,    0,    0,
    0,    0,  563,  565,    0,    0,    0,  647,  643,    0,
    0,    0,    0,  126,    0,    0,    0,    0,  391,    0,
    0,    0,  515,  208,    0,    0,  145,    0,   79,    0,
  285,    0,    0,   92,    0,    0,    0,  330,    0,  334,
  336,    0,    0,  343,  317,    0,    0,    0,  323,    0,
    0,  624,  205,  280,  399,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  569,    0,  645,    0,  248,    0,
  543,    0,    0,    0,    0,    0,  550,  555,  289,    0,
    0,    0,    0,    0,  107,    0,  341,    0,  313,  319,
  623,    0,    0,  566,    0,  644,    0,  269,  445,  512,
    0,  517,  332,  335,  340,  310,    0,    0,  392,  567,
    0,    0,    0,    0,    0,  257,  261,  262,
};
static const short yydgoto[] = {                          9,
  383,  384,  385,  386,  408,  409,  154,  155,  387, 1114,
  591,  156,  570,  157,  214,  581,  560,  608,  593,  785,
  972,  788,  192,  193,  194,  423, 1099,  962,  456,  457,
  458,  657,  858,  963,  920,  921,  922,  553,  746,   77,
  158,   78,  734,  435,  159,  814,  510,  832,  160,  161,
  162,  163,  418,  414,  415,  632,  184,  811, 1001,  616,
  735,  201,   80,   81,   82,  248,  851,  206,  207,  438,
  847,  852, 1243,  431,  203,  215,  854,  310,  311,  312,
  532,  534,  816,  576,  774,  964,  965, 1084,  600,  792,
  578,  778,  583,  782,  607,  803,  550,  986, 1177,  926,
  987,  988,  989,  605,  800,  993,  557,  751, 1092, 1093,
 1168,  981,  982, 1217,  796,  984,  889,  486,  164, 1133,
  511,  512,  700,  701,  513,  697,  519, 1047,  298,  299,
 1007, 1008,  265,  166,  258,  259,  321,  322,  307,  526,
  718,  229,  167,  168,  169,  170,  171,  172,  173,  308,
  490,  227,  263,  269,  879, 1055, 1056, 1153,  729,  730,
  731,  732,  736,  737,  738,  234,  467,  863,  864, 1034,
  668,  462,  230,  235,  328,  760,  933, 1076,  761,  762,
  566,  764,  625,  829,  833, 1022,  824,  622,  826,  817,
  388,  602,  603,  389,  609,  174,  175,  412,  628,  264,
  177,  805,  610,
};
static const short yysindex[] = {                       616,
  929,  -43,  453, 2568, 3050, 2505,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -135,    0,    0,    0,    0,    0,    0,    0, -126,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -119,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -105,    0,    0,    0,    0, -193,  453, -151,   51,    0,
 -299, -150, -142, -118,   30,  134, 3050, 3146, 3146, 3050,
 3050, 2450, 3050, 2450, 3146,  346,  453,    0, -179,    0,
 3146, 3146,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, 2505,    0,   86,   86,   86,    0,
    0,    0,    0,  -87,   86,    0,    0,    0, 2568,   86,
   86,    0,    0,  -87,    0,    0,  181,    0, 2505, 2505,
 2505,  294,  294,  294,   25,   36,   72,   85,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  100, 2505,    0,
    0,   52,   52,    0, 2505,    0, 2505, 3050, 2450, 2505,
 2505, 2450, 2857,  482, 2568, -206,    0, 1079,    0,    0,
 2505,    0, 3243,  913, -170, 1159, 2505, 3050, 2505, 3050,
  133, 2719, 2505,  237,20619,  268,20238,    0,    0,    0,
    0,  453, -193,  154,    0,  213,    0,    0,    0,  360,
  360,    0,  251,  258, 2450, 2450, 3050, 3050,    0,  350,
   80, -278,    0,  273, 3146,  -35,  199,  220, -236,  -84,
    0, 2450,    0,  301,  238,  -51,  259,  253,    0,    0,
    0,    0,  942,    0,    0, -260,  435,  283,    0,  368,
    0,    0, 3146,  338,  383,    0,  471,    0,    0,    0,
  390, -166,  329,  -26,  -11, 3050, 3050,  343,  348,  353,
 2450, 2450, 2505, 2505, 3050, -256, 2857,   52,    0,    0,
  321,    5,  332,  356,  235,    7,   56,  410,  365,   73,
  387,  397,    0,    0,    0,  457,    0,    0,    0,    0,
    0,    0,  351,  351, 3050,    0, 1490,  453, 3146, 1490,
 1622, 1490, 1490, 1622,  351,    0,    0,  482,  493,  482,
    0,    0,  507,    0,    0,    0,    0,  423,    0, 3243,
  522,  525, 2505,    0,    0,  464, 3050, 2857,    0,    0,
 1159,    0, -232, -229,  271, -222, 2505, 2505, 2505,  555,
    0,    0,    0,    0,    0,    0,    0,    0, 1699,    0,
  453,  929,  929,    0,    0,    0,    0,  474,    0, -210,
 -210, -210,    0, 1126, 1383,  929,  434, -210,    0, -210,
    0,    0,    0,  -43,  453,    0,  446,  453,  929,    0,
    0,    0,    0, 8185,  929, 8185,    0,    0,    0,  675,
 8185,  929,  453,  476,  453,  453, 8185,    0,    0,    0,
    0,    0,  677,  308,    0,    0,    0,  479,    0,    0,
    0,    0,  166,    0,    0, -180,  681, 1490,  476, 8185,
    0,    0,  154,  563,  496,    0,  942,  557,    0,    0,
    0,   51,    0,    0,  499,  500,   97,  103,  508, 3050,
    0, 3050,    0,  453,  583, 3146, 3146,    0,    0,    0,
 3050,    0,  511,  517, 3050,    0, 3050,    0,    0,    0,
  721,  942,  942,  599,  942,  -43,    0,    0, 2505,    0,
 3146,  536,    0,  530, 3050,    0,  538,    0, 2505,    0,
    0,  614,    0,    0,    0,  113, -275, 2505, 2505, 2505,
  539,  541,  540,  546,  441,  549,    0, 2505, 2505,    0,
 2505,    0,    0,    0, 2505,    0,  377, 2505,    0, 2505,
    0,    0,    0, 2505,    0,    0,  596,  351, 1490,  737,
  468, 1591,  118,  554,  556,  123,    0,  634,  558,  124,
  562,  569,    0,    0, 3050,  375,  493,    0,  573,    0,
 3146,    0, 3243,  646,    0,    0,  654,    0, 2505, 2505,
 1141, 2773,  655, -256, -256, 1141,  453,    0, -193,    0,
  658,  652,  766,  766, 3146, 2568,  767,    0,  929,  929,
  929,  929,  733, 2568, -175,  770, 2568,  770,  929,    0,
  586,  676,  929,  929,  663,  778, -117,  779,    0,    0,
  672,  679,  784,    0,    0,    0,    0,    0, 8185, 8185,
    0, 8185,    0, 8185, 8185,    0, 8185,    0, -288,  789,
 3146,  476, 2568,  -61,  790, -193,  795, 2639,    0,  688,
    0,  801,  812,  476,  453,  291,  764, 1490, 1490,  351,
 -253,  800,    0,  167,  803,  333, 2639,    0,  688,    0,
  453,    0, -193,  942, 3050,  251,    0,    0, 3050,    0,
 3050,    0, 2450,   80,  621,  273,  793,  -35,  -35,  622,
 3050,    0,  473,  624,  700,  447,  630,  637,    0,    0,
    0,    0,  636, 2568,    0,  699, 2568,   86,  798,    0,
    0,    0,  645,  647,  648,    0,    0,    0,    0,  843,
    0,  235,    0,  649,  659, 2505, 2505,  284,  660, -225,
    0,  846,  741, 1490, 1490, 3050,    0, 2959,    0, 1591,
    0, 1490,    0,    0,    0, 1490,    0, 1490,    0, 1490,
    0,    0,    0,  654,   51,    0,    0, 2505,  375, 2505,
  522,  525,    0,  662,   21,   99, 1490,  -41,  -60,  748,
    0,    0, 1699,  673,  735,  751,    0,    0, 2505,    0,
    0,  154, 3050, 1252,  929,    0,    0,  674,  816,  474,
    0, -224,    0,    0,    0,    0,  770,  351,    0,    0,
 -175,  753, 2568,    0,  770,    0,    0,  769, 1546,    0,
    0,  793,  -43,    0,  942,19270,  453,    0,  880,  942,
  453,    0,  977, 2824,  685,    0, 8185,    0, 3050,19270,
  453,    0,  683,    0, -215,  873, -287,19270,  453,  783,
  154,  453,    0,    0,    0,    0,  768,  774, 2568,  782,
  693, 1340,    0,    0, 3243, 2610,    0,    0,  803,  803,
  794,  351, 3050,  781, -180,    0, 2505, 1490,    0, 2568,
    0,  482,  889,    0,  563,    0,  654,    0,  712,  719,
  705,    0,    0,    0,  453,  942,    0,    0,    0,    0,
    0,  723, 2450,    0,    0,    0,  942,    0,    0,    0,
    0,  797,  804,  726,    0,  728,    0,    0,    0,    0,
    0,  731,    0,    0,    0,  732,  -93, 2450,    0,    0,
    0, 1490,  741,  468,  654,    0,    0,    0,  738,    0,
  744,  749,  490,  750,  825, -256, 2505,    0,    0,    0,
    0, 2505, 2505,  748, 2505, 2505, 2505, 2505, 2505,    0,
  751,  453, 2505,    0,  831,  832,  654,  929,  895,  838,
    0,    0,  766,  474, 3050,    0,  767,  962,    0,  923,
    0,  848,  773,    0, 2505,  770,    0, 1546, 2568,    0,
    0,  778,  942,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  842,  942,    0,  852,  777,  779,    0,  942,  784,    0,
 8185,    0,    0,  654,  785,  789,    0,  351, 3146,    0,
 -215,  278, 2568,    0,  474, 2568,  857,    0,    0,  788,
  790,  453,    0,  856,  795,  545, 3050, 2505,  873,  453,
    0,  479,    0,  525,  453,    0, 2610,  493,  943,    0,
    0,  863,    0,  -99, 2505,  800,  506,  803,    0,  242,
  333,    0,  585,    0,    0,    0,    0,  867,  792,  868,
  447, 3050, 2568,    0,    0,    0,    0,    0,  806,  870,
  741,    0,    0,    0,    0, 3071,    0,    0,    0, -256,
 -256, -256,    0, -198,  983,    0, -256, -256, -256, -256,
    0,  802, -256, 2505, 3050,  838,  942,    0,    0,    0,
  654,    0,  807,    0,  351,    0,    0, -256,    0,    0,
    0,19469,19270,    0,  879,    0,    0, 2824,  881,    0,
  882,  871,  125,  805,    0,    0,   51,    0, 3050,  873,
  857,  813,    0,  884,    0,  795, 3050,    0,    0,    0,
    0,    0,    0, 8185,  654, -256,    0,  782,    0,  886,
  809,    0,  891,    0, 2505,  893, -256,    0, 3050, 3050,
 3050, 3050,    0,    0, 2505, 3050,  889,    0,    0, 8185,
  793, 3050, 3050,    0,  654,  804, 2505, 2505,    0,  894,
 1490, 2505,    0,    0,  822,  654,    0,  942,    0,  848,
    0,  852,  942,    0, 3050, 3050,  351,    0,  351,    0,
    0,  896,  189,    0,    0, 3050,  816, -287,    0,  654,
  836,    0,    0,    0,    0, 2505, -256, 2505,  654,  654,
  654,  654,  506,  195,    0,  837,    0,  905,    0,  473,
    0,  828,  284, 1490,  741,  983,    0,    0,    0,  942,
  654,  654,  871,  839,    0, 1029,    0,  844,    0,    0,
    0, -256, -256,    0, 2505,    0, 3050,    0,    0,    0,
  490,    0,    0,    0,    0,    0,  506,  292,    0,    0,
 3050, 3050,  833,  292,  292,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  150,    0,    0,  907,    0,
    0,    0,    0,    0,    0,    0,  126,  841,  849,  126,
    0,  851,  126,  851,  841,    0,    0,    0,    0,    0,
 3607, 3805,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, 1005,    0, 1407, 1407, 1407,    0,
    0,    0,    0,  163, 1407,    0,    0,    0,    0, 2953,
 2953,    0,    0,  163,    0,    0,    0,    0,  865,    0,
    0,  869,  869,  869,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 2074, 2074,    0,  128,    0,  128,    0,  862,  128,
  872,  862,    0,  -16,    0,    0,    0,    0,    0,    0,
  872,    0,  206,    0,    0, 4399,    0,    0,    0,    0,
    0,    0,  956,    0, -138,    0, -165,    0,    0,    0,
    0,  877, -226,  935,    0,    0,    0,    0,    0,    0,
    0,    0,  944,    0,  851,  851,  126,  126,    0,    0,
   11,    0,    0, 1512,  -58,  382,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -258,    0,  883,    0,    0,
    0,    0,  849,  888,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  862,  862,  878,  878,    0, 5191,    0, 2074,    0,    0,
  130,    0,    0,    0,   60,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  936,    0,  131,  890,  849,  131,
    0,  131,  892,    0,    0,    0,    0,  372,  501,  -16,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -272,
  243,  952,  872,    0,    0,    0,    0,19448,    0,    0,
 4399,    0,    0,    0,    0,    0,  965,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, 2852,    0, 7768,
 7768, 7768,    0,    0,    0,12322,    0, 7768,    0, 7768,
    0,    0,    0,    0,    0,    0,    0,    0,12322,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, 3168,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, 2460,    0,    0,
    0,    0, 3129,    0,    0,    0,    0,    0, 2673,    0,
    0,    0,   34,   65,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  899,    0,    0,    0,    0,    0,    0,    0,    0,
  899,    0,    0,    0,    0,    0,  899,    0,    0,    0,
    0,  900,  900,    0, 4003,    0,    0,    0, -196,    0,
  841,    0,    0,    0,  936,    0,    0,    0, 1005,    0,
    0,    0,    0,    0,    0,    0,    0,  878,  878,  878,
    0,    0,    0,    0,    0,    0,    0,    0,  865,    0,
  878,    0,    0,    0,  878,    0,    0,    0,    0,  878,
    0,    0,    0,    0,    0,    0,    0,    0,    0, 3375,
  -95,  627,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  501,    0, 1857,    0,
    0,    0,  206,    0,    0,    0, 4597,    0,    0,    0,
 4795, 4993,    0, 5389, 5587, 4795,    0,    0,  279,    0,
12520,    0,12718,12718,  849,    0,12916,    0,    0,12322,
12322,12322,    0,    0,  964,13114,    0,13114,12322,    0,
    0,    0,12322,12322,    0,13312,    0,13510,    0,    0,
    0,    0,13708,    0,    0,    0,    0,    0,    0,  901,
    0,13906,    0,14104,14302,    0,14500,    0, 9550,14698,
  849, 2673,    0,    0, 9748,  279,14896,20423,    0,19846,
    0,    0,  222, 3168,  904,    0,    0,    0,    0,    0,
  966,17866,    0,    0,18064,    0,20042,    0,19252,    0,
    0,    0, -226,  108,    0,  944,    0,    0,  899,    0,
  899,    0,  851,   11,    0,  972,    0,  382,  382,    0,
  908,    0,  909,    0,    0,  911,    0,    0,    0,    0,
    0,    0,    0,  915,    0,    0,  915,  980,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   60,    0,    0,    0,  878,    0,  916,    0,    0,
    0, 3407,  696,    0,    0,    0,    0,  917,    0,  627,
    0,  919,    0,    0,    0,  919,    0,    0,    0,  919,
    0,    0,    0,  421,  907,    0,    0,    0,    0,  872,
  243,  952,    0,    0, 7567,    0,    0,  535,    0, 4795,
    0,    0,    0,    0,    0, 4993,    0,    0,  965,    0,
    0,  995,    0, 9946,    0,    0,    0,    0,10144, 2852,
    0,    0,    0,    0,    0,    0,13114,  925,    0,    0,
  964,    0,    0,    0,13114,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  926,    0,    0,    0,    0,
    0,    0,    0,  927,    0,    0,15094,    0,    0,  926,
    0,    0,    0,    0,  281,19648, 7966,  926,    0,15292,
  995,    0,    0,    0,    0,    0,    0,    0,    0,  924,
    0,    0,    0,    0,  206,  313,    0,    0,18064,18064,
  966,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  244,18262,    0,   65,    0, 4201,    0,    0,    0,
    0,    0,    0,    0,    0, 8362,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  932,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, 1644,  -95, 2981,    0,    0,    0,    0,    0,
    0,    0,  930,    0,    0, 5785,    0,    0,    0,    0,
    0,    0,    0, 4795,    0,    0,    0,    0,    0,    0,
 4993,  877,    0,    0,    0,    0,15490,    0, 8956, 9946,
    0,    0,12718, 2852,    0,    0,12916,    0,    0,    0,
    0,  933,    0,    0,    0,13114,    0,    0,    0,    0,
    0,13312,10342,  509, 1098,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, 2902, 3220, 7937,
    0, -107,    0,  937,    0,13510,    0,10540,13708,    0,
    0,    0,    0,10738,    0,14698,    0,  141,  849,    0,
  281,    0,    0,    0, 2852,    0, 9154,    0,    0,    0,
 9748,    0,    0,    0,14896,    0,    0,    0,18460,    0,
    0, 2460,    0,  952,  917,    0,  313, 1012,    0,    0,
    0,    0,    0,10936,    0,17866,15688,18064,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, 2291,    0,
  911,   79,    0,    0,    0,    0,    0,    0,    0,    0,
 3318,    0,    0,    0,    0,    0,    0,    0,    0, 5983,
 6181, 6379,    0,  -80,  561,    0, 6577, 6775, 6973, 7171,
    0,    0, 7369,  878,    0, 9946,    0,    0,    0,    0,
 8560,    0,    0,    0,    0,    0,    0,11134,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  927,11332,    0,
   -8,  144,    0,    0,    0,    0,  907,    0,    0,15886,
 9154, 8164,    0,    0,    0,14896,    0,    0,    0,    0,
    0,    0,    0,    0,18658,18856,    0,  924,    0,    0,
    0,    0,    0,    0,    0,16084,16282,    0,    0,    0,
    0,    0,    0,    0,    0,    0,18262,    0,    0,    0,
    0,  908,    0,    0,   89,  932,  878,    0,    0,    0,
    0,    0,    0,    0,    0,16480,    0, 9352,    0,  933,
    0,  937,    0,    0,    0,    0,    0,    0,  948,    0,
    0,    0,11530,    0,    0,  899, 8758, 7966,    0,11728,
    0,    0,    0,    0,    0,    0,16678,    0,16876,17074,
17272,17470,15688,    0,    0,    0,    0,    0,    0,  909,
    0,    0,  916,    0,   58,  561,    0,    0,    0,11926,
12124,   54,  144,    0,    0,    0,    0,    0,    0,    0,
    0,19054,17668,    0,    0,    0,    0,    0,    0,    0,
  930,    0,    0,    0,    0,    0,15688,  939,    0,    0,
    0,    0,    0,  939,  939,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0, 1024,    0,    0,    0,    0,    0,    0, 1243,  398,
  143,   -5, -263,    0, -116,    0,  384, -327, -505,    0,
  334,    0,  706, 1001, -680,  811,  404, -218,    0,    1,
 -353,  973,  407,  357,  531,    0, -859, -315, -537, -295,
  504, 1116, 1101,  808,  300, -712,  463,    0, 1285,    0,
 -143,  834, -381, -578, -265,  613, -144,    0,  335,  454,
    0,   14,  -56,  -57,    0,  787,  317,  481,  -45,  280,
 -738,  -66, -313,  817,  -44,  -54,  262,    0,  941, -495,
  742, -681,    0,  691,  537,  395, -624,  305,  692,  510,
  711,  516,  715,  524, -720, -838,    0, -326,    0,  323,
  513,  325, -876,  707,  514,    0,  754,  580,  341,  340,
  297,    0,  547,    0, -767, -830,    0, 1359,    0,-1078,
 -149, -148,    0,  818, -219,  633, 1225,  289,    0, -271,
    0,  523,   82,  -97,  -82,  -46,    0, 1200, -292, -518,
  810,  709,    0,    0,    0,    0,    0,    0,    0, -137,
  853,  -68,    0,  119,  330,  385,    0,  328,    0,  814,
  997, -684,  826,    0, -645,    0,    0,  512,  897,  401,
    0,    0,  876, 1437,    0, -718,    0,  402,    0,  815,
 -324, -501, -563, -741,  542,  424, -776,  740,  552,    0,
 1393,    0, -366,    0,  459, -337,    0,    0,  431,   -6,
    0,  970, 1163,
};
#define YYTABLESIZE 21083
static const short yytable[] = {                         76,
  202,  176,   30,  209,  455,  297,  216,  262,  719,  266,
  205,  205,  270,  271,  306,  563,  747,  205,   79,  217,
  535,  556,  514,  208,  224,  225,  524,  554,  527,  218,
  568,  630,  268,  941,  895,  268,  810,  722,  416,  932,
  900,  999,  626,  547, 1012,  910,  592,  314,  595,  928,
  243,  506,  835,  597,  819,  820,  940,  281,  282,  558,
 1068,   76,   76,   76,   76,   76,  766,   76,  319,   76,
  516,   55,  520,  521,  329,   76,   76, 1010, 1011,   31,
   32,  995,  627,  320,  210,  222,  786,  165, 1151,  786,
  914,  786,  281,  282,  315,  444,  260,  281,  282,  646,
  237,  660,  786,  985,  330,  584,  309,  789,  275,  542,
 1103,   55,  432,  505, 1224,  483,  484,  223,  316,  272,
  186,  786,  316,  506,  539,  272,  625,  540,  822,  178,
  427,  428,  317,  459,  268,  268,  317,  272,  179,  823,
  425,  426,   76,   22,  646,  180,  316,   76,  224,  297,
  303,  297,   33,  316,  441,  646, 1108,   76, 1240,  181,
  317,  267,   76,  223,   76,  975,  199,  317, 1117,  199,
  223,  625,  195,  990,  518,  205,  226,  518,  199,  790,
  316,  324,  625,  326,  555,  505,  301,  464,  302,  543,
  433,   76,   76,   34,  317,   35,   36,  672,  634,   76,
  226,  244,  245,   37,   38,  513, 1157,   39,  316,  620,
  506,  487,  275,  223,  213, 1100,  213,  454,  507, 1053,
  256,   40,  317,  319, 1175, 1080,  261,   76,  471,   23,
   24,  205,  442,  656,  656,  794,  472, 1126,  320,  757,
   76,   76,  765,  515,  929,  881,  547,  809,  323,   76,
  325,   76,  978,  530,  226,  931,  979,  559,  624,  476,
  477,  783,  784,  937, 1018, 1061,  787, 1179,  485, 1174,
  272, 1106,  505,  275,  182,  775, 1134,  786,  786,   76,
  660,  786,  822,   76,  127,  316,  646,  646,  646,  646,
  646,  213,  758,  223,  213,  386,  753,  754,  755,  317,
  304,  199,  660,   51,   76,  767,  213,  646,  223,  770,
  771,   76,   76,  625,  625,  625,  625,  625,   25, 1004,
  187,  196, 1120,  188,  513,  197,  513,  513,  513,  902,
  537,   26,  249,   76,  797,  249,  905,  213,  213,  447,
  673,  674,  675,  514,  906,   27,  907,  908,  909,  198,
  776,  696,  316,  684,  213,  436, 1160,  685,  437,  693,
  916,  127,  689,  699,  575,  645,  317,  316,  189,  481,
  482,   28,   29,  386,  650,  386,  397, 1039,  205,  205,
  654,  317,  327,  327,  233, 1069,  443,  397,  397,  397,
  662,  728,  617,  213,  213,  491,  728,  495,  666,  316,
  669,  263, 1198,  205,  742,  200,  798,  903,  238,  544,
  545,  454,  249,  317,  249,  663, 1172,  448,  930,  994,
  683, 1118,  263,  556,   76,  192,   76,  898,  846,  923,
   76,   76,  888,  213, 1079,   76,  213,  547,  936,   76,
  190,   76,  474,  644,  328,  328,  454,  454,  223,  454,
  503,  191,  242,  503,  300,   76,  661,  475,  653,   76,
  327,  801,  514,  500,  514,  514,  514,  996,  624,  624,
  538,  430,  223,  492,  309,  496,  309,  316,  228,  263,
  539,  263,  891,  263,  552,  552,  892,  639,  836, 1123,
  894,  317,  660,  641,   16,   16,  251,  205,  569,  193,
  618,  331,  192,  193,  192,  223,  192,  252,  702,  748,
  619,  569,  193,  706,  710, 1169,  258,  594,  501,   76,
  503,  384,  328,  257,  598,   76,  497,   76,  503,  724,
  503,  329,  390,  197,  331,  197,   76,  197,  714,  253,
  226,  501,  199,  205,  883,  884,  417,  538,  876,   76,
  226,  699,  254,  846,  199,  793,  943,  539,  893,  696,
 1020,  968,  827,   42,   43,  640,   90,  255,   55,  682,
  226,  642,  839,  533,  840,  533,  193,  728,  193,  688,
  193,  223,  786,  671, 1216,  690,  703,  223,  841,  660,
 1225,  707,  711, 1170,  258,   76,  501, 1070,  503,  384,
  327,  915,  541,  273,  340,   42,   43,  419,  660,  329,
   16,   16,  331,  316,  660,  273,  296,   16,   16,   16,
  725,  726,   16,  281,  282,  349,  488,  317,  454,   76,
  533,   16,  188,   76, 1096,   76,  397, 1135, 1031,  397,
  275,  454,  422, 1088,  359,   76, 1062,  361,  837,  316,
  454,  363,  275,  565,  565,  424,  572,  295, 1097, 1098,
  397,  397,  316,  317,  434,  830,  612, 1006,  306,  439,
 1096,  199,  613,  337,  199,  878,  317,  660,  624,   44,
   45,  429, 1241,  297,  223, 1242,   46,   47,   48,  117,
   76,   49,  440,   16, 1097, 1098,  445,  337,  337,  316,
   50,  752,  569,  569,  569,  401,   42,   43,  401,  885,
  446,  569,  488,  317,  489,  569,  569,  579,  580,   23,
   24,   44,   45,  450,   55,   31,   32,   76,   46,   47,
   48,  449, 1041,   49,  561,  562, 1030,   76,  219, 1121,
  220,  573,   50,  574,  460,  505,  506,  277,  465,  278,
  466,  279,  461,  280,  281,  282,  917,  523,  309,   55,
  296, 1040,  296,  246,  397,  247,  454,  397,  877,  454,
  454, 1181,  463,  575,  454,  397,  397,  397,  715,  716,
  717,  112,  112,   76,  454,  213,  112,  468,  397,  397,
  295,  469,  454,  295,  470,  295,  295,  473,   33,  896,
  493,  295,  974,  295,  660,  498,  231,  232,   25,   76,
  478, 1009,  627,  236,  283,  479,  485,   76,  239,  240,
  480,   26,   44,   45,  485,  485,  485, 1023,  494,   46,
   47,   48,  680,  223,   49,   27, 1014,  499,  857,   34,
  454,   35,   36,   50,  686,  451,  687,  504, 1158,   37,
   38,  454,  253,   39,  253,  749,  660,  502, 1006,  695,
  696,   28,   29,  565,  853,  223,  565,   40,  621,  503,
  112,  284,    1,    2,    3,    4,    5,    6,    7,    8,
  117, 1046,  696,  112,  316,  525,  919,  552, 1129, 1130,
 1131, 1132,  285,  529,  286,  420,  421,  112,  317,  528,
  112,   54,  795,  571,  484,  484,  484,  112, 1017,  249,
  250,  295,  382,  531,  452,  813,  648,  649,  961,   76,
  453,  205,  846,  112,  112,  831, 1155,  848,  849, 1150,
 1247, 1248,  961, 1094,  533,  536,  546,  454, 1071,  518,
  961,  518,  518,  518, 1210,  555,  596,  601,  611,  287,
  615,  288,  623,  289,  631,  290,  454,  291,  292,  293,
  294,  635,  454,  862,  633,  516,  862,  516,  516,  516,
  692,  637,  638,   76,  296,  647,  112,  112, 1050,  643,
  651,  361,  112, 1051, 1052,  652, 1054, 1057, 1058, 1059,
 1060,   76,  655,  659, 1063,  213, 1109, 1110, 1111, 1112,
 1113, 1205,  665,  664,  382,  667,  670,  691,  678, 1202,
 1115,  676,  295,  677,  679,  295, 1078,  382,  382,  382,
  213,  681,  382,  694,  704,  454,   76,  759,  705,  708,
  709,  382,  712,  382,  382,  382, 1138, 1110, 1111, 1112,
 1139,  713,  720,  723,  295, 1145,  223,  744,  739,  295,
  743,  745,  750,  756, 1231,  763,  768,  769,  772,   76,
  919,  454,  565,  773,  777,   23,   24,  779,  813,  781,
   55,  780,  807,  361,  791,  799,  454,  454, 1156, 1116,
  802,  806,  821,  808,  818,  825,  361,  361,  828,  843,
  850,  361,  855,   76,  856,  382, 1127,  382,  859,  382,
  361,   76,  361,  361,  361,  860,  861,  868,  795, 1218,
  865, 1003, 1173,  869,  872,  870,  871,  874,   41,  812,
 1180,  295,  295,   76,   76,   76,   76,  875,  880, 1019,
   76, 1196,  882,  696,  901,  454,   76,   76,  727,  913,
  912,  733, 1189, 1190, 1191, 1192,  924,  925,  935, 1194,
  938,  967,  454,  973,   25,  977, 1200,  454,  983,   76,
   76,  992,  296,  997,  361, 1002,  361,   26,  361,  998,
   76,  183,  185, 1000, 1021,  822, 1015, 1027, 1211, 1212,
 1025,   27,  211,  204,  204,   10,   11, 1026,  213, 1032,
  204,  451,  221, 1029, 1035, 1033, 1036,  295,  295, 1037,
 1038,   10,   11,  295,  454,  295, 1187,   28,   29,  295,
 1043,  295, 1044,  295,   23,   24, 1193, 1045, 1048,   55,
  759,   76, 1049,  759, 1064,  961, 1067, 1065,  918, 1203,
  295, 1073, 1074, 1054, 1082,   76,   76,  813, 1003, 1075,
 1238, 1077,  585, 1083,  586, 1085,  587,  985,  588,   10,
   11, 1107, 1124, 1089, 1244, 1245, 1104,  980, 1125, 1141,
  452, 1142, 1167, 1143,  845, 1148,  453, 1222, 1152, 1223,
 1154, 1163,  939, 1147, 1166, 1159, 1165, 1171,  296, 1178,
 1176, 1185,  795, 1184, 1013, 1102, 1186,  621, 1188, 1204,
 1207, 1221, 1226, 1215,  296, 1227, 1229,  413,  183,   12,
 1235,   13,   14,   25,  101, 1246, 1237, 1234,   15,   16,
   17,  251, 1236,   18,  505,   12,   26,   13,   14,  295,
  831,  251,   19,  266,   15,   16,   17,   20,   21,   18,
   27,  295,  862,  505,  509,  295,  244,  505,   19,  192,
  451,  103,  501,   20,   21,  195,  501,  258,  204,  277,
  545,   10,   11,   89,   90,  535,   28,   29,  501,  558,
  195,  570,  384,   12,  169,   13,   14,  258,  123,   89,
  113,  113,   15,   16,   17,  113,  202,   18,  258,  125,
  212,  268,  313,  540,  547,  295,   19,  384,  511,  195,
  192,   20,   21,  552,  286,   91,  204,  589,   42,   43,
  542,  554,  390,  413,  204,  288,  277,  484,  278,  452,
  279,  260,  280,  281,  282,  453,  329,  614,   55,  410,
 1140, 1164,  636, 1136,   83,  658,   84,   85,   86,   87,
   88,   42,   43,   89,   90,   91,   55, 1144, 1161,  549,
 1091,  939,  305,  980,  590,  970,  838, 1024, 1066,  815,
   95,   96, 1183,  844,  548, 1119,  551,  100, 1199,  113,
  842, 1228,  899,  942,  101,   12, 1209,   13,   14,  296,
  564,  721,  113,  283,   15,   16,   17, 1162, 1081,   18,
  577, 1086,  976,  582,  107, 1090,  113,  966,   19,  113,
   55,  109, 1087,   20,   21,  969,  113, 1101,  599, 1219,
  604,  606, 1220,  927, 1105,  991, 1072, 1213, 1214, 1233,
  295,  276,  113,  113,   44,   45, 1042,  890,  522, 1239,
  538,   46,   47,   48,   10,   11,   49, 1095,  897, 1122,
  508,  727, 1230, 1232,  873,   50, 1206,  759,  113,  117,
  904,  509,  740,  867, 1146,  115, 1201,   44,   45,  646,
  241,  204,  204,  116,   46,   47,   48,  117,  911,   49,
 1195, 1208, 1137,  866, 1016,  113,  113, 1128,   50,  411,
 1197,  113, 1182,  118,  629,  934,  204,  119,  120,  121,
  122,  123,  124,  125,  126,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  136,  137,  834,  138,    0,    0,
    0,    0,    0,    0,  140,  141,    0,    0,  287,    0,
  288,    0,   42,   43,  290,   90,  291,  292,  293,  294,
    0,    0,    0,  142,  143,  144,  145,    0,    0, 1091,
  318, 1091,  147,  148,  149,  150,  151,  152,   12,  153,
   13,   14,  918,    0,    0,    0,    0,   15,   16,   17,
    0,    0,   18,    0,  295,   42,   43,  548,    0,    0,
    0,   19,  741,    0,  183,    0,   20,   21,    0,    0,
  204,    0,  489,    0,  489,  489,  489,  489,  489,  489,
  489,  489,  489,  489,  489,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  489,  489,  489,  489,  489,
  489,  489,  489,    0,    0,  489,    0,  295,    0,    0,
    0,    0,  489,    0,    0,    0,  204,    0,    0,  489,
    0,  183,  489,  489,    0,  489,    0,  567,   44,   45,
  413,  489,  489,  489,    0,   46,   47,   48,    0,  489,
   49,    0,    0,    0,    0,    0,  413,    0,  183,   50,
    0,    0,    0,  489,  489,  277,    0,  278,    0,  279,
    0,  280,  281,  282,  489,    0,    0,   55,    0,    0,
    0,   44,   45,    0,    0,    0,    0,  216,   46,   47,
   48,  216,  216,   49,  216,  216,  489,  489,    0,  216,
    0,    0,   50,  489,    0,  489,  489,    0,    0,    0,
    0,  489,  489,  489,  489,  489,    0,  489,    0,    0,
    0,  547,    0,  413,    0,    0,  489,    0,   42,   43,
    0,  489,  283,   55,    0,  489,  489,  489,  489,  489,
  489,  489,  489,  489,  489,  489,  489,  489,  489,  489,
  489,  489,  489,  489,  216,  489,    0,    0,  548,    0,
  489,    0,  489,  489,    0,    0,  277,  216,  278,    0,
  279,    0,  280,  281,  282,    0,    0,    0,   55,    0,
    0,  489,  489,  489,  489,    0,    0,    0,  489,  508,
  489,  489,  489,  489,  489,  489,    0,  489,  117,    0,
  509,  211,  577,    0,   10,   11,  582,    0,  216,    0,
  216,  216,  216,    0,  169,  216,  599,    0,  216,  216,
  216,    0,  216,    0,  604,    0,    0,  606,    0,    0,
    0,    0,    0,  283,    0,  216,  216,  216,    0,  359,
    0,    0,    0,    0,   44,   45,  216,  216,  216,  216,
    0,   46,   47,   48,  117,    0,   49,    0,    0,    0,
    0,    0,  216,    0,    0,   50,    0,  287,    0,  288,
 1028,    0,    0,  290,    0,  291,  292,  293,  294,    0,
    0,   31,   32,    0,    0,    0,   55,    0,    0,  216,
  284,  216,  216,  216,  216,  216,  216,  216,  216,  117,
  216,    0,  216,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   12,    0,
   13,   14,    0,    0,    0,    0,    0,   15,   16,   17,
    0,  359,   18,    0,  517,    0,    0,  413,    0,    0,
    0,   19,    0,    0,  359,  359,   20,   21,    0,  359,
    0,    0,    0,    0,   33,    0,    0,    0,  359,    0,
  359,  359,  359,    0,    0,    0,    0,    0,  287,    0,
  288,    0,  698,    0,  290,    0,  291,  292,  293,  294,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   34,    0,   35,   36,  212,
    0,    0,    0,    0,  204,   37,   38,   58,    0,   39,
    0,    0,    0,    0,    0,    0,    0,  606,    0,    0,
    0,    0,  359,   40,  359,  413,  359,    0,    0,    0,
  413,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,    0,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,  482,  482,    0,  482,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,    0,  482,  482,  482,  482,  482,  482,    0,    0,
  482,    0,    0,  482,  482,  482,  482,  482,    0,  482,
  482,    0,  482,  482,  482,  482,    0,    0,    0,    0,
    0,  482,  482,  482,  482,  482,    0,    0,  482,    0,
    0,    0,    0,    0,    0,  482,  482,  482,  482,  482,
  482,  482,  482,  482,    0,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,    0,  482,    0,    0,
    0,  482,    0,  482,  482,  482,  482,    0,    0,    0,
    0,  482,    0,    0,    0,  482,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,  482,
  482,  482,  482,  482,    0,  482,    0,    0,    0,    0,
  482,    0,  482,  482,    0,    0,  482,  482,  482,  482,
  482,  482,  482,  482,  482,  482,  482,  482,  482,    0,
  482,  482,  482,  482,  482,  482,    0,  482,  482,  482,
  482,  482,  482,  482,  482,  482,    0,  482,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,    0,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
    0,  476,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,    0,  476,
  476,  476,  476,  476,  476,    0,    0,  476,    0,    0,
  476,  476,  476,  476,  476,    0,  476,  476,    0,  476,
  476,  476,  476,    0,    0,    0,    0,    0,  476,  476,
  476,  476,  476,    0,    0,  476,    0,    0,    0,    0,
    0,    0,  476,  476,  476,  476,  476,  476,  476,  476,
  476,    0,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,    0,  476,    0,    0,    0,  476,    0,
  476,  476,  476,  476,    0,    0,    0,    0,  476,    0,
    0,    0,  476,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
  476,    0,  476,    0,    0,    0,    0,  476,    0,  476,
  476,    0,    0,  476,  476,  476,  476,  476,  476,  476,
  476,  476,  476,  476,  476,  476,    0,  476,  476,  476,
  476,  476,  476,    0,  476,    0,  476,  476,  476,  476,
  476,  476,  476,    0,  476,  247,  247,  247,    0,    0,
  247,  247,    0,  247,  247,    0,    0,    0,  247,    0,
  247,  247,  247,  247,  247,  247,  247,  247,  247,    0,
    0,    0,    0,    0,    0,    0,    0,  247,  247,    0,
  247,  247,  247,  247,  247,  247,    0,    0,  247,  247,
  247,  247,  247,    0,  247,  247,    0,    0,  247,    0,
  247,  247,  247,  247,  247,    0,    0,    0,  247,  247,
  247,  247,  247,  247,  247,    0,  247,  247,  247,  247,
  247,  247,    0,    0,  247,    0,  247,    0,    0,  247,
  247,  247,    0,  247,  247,    0,  247,  247,    0,  247,
    0,    0,    0,    0,    0,  247,  247,  247,  247,  247,
    0,    0,  247,    0,    0,    0,    0,    0,  247,  247,
    0,    0,  247,  247,  247,  247,  247,  247,    0,  247,
  247,  247,  247,  247,  247,    0,  247,  247,  247,  247,
    0,  247,    0,    0,  247,  247,  247,  247,  247,  247,
  247,    0,  247,    0,  247,  247,  247,    0,    0,    0,
    0,    0,    0,    0,    0,  247,  247,  247,  247,  211,
    0,    0,   10,   11,    0,    0,    0,    0,    0,    0,
    0,  247,  206,  206,    0,  206,    0,  206,    0,    0,
  247,  247,  247,  247,  247,  247,  247,  247,  247,  247,
  247,  247,  247,    0,  247,    0,    0,    0,  247,  247,
    0,  247,  247,  247,  247,  247,  247,  247,    0,  247,
   83,  247,   84,   85,   86,   87,   88,   42,   43,   89,
   90,   91,   55,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   92,   93,   94,   95,   96,   97,   98,
   99,    0,    0,  100,    0,    0,    0,    0,    0,    0,
  101,    0,    0,    0,    0,    0,    0,  102,    0,    0,
  103,  104,    0,  105,    0,    0,    0,    0,    0,  106,
  107,  108,    0,    0,    0,    0,   12,  109,   13,   14,
   42,   43,    0,    0,    0,   15,   16,   17,  206,  206,
   18,  110,  111,    0,    0,  206,  206,  206,  206,   19,
  206,    0,  112,    0,   20,   21,    0,    0,    0,  206,
    0,    0,    0,    0,    0,  277,    0,  278,    0,  279,
    0,  280,  281,  282,  113,  114,    0,   55,    0,    0,
    0,  115,    0,   44,   45,    0,    0,    0,    0,  116,
   46,   47,   48,  117,  585,   49,  586,    0,  587,    0,
  588,   10,   11,    0,   50,    0,    0,  212,    0,  118,
    0,    0,    0,  119,  120,  121,  122,  123,  124,  125,
  126,  127,  128,  129,  130,  131,  132,  133,  134,  135,
  136,  137,  283,  138,    0,  612,  612,    0,  139,    0,
  140,  141,    0,    0,    0,    0,   44,   45,    0,    0,
    0,    0,    0,   46,   47,   48,    0,    0,   49,  142,
  143,  144,  145,    0,    0,    0,  146,   50,  147,  148,
  149,  150,  151,  152,   83,  153,   84,   85,   86,   87,
   88,   42,   43,   89,   90,   91,   55,    0,    0,  284,
    0,    0,    0,    0,    0,  612,    0,    0,  117,    0,
   95,   96,    0,    0,    0,    0,    0,  100,    0,    0,
    0,    0,    0,    0,  101,   12,    0,   13,   14,    0,
    0,    0,    0,    0,   15,   16,   17,    0,    0,   18,
    0,    0,    0,    0,  107,   31,   32,    0,   19,    0,
   55,  109,    0,   20,   21,    0,    0,    0,    0,  589,
    0,  612,  612,    0,    0,    0,    0,    0,  612,  612,
  612,    0,    0,  612,    0,    0,    0,  287,    0,  288,
    0, 1005,  612,  290,    0,  291,  292,  293,  294,  585,
    0,  586,    0,  587,    0,  588,   10,   11,  113,    0,
    0,  804,    0,    0,    0,  115,  590,   44,   45,    0,
    0,    0,    0,  116,   46,   47,   48,  117,   33,   49,
    0,    0,   52,    0,  307,  307,   53,   54,   50,   31,
   32,    0,    0,  118,   55,    0,    0,  119,  120,  121,
  122,  123,  124,  125,  126,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  136,  137,    0,  138,    0,   34,
    0,   35,   36,  733,  140,  141,    0,    0,    0,   37,
   38,   58,    0,   39,  116,  116,    0,    0,    0,  116,
    0,   56,    0,  142,  143,  144,  145,   40,    0,   57,
  146,    0,  147,  148,  149,  150,  151,  152,    0,  153,
    0,    0,   33,    0,    0,    0,    0,    0,    0,    0,
   12,    0,   13,   14,    0,  971,    0,    0,  489,   15,
   16,   17,  489,  489,   18,  489,  489,    0,    0,    0,
  489,   31,   32,   19,    0,    0,    0,    0,   20,   21,
  307,  307,    0,   34,  589,   35,   36,  307,  307,  307,
    0,    0,  307,   37,   38,   58,    0,   39,  273,  274,
    0,  307,    0,  116,    0,    0,  358,    0,    0,    0,
   59,   40,   60,    0,    0,    0,  116,  489,    0,    0,
    0,   61,   62,   63,   64,  489,    0,    0,    0,    0,
  116,  590,    0,  116,   57,    0,   65,   66,  489,    0,
  116,    0,    0,    0,   33,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   52,  116,  116,    0,   53,
   54,    0,   31,   32,   67,    0,   68,   55,   69,    0,
   70,   71,   72,   73,    0,   74,    0,   75,    0,  489,
  211,  489,  489,   10,   11,   34,    0,   35,   36,  489,
  489,  489,    0,  489,    0,   37,   38,  547,  358,   39,
  886,  887,    0,    0,    0,    0,  489,  489,  489,  116,
  116,  358,  358,   40,   56,  116,  358,  489,  489,  489,
  489,    0,   57,    0,    0,  358,    0,  358,  358,  358,
    0,    0,  489,  489,   30,   33,   30,    0,   30,    0,
   30,   30,   30,    0,    0,    0,   30,    0,    0,    0,
    0,   52,    0,    0,    0,   53,   54,    0,   31,   32,
  489,    0,  489,   55,  489,    0,  489,  489,  489,  489,
    0,  489,    0,  489,    0,    0,   34,    0,   35,   36,
  612,  612,    0,    0,    0,    0,   37,   38,   58,  358,
   39,  358,    0,  358,    0,    0,    0,   12,    0,   13,
   14,   30,    0,   59,   40,   60,   15,   16,   17,    0,
    0,   18,    0, 1149,   61,   62,   63,   64,   57,    0,
   19,    0,    0,    0,    0,   20,   21,    0,    0,   65,
   66,   33,  117,  117,    0,    0,    0,  117,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   52,    0,
    0,    0,   53,   54,    0,   31,   32,   67,   30,   68,
   55,   69,    0,   70,   71,   72,   73,   30,   74,   30,
   75,    0,   34,    0,   35,   36,    0,    0,  212,    0,
    0,    0,   37,   38,   58,    0,   39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  612,  612,    0,   59,
   40,   60,    0,  612,  612,  612,    0,    0,  612,    0,
   61,   62,   63,   64,    0,   57,    0,  612,    0,    0,
    0,  117,    0,    0,    0,    0,   66,    0,   33,    0,
    0,    0,    0,    0,  117,    0,   30,    0,   30,    0,
    0,    0,   30,  360,   30,   30,   30,   30,  117,    0,
    0,  117,   63,   67,    0,   68,    0,   69,  117,   70,
   71,   72,   73,    0,   74,    0,   75,    0,    0,   34,
    0,   35,   36,    0,  117,  117,    0,    0,    0,   37,
  366,   58,  366,   39,  366,    0,  366,  366,  366,    0,
    0,    0,  366,    0,    0,    0,   59,   40,   60,    0,
  366,    0,    0,    0,    0,    0,    0,   61,   62,   63,
   64,    0,  367,    0,  367,    0,  367,    0,  367,  367,
  367,    0,    0,   66,  367,    0,    0,  117,  117,    0,
    0,    0,  367,  117,    0,  360,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  366,  360,  360,
   67,    0,   68,  360,   69,    0,   70,   71,   72,   73,
    0,   74,  360,   75,  360,  360,  360,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  367,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  366,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  366,  366,  366,  366,    0,    0,
  366,    0,    0,  366,    0,    0,    0,    0,    0,  366,
    0,  366,  366,  366,  367,    0,  360,    0,  360,    0,
  360,    0,    0,    0,    0,    0,  367,  367,  367,  367,
    0,    0,  367,    0,    0,  367,    0,    0,    0,    0,
    0,  367,    0,  367,  367,  367,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  366,  366,  366,  366,  366,  366,  366,    0,
  366,  366,  366,  366,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  209,    0,  209,  367,  367,  367,  367,  367,  367,
  367,    0,  367,  367,  367,  367,  209,  209,  209,  209,
  209,  209,  209,  209,  209,    0,    0,    0,    0,    0,
    0,    0,    0,  209,  209,    0,  209,  209,  209,  209,
  209,  209,    0,    0,  209,  209,  209,  209,  209,    0,
  209,  209,    0,    0,  209,    0,  209,  209,  209,  209,
  209,    0,    0,    0,  209,  209,  209,  209,  209,    0,
  209,    0,  209,  209,  209,  209,  209,  209,    0,    0,
  209,    0,    0,    0,    0,  209,  209,  209,    0,  209,
  209,    0,  209,  209,    0,  209,    0,    0,    0,    0,
    0,  209,  209,  209,  209,  209,    0,    0,  209,    0,
    0,    0,    0,    0,  209,  209,    0,    0,  209,  209,
  209,  209,  209,    0,    0,    0,    0,  209,  209,  209,
  209,    0,  209,    0,    0,    0,    0,    0,    0,    0,
  209,  209,  209,  209,  209,  209,    0,    0,  209,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  209,  209,  209,  209,
  209,  209,  209,  209,  209,  209,  209,  209,  209,  210,
  209,  210,    0,    0,    0,  209,    0,  209,    0,  209,
    0,    0,    0,    0,  210,  210,  210,  210,  210,  210,
  210,  210,  210,    0,    0,    0,    0,    0,    0,    0,
    0,  210,  210,    0,  210,  210,  210,  210,  210,  210,
    0,    0,  210,  210,  210,  210,  210,    0,  210,  210,
    0,    0,  210,    0,  210,  210,  210,  210,  210,    0,
    0,    0,  210,  210,  210,  210,  210,    0,  210,    0,
  210,  210,  210,  210,  210,  210,    0,    0,  210,    0,
    0,    0,    0,  210,  210,  210,    0,  210,  210,    0,
  210,  210,    0,  210,    0,    0,    0,    0,    0,  210,
  210,  210,  210,  210,    0,    0,  210,    0,    0,    0,
    0,    0,  210,  210,    0,    0,  210,  210,  210,  210,
  210,    0,    0,    0,    0,  210,  210,  210,  210,    0,
  210,    0,    0,    0,    0,    0,    0,    0,  210,  210,
  210,  210,  210,  210,    0,    0,  210,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  210,  210,  210,  210,  210,  210,
  210,  210,  210,  210,  210,  210,  210,  211,  210,  211,
    0,    0,    0,  210,    0,  210,    0,  210,    0,    0,
    0,    0,  211,  211,  211,  211,  211,  211,  211,  211,
  211,    0,    0,    0,    0,    0,    0,    0,    0,  211,
  211,    0,  211,  211,  211,  211,  211,  211,    0,    0,
  211,  211,  211,  211,  211,    0,  211,  211,    0,    0,
  211,    0,  211,  211,  211,  211,  211,    0,    0,    0,
  211,  211,  211,  211,  211,    0,  211,    0,  211,  211,
  211,  211,  211,  211,    0,    0,  211,    0,    0,    0,
    0,  211,  211,  211,    0,  211,  211,    0,  211,  211,
    0,  211,    0,    0,    0,    0,    0,  211,  211,  211,
  211,  211,    0,    0,  211,    0,    0,    0,    0,    0,
  211,  211,    0,    0,  211,  211,  211,  211,  211,    0,
    0,    0,    0,  211,  211,  211,  211,    0,  211,    0,
    0,    0,    0,    0,    0,    0,  211,  211,  211,  211,
  211,  211,    0,    0,  211,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  211,  211,  211,  211,  211,  211,  211,  211,
  211,  211,  211,  211,  211,  212,  211,  212,    0,    0,
    0,  211,    0,  211,    0,  211,    0,    0,    0,    0,
  212,  212,  212,  212,  212,  212,  212,  212,  212,    0,
    0,    0,    0,    0,    0,    0,    0,  212,  212,    0,
  212,  212,  212,  212,  212,  212,    0,    0,  212,  212,
  212,  212,  212,    0,  212,  212,    0,    0,  212,    0,
  212,  212,  212,  212,  212,    0,    0,    0,  212,  212,
  212,  212,  212,    0,  212,    0,  212,  212,  212,  212,
  212,  212,    0,    0,  212,    0,    0,    0,    0,  212,
  212,  212,    0,  212,  212,    0,  212,  212,    0,  212,
    0,    0,    0,    0,    0,  212,  212,  212,  212,  212,
    0,    0,  212,    0,    0,    0,    0,    0,  212,  212,
    0,    0,  212,  212,  212,  212,  212,    0,    0,    0,
    0,  212,  212,    0,  212,    0,  212,    0,    0,    0,
    0,    0,    0,    0,  212,  212,  212,  212,  212,  212,
    0,    0,  212,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  212,  212,  212,  212,  212,  212,  212,  212,  212,  212,
  212,  212,  212,  480,  212,  480,    0,    0,    0,  212,
    0,  212,    0,  212,    0,    0,    0,    0,  480,  480,
  480,  480,  480,  480,  480,  480,  480,    0,    0,    0,
    0,    0,    0,    0,    0,  480,  480,    0,  480,  480,
  480,  480,  480,  480,    0,    0,  480,  480,  480,  480,
  480,    0,  480,  480,    0,    0,  480,    0,  480,  480,
  480,  480,  480,    0,    0,    0,  480,  480,  480,  480,
  480,    0,  480,    0,  480,  480,  480,  480,  480,  480,
    0,    0,  480,    0,    0,    0,    0,  480,  480,  480,
    0,  480,  480,    0,  480,  480,    0,  480,    0,    0,
    0,    0,    0,  480,  480,  480,  480,  480,    0,    0,
  480,    0,    0,    0,    0,    0,    0,  480,    0,    0,
  480,  480,  480,  480,  480,    0,    0,    0,    0,  480,
  480,  480,  480,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  480,    0,  480,  480,  480,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  480,  480,
  480,  480,  480,  480,  480,  480,  480,  480,  480,  480,
  480,  404,  480,  404,    0,    0,    0,  480,    0,  480,
    0,  480,    0,    0,    0,    0,  404,  404,  404,  404,
  404,  404,  404,  404,  404,    0,    0,    0,    0,    0,
    0,    0,    0,  404,  404,    0,  404,  404,  404,  404,
  404,  404,    0,    0,  404,  404,  404,  404,  404,    0,
  404,  404,    0,    0,  404,    0,  404,  404,  404,  404,
  404,    0,    0,    0,  404,  404,  404,  404,  404,    0,
  404,    0,  404,  404,  404,  404,  404,  404,    0,    0,
  404,    0,    0,    0,    0,  404,  404,  404,    0,  404,
  404,    0,  404,  404,    0,  404,    0,    0,    0,    0,
    0,  404,  404,  404,  404,  404,    0,    0,  404,    0,
    0,    0,    0,    0,    0,  404,    0,    0,  404,  404,
  404,  404,  404,    0,    0,    0,    0,  404,  404,    0,
  404,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  404,    0,  404,  404,  404,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  404,  404,  404,  404,
  404,  404,  404,  404,  404,  404,  404,  404,  404,  526,
  404,  526,    0,    0,    0,  404,    0,  404,    0,  404,
    0,    0,    0,    0,  526,  526,  526,  526,  526,  526,
  526,  526,  526,    0,    0,    0,    0,    0,    0,    0,
    0,  526,  526,    0,  526,  526,  526,  526,  526,  526,
    0,    0,  526,  526,  526,  526,  526,    0,  526,  526,
    0,    0,  526,    0,  526,  526,  526,  526,  526,    0,
    0,    0,  526,  526,  526,  526,  526,    0,  526,    0,
  526,  526,  526,  526,  526,  526,    0,    0,  526,    0,
    0,    0,    0,  526,  526,  526,    0,  526,  526,    0,
  526,  526,    0,  526,    0,    0,    0,    0,    0,  526,
  526,  526,  526,  526,    0,    0,  526,    0,    0,    0,
    0,    0,    0,  526,    0,    0,  526,  526,  526,  526,
  526,    0,    0,    0,    0,    0,  526,  526,  526,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  526,
    0,  526,  526,  526,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  526,  526,  526,  526,  526,  526,
  526,  526,  526,  526,  526,  526,  526,  531,  526,  531,
    0,    0,    0,  526,    0,  526,    0,  526,    0,    0,
    0,    0,  531,  531,  531,  531,  531,  531,  531,  531,
  531,    0,    0,    0,    0,    0,    0,    0,    0,  531,
  531,    0,  531,  531,  531,  531,  531,  531,    0,    0,
  531,  531,  531,  531,  531,    0,  531,  531,    0,    0,
  531,    0,  531,  531,  531,  531,  531,    0,    0,    0,
  531,  531,  531,  531,  531,    0,  531,    0,  531,  531,
  531,  531,  531,  531,    0,    0,  531,    0,    0,    0,
    0,  531,  531,  531,    0,  531,  531,    0,  531,  531,
    0,  531,    0,    0,    0,    0,    0,  531,  531,  531,
  531,  531,    0,    0,  531,    0,    0,    0,    0,    0,
    0,  531,    0,    0,  531,  531,  531,  531,  531,    0,
    0,    0,    0,    0,  531,  531,  531,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  531,    0,  531,
  531,  531,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  531,  531,  531,  531,  531,  531,  531,  531,
  531,  531,  531,  531,  531,  414,  531,  414,    0,    0,
    0,  531,    0,  531,    0,  531,    0,    0,    0,    0,
  414,  414,  414,  414,  414,  414,  414,  414,  414,    0,
    0,    0,    0,    0,    0,    0,    0,  414,  414,    0,
  414,  414,  414,  414,  414,  414,    0,    0,  414,  414,
  414,  414,  414,    0,  414,  414,    0,    0,  414,    0,
  414,  414,  414,  414,  414,    0,    0,    0,  414,  414,
  414,  414,  414,    0,  414,    0,  414,  414,  414,  414,
  414,  414,    0,    0,  414,    0,    0,    0,    0,  414,
  414,  414,    0,  414,  414,    0,  414,  414,    0,  414,
    0,    0,    0,    0,    0,  414,  414,  414,  414,  414,
    0,    0,  414,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  414,  414,  414,  414,  414,    0,    0,    0,
    0,  414,  414,    0,  414,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  414,    0,  414,  414,  414,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  414,  414,  414,  414,  414,  414,  414,  414,  414,  414,
  414,  414,  414,  412,  414,  412,    0,    0,    0,  414,
    0,  414,    0,  414,    0,    0,    0,    0,  412,  412,
  412,  412,  412,  412,  412,  412,  412,    0,    0,    0,
    0,    0,    0,    0,    0,  412,  412,    0,  412,  412,
  412,  412,  412,  412,    0,    0,  412,  412,  412,  412,
  412,    0,  412,  412,    0,    0,  412,    0,  412,  412,
  412,  412,  412,    0,    0,    0,  412,  412,  412,  412,
  412,    0,  412,    0,  412,  412,  412,  412,  412,  412,
    0,    0,  412,    0,    0,    0,    0,  412,  412,  412,
    0,  412,  412,    0,  412,  412,    0,  412,    0,    0,
    0,    0,    0,  412,  412,  412,  412,  412,    0,    0,
  412,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  412,  412,  412,  412,  412,    0,    0,    0,    0,  412,
  412,    0,  412,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  412,    0,  412,  412,  412,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  412,  412,
  412,  412,  412,  412,  412,  412,  412,  412,  412,  412,
  412,  413,  412,  413,    0,    0,    0,  412,    0,  412,
    0,  412,    0,    0,    0,    0,  413,  413,  413,  413,
  413,  413,  413,  413,  413,    0,    0,    0,    0,    0,
    0,    0,    0,  413,  413,    0,  413,  413,  413,  413,
  413,  413,    0,    0,  413,  413,  413,  413,  413,    0,
  413,  413,    0,    0,  413,    0,  413,  413,  413,  413,
  413,    0,    0,    0,  413,  413,  413,  413,  413,    0,
  413,    0,  413,  413,  413,  413,  413,  413,    0,    0,
  413,    0,    0,    0,    0,  413,  413,  413,    0,  413,
  413,    0,  413,  413,    0,  413,    0,    0,    0,    0,
    0,  413,  413,  413,  413,  413,    0,    0,  413,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  413,  413,
  413,  413,  413,    0,    0,    0,    0,  413,  413,    0,
  413,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  413,    0,  413,  413,  413,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  413,  413,  413,  413,
  413,  413,  413,  413,  413,  413,  413,  413,  413,  410,
  413,  410,    0,    0,    0,  413,    0,  413,    0,  413,
    0,    0,    0,    0,  410,  410,  410,  410,  410,  410,
  410,  410,  410,    0,    0,    0,    0,    0,    0,    0,
    0,  410,  410,    0,  410,  410,  410,  410,  410,  410,
    0,    0,  410,  410,  410,  410,  410,    0,  410,  410,
    0,    0,  410,    0,  410,  410,  410,  410,  410,    0,
    0,    0,  410,  410,  410,  410,  410,    0,  410,    0,
  410,  410,  410,  410,  410,  410,    0,    0,  410,    0,
    0,    0,    0,  410,  410,  410,    0,  410,  410,    0,
  410,  410,    0,  410,    0,    0,    0,    0,    0,  410,
  410,  410,  410,  410,    0,    0,  410,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  410,  410,  410,  410,
  410,    0,    0,    0,    0,  410,  410,    0,  410,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  410,
    0,  410,  410,  410,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  410,  410,  410,  410,  410,  410,
  410,  410,  410,  410,  410,  410,  410,  411,  410,  411,
    0,    0,    0,  410,    0,  410,    0,  410,    0,    0,
    0,    0,  411,  411,  411,  411,  411,  411,  411,  411,
  411,    0,    0,    0,    0,    0,    0,    0,    0,  411,
  411,    0,  411,  411,  411,  411,  411,  411,    0,    0,
  411,  411,  411,  411,  411,    0,  411,  411,    0,    0,
  411,    0,  411,  411,  411,  411,  411,    0,    0,    0,
  411,  411,  411,  411,  411,    0,  411,    0,  411,  411,
  411,  411,  411,  411,    0,    0,  411,    0,    0,    0,
    0,  411,  411,  411,    0,  411,  411,    0,  411,  411,
    0,  411,    0,    0,    0,    0,    0,  411,  411,  411,
  411,  411,    0,    0,  411,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  411,  411,  411,  411,  411,    0,
    0,    0,    0,  411,  411,    0,  411,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  411,    0,  411,
  411,  411,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  411,  411,  411,  411,  411,  411,  411,  411,
  411,  411,  411,  411,  411,  406,  411,  406,    0,    0,
    0,  411,    0,  411,    0,  411,    0,    0,    0,    0,
  406,  406,  406,  406,  406,  406,  406,  406,  406,    0,
    0,    0,    0,    0,    0,    0,    0,  406,  406,    0,
  406,  406,  406,  406,  406,  406,    0,    0,  406,  406,
  406,  406,  406,    0,  406,  406,    0,    0,  406,    0,
  406,  406,  406,  406,  406,    0,    0,    0,  406,  406,
  406,  406,  406,    0,  406,    0,  406,  406,  406,  406,
  406,  406,    0,    0,  406,    0,    0,    0,    0,  406,
  406,  406,    0,  406,  406,    0,  406,  406,    0,  406,
    0,    0,    0,    0,    0,  406,  406,  406,  406,  406,
    0,    0,  406,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  406,  406,  406,  406,  406,    0,    0,    0,
    0,  406,  406,    0,  406,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  406,    0,  406,  406,  406,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  406,  406,  406,  406,  406,  406,  406,  406,  406,  406,
  406,  406,  406,  407,  406,  407,    0,    0,    0,  406,
    0,  406,    0,  406,    0,    0,    0,    0,  407,  407,
  407,  407,  407,  407,  407,  407,  407,    0,    0,    0,
    0,    0,    0,    0,    0,  407,  407,    0,  407,  407,
  407,  407,  407,  407,    0,    0,  407,  407,  407,  407,
  407,    0,  407,  407,    0,    0,  407,    0,  407,  407,
  407,  407,  407,    0,    0,    0,  407,  407,  407,  407,
  407,    0,  407,    0,  407,  407,  407,  407,  407,  407,
    0,    0,  407,    0,    0,    0,    0,  407,  407,  407,
    0,  407,  407,    0,  407,  407,    0,  407,    0,    0,
    0,    0,    0,  407,  407,  407,  407,  407,    0,    0,
  407,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  407,  407,  407,  407,  407,    0,    0,    0,    0,  407,
  407,    0,  407,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  407,    0,  407,  407,  407,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  407,  407,
  407,  407,  407,  407,  407,  407,  407,  407,  407,  407,
  407,  520,  407,  520,    0,    0,    0,  407,    0,  407,
    0,  407,    0,    0,    0,    0,  520,  520,  520,  520,
  520,  520,  520,  520,  520,    0,    0,    0,    0,    0,
    0,    0,    0,  520,  520,    0,  520,  520,  520,  520,
  520,  520,    0,    0,  520,  520,  520,  520,  520,    0,
  520,  520,    0,    0,  520,    0,  520,  520,  520,  520,
  520,    0,    0,    0,  520,  520,  520,  520,  520,    0,
  520,    0,  520,  520,  520,  520,  520,  520,    0,    0,
  520,    0,    0,    0,    0,  520,  520,  520,    0,  520,
  520,    0,  520,  520,    0,  520,    0,    0,    0,    0,
    0,  520,  520,  520,  520,  520,    0,    0,  520,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  520,  520,
  520,  520,  520,    0,    0,    0,    0,  520,  520,    0,
  520,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  520,    0,  520,  520,  520,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  520,  520,  520,  520,
  520,  520,  520,  520,  520,  520,  520,  520,  520,  521,
  520,  521,    0,    0,    0,  520,    0,  520,    0,  520,
    0,    0,    0,    0,  521,  521,  521,  521,  521,  521,
  521,  521,  521,    0,    0,    0,    0,    0,    0,    0,
    0,  521,  521,    0,  521,  521,  521,  521,  521,  521,
    0,    0,  521,  521,  521,  521,  521,    0,  521,  521,
    0,    0,  521,    0,  521,  521,  521,  521,  521,    0,
    0,    0,  521,  521,  521,  521,  521,    0,  521,    0,
  521,  521,  521,  521,  521,  521,    0,    0,  521,    0,
    0,    0,    0,  521,  521,  521,    0,  521,  521,    0,
  521,  521,    0,  521,    0,    0,    0,    0,    0,  521,
  521,  521,  521,  521,    0,    0,  521,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  521,  521,  521,  521,
  521,    0,    0,    0,    0,  521,  521,    0,  521,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  521,
    0,  521,  521,  521,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  521,  521,  521,  521,  521,  521,
  521,  521,  521,  521,  521,  521,  521,  522,  521,  522,
    0,    0,    0,  521,    0,  521,    0,  521,    0,    0,
    0,    0,  522,  522,  522,  522,  522,  522,  522,  522,
  522,    0,    0,    0,    0,    0,    0,    0,    0,  522,
  522,    0,  522,  522,  522,  522,  522,  522,    0,    0,
  522,  522,  522,  522,  522,    0,  522,  522,    0,    0,
  522,    0,  522,  522,  522,  522,  522,    0,    0,    0,
  522,  522,  522,  522,  522,    0,  522,    0,  522,  522,
  522,  522,  522,  522,    0,    0,  522,    0,    0,    0,
    0,  522,  522,  522,    0,  522,  522,    0,  522,  522,
    0,  522,    0,    0,    0,    0,    0,  522,  522,  522,
  522,  522,    0,    0,  522,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  522,  522,  522,  522,  522,    0,
    0,    0,    0,  522,  522,    0,  522,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  522,    0,  522,
  522,  522,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  522,  522,  522,  522,  522,  522,  522,  522,
  522,  522,  522,  522,  522,  523,  522,  523,    0,    0,
    0,  522,    0,  522,    0,  522,    0,    0,    0,    0,
  523,  523,  523,  523,  523,  523,  523,  523,  523,    0,
    0,    0,    0,    0,    0,    0,    0,  523,  523,    0,
  523,  523,  523,  523,  523,  523,    0,    0,  523,  523,
  523,  523,  523,    0,  523,  523,    0,    0,  523,    0,
  523,  523,  523,  523,  523,    0,    0,    0,  523,  523,
  523,  523,  523,    0,  523,    0,  523,  523,  523,  523,
  523,  523,    0,    0,  523,    0,    0,    0,    0,  523,
  523,  523,    0,  523,  523,    0,  523,  523,    0,  523,
    0,    0,    0,    0,    0,  523,  523,  523,  523,  523,
    0,    0,  523,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  523,  523,  523,  523,  523,    0,    0,    0,
    0,  523,  523,    0,  523,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  523,    0,  523,  523,  523,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  523,  523,  523,  523,  523,  523,  523,  523,  523,  523,
  523,  523,  523,  528,  523,  528,    0,    0,    0,  523,
    0,  523,    0,  523,    0,    0,    0,    0,  528,  528,
  528,  528,  528,  528,  528,  528,  528,    0,    0,    0,
    0,    0,    0,    0,    0,  528,  528,    0,  528,  528,
  528,  528,  528,  528,    0,    0,  528,  528,  528,  528,
  528,    0,  528,  528,    0,    0,  528,    0,  528,  528,
  528,  528,  528,    0,    0,    0,  528,  528,  528,  528,
  528,    0,  528,    0,  528,  528,  528,  528,  528,  528,
    0,    0,  528,    0,    0,    0,    0,  528,  528,  528,
    0,  528,  528,    0,  528,  528,    0,  528,    0,    0,
    0,    0,    0,  528,  528,  528,  528,  528,    0,    0,
  528,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  528,  528,  528,  528,  528,    0,    0,    0,    0,  528,
  528,    0,  528,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  528,    0,  528,  528,  528,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  528,  528,
  528,  528,  528,  528,  528,  528,  528,  528,  528,  528,
  528,  405,  528,  405,    0,    0,    0,  528,    0,  528,
    0,  528,    0,    0,    0,    0,  405,  405,  405,  405,
  405,  405,  405,  405,  405,    0,    0,    0,    0,    0,
    0,    0,    0,  405,  405,    0,  405,  405,  405,  405,
  405,  405,    0,    0,  405,    0,  405,  405,  405,    0,
  405,  405,    0,    0,  405,    0,  405,  405,  405,  405,
  405,    0,    0,    0,  405,  405,  405,  405,  405,    0,
  405,    0,  405,  405,  405,  405,  405,  405,    0,    0,
  405,    0,    0,    0,    0,  405,  405,  405,    0,  405,
  405,    0,  405,  405,    0,  405,    0,    0,    0,    0,
    0,  405,  405,  405,  405,  405,    0,    0,  405,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  405,  405,
  405,  405,  405,    0,    0,    0,    0,  405,  405,    0,
  405,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  405,    0,  405,  405,  405,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  405,  405,  405,  405,
  405,  405,  405,  405,  405,  405,  405,  405,  405,    0,
  405,    0,   76,    0,   76,  405,    0,  405,    0,  405,
   76,   76,    0,    0,    0,    0,    0,   76,   76,   76,
   76,   76,   76,    0,    0,   76,    0,    0,    0,    0,
    0,    0,    0,    0,   76,   76,    0,   76,   76,   76,
   76,   76,   76,    0,    0,   76,    0,   76,   76,   76,
    0,   76,   76,    0,    0,   76,    0,   76,   76,   76,
   76,   76,    0,    0,    0,   76,   76,   76,   76,    0,
    0,   76,    0,   76,   76,   76,   76,   76,   76,    0,
    0,   76,    0,    0,    0,    0,   76,   76,   76,    0,
   76,   76,    0,   76,    0,    0,   76,    0,    0,    0,
    0,    0,   76,   76,   76,   76,   76,    0,    0,   76,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   76,    0,   76,   76,    0,    0,
    0,   76,    0,   76,   76,   76,    0,    0,   76,    0,
    0,    0,    0,    0,    0,    0,    0,   76,    0,    0,
    0,    0,   76,   76,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  118,
  118,    0,    0,    0,  118,    0,    0,   76,   76,   76,
   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
  316,   76,  316,    0,    0,    0,    0,    0,  307,  307,
   76,    0,    0,    0,    0,  316,  316,  316,  316,  316,
  316,  316,    0,  316,    0,    0,    0,    0,    0,    0,
    0,    0,  316,  316,    0,  316,  316,  316,  316,  316,
  316,    0,    0,  316,    0,  316,  316,  316,    0,  316,
  316,    0,    0,  316,    0,  316,  316,  316,  316,  316,
    0,    0,    0,  316,  316,  316,  316,    0,  118,  316,
    0,  316,  316,  316,  316,  316,  316,    0,    0,  316,
    0,  118,    0,    0,  316,  316,  316,    0,  316,  316,
    0,  316,    0,    0,  316,  118,    0,    0,  118,   64,
  316,  316,  316,  316,  316,  118,    0,  316,    0,    0,
    0,    0,    0,    0,  316,    0,    0,    0,    0,    0,
    0,  118,  118,    0,  307,  307,    0,    0,    0,  316,
    0,  307,  307,  307,    0,    0,  307,    0,    0,    0,
    0,    0,    0,    0,    0,  307,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  118,  118,    0,    0,    0,    0,
  118,    0,    0,    0,    0,  316,  316,  316,  316,  316,
  316,  316,  316,  316,  316,  316,  316,  316,  309,  316,
  309,    0,    0,    0,    0,    0,    0,    0,  316,    0,
    0,    0,    0,  309,  309,  309,  309,  309,  309,  309,
  585,  309,  586,    0,  587,    0,  588,   10,   11,    0,
  309,  309,    0,  309,  309,  309,  309,  309,  309,    0,
    0,  309,    0,  309,  309,  309,    0,  309,  309,    0,
    0,  309,    0,  309,  309,  309,  309,  309,    0,    0,
    0,  309,  309,  309,  309,  309,    0,  309,    0,  309,
  309,  309,  309,  309,  309,    0,    0,  309,    0,    0,
    0,    0,  309,  309,  309,    0,  309,  309,    0,  309,
    0,    0,  309,    0,    0,    0,    0,    0,  309,  309,
  309,  309,  309,    0,    0,  309,    0,    0,    0,    0,
    0,    0,  309,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  309,    0,    0,  309,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   12,    0,   13,   14,    0,    0,    0,    0,    0,
   15,   16,   17,    0,    0,   18,    0,    0,    0,    0,
    0,    0,    0,    0,   19,    0,    0,    0,    0,   20,
   21,    0,    0,    0,    0,  589,    0,    0,    0,    0,
    0,    0,    0,  309,  309,  309,  309,  309,  309,  309,
  309,  309,  309,  309,  309,  309,  256,  309,  256,    0,
    0,    0,    0,    0,    0,    0,  309,    0,    0,    0,
    0,  256,  256,  256,  256,  256,  256,  256,    0,  256,
    0,    0,  590,    0,    0,    0,    0,    0,  256,  256,
    0,  256,  256,  256,  256,  256,  256,    0,    0,  256,
    0,  256,  256,  256,    0,  256,  256,    0,    0,  256,
    0,  256,  256,  256,  256,  256,    0,    0,    0,  256,
  256,  256,  256,    0,    0,  256,    0,  256,  256,  256,
  256,  256,  256,    0,    0,  256,    0,    0,    0,    0,
  256,  256,  256,    0,  256,  256,    0,  256,    0,    0,
  256,    0,    0,    0,    0,    0,  256,  256,  256,  256,
  256,    0,    0,  256,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  256,    0,    0,  256,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  256,  256,  256,  256,  256,  256,  256,  256,  256,
  256,  256,  256,  256,  312,  256,  312,    0,    0,    0,
    0,    0,  256,    0,  256,    0,    0,    0,    0,  312,
  312,  312,  312,  312,  312,  312,    0,  312,    0,    0,
    0,    0,    0,    0,    0,    0,  312,  312,    0,  312,
  312,  312,  312,  312,  312,    0,    0,  312,    0,  312,
  312,  312,    0,  312,  312,    0,    0,  312,    0,  312,
  312,  312,  312,  312,    0,    0,    0,  312,  312,  312,
  312,    0,    0,  312,    0,  312,  312,  312,  312,  312,
  312,    0,    0,  312,    0,    0,    0,    0,  312,  312,
  312,    0,  312,  312,    0,  312,    0,    0,  312,    0,
    0,    0,    0,    0,  312,  312,  312,  312,  312,    0,
    0,  312,    0,    0,    0,    0,    0,    0,  312,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  312,    0,    0,  312,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  312,
  312,  312,  312,  312,  312,  312,  312,  312,  312,  312,
  312,  312,  311,  312,  311,    0,    0,    0,    0,    0,
    0,    0,  312,    0,    0,    0,    0,  311,  311,  311,
  311,  311,  311,  311,    0,  311,    0,    0,    0,    0,
    0,    0,    0,    0,  311,  311,    0,  311,  311,  311,
  311,  311,  311,    0,    0,  311,    0,  311,  311,  311,
    0,  311,  311,    0,    0,  311,    0,  311,  311,  311,
  311,  311,    0,    0,    0,  311,  311,  311,  311,    0,
    0,  311,    0,  311,  311,  311,  311,  311,  311,    0,
    0,  311,    0,    0,    0,    0,  311,  311,  311,    0,
  311,  311,    0,  311,    0,    0,  311,    0,    0,    0,
    0,    0,  311,  311,  311,  311,  311,    0,    0,  311,
    0,    0,    0,    0,    0,    0,  311,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  311,    0,
    0,  311,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  311,  311,  311,
  311,  311,  311,  311,  311,  311,  311,  311,  311,  311,
  140,  311,  140,    0,    0,    0,    0,    0,    0,    0,
  311,    0,    0,    0,    0,  140,  140,  140,  140,  140,
  140,  140,    0,  140,    0,    0,    0,    0,    0,    0,
    0,    0,  140,  140,    0,  140,  140,  140,  140,  140,
  140,    0,    0,  140,    0,  140,  140,  140,    0,  140,
  140,    0,    0,  140,    0,  140,  140,  140,  140,  140,
    0,    0,    0,  140,  140,  140,  140,    0,    0,  140,
    0,  140,  140,  140,  140,  140,  140,    0,    0,  140,
    0,    0,    0,    0,  140,  140,  140,    0,  140,  140,
    0,  140,    0,    0,  140,    0,    0,    0,    0,    0,
  140,  140,  140,  140,  140,    0,    0,  140,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  140,    0,    0,  140,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  140,  140,  140,  140,  140,
  140,  140,  140,  140,  140,  140,  140,  140,  316,  140,
  316,    0,    0,    0,    0,    0,    0,    0,  140,    0,
    0,    0,    0,  316,  316,  316,  316,  316,  316,  316,
    0,  316,    0,    0,    0,    0,    0,    0,    0,    0,
  316,  316,    0,  316,  316,  316,  316,  316,  316,    0,
    0,  316,    0,  316,  316,  316,    0,  316,  316,    0,
    0,  316,    0,  316,  316,  316,  316,  316,    0,    0,
    0,  316,  316,  316,  316,    0,    0,  316,    0,  316,
  316,  316,  316,  316,  316,    0,    0,  316,    0,    0,
    0,    0,  316,  316,  316,    0,  316,  316,    0,  316,
    0,    0,  316,    0,    0,    0,    0,    0,  316,  316,
  316,  316,  316,    0,    0,  316,    0,    0,    0,    0,
    0,    0,  316,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  316,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  316,  316,  316,  316,  316,  316,  316,
  316,  316,  316,  316,  316,  316,  141,  316,  141,    0,
    0,    0,    0,    0,    0,    0,  316,    0,    0,    0,
    0,  141,  141,  141,  141,  141,  141,  141,    0,  141,
    0,    0,    0,    0,    0,    0,    0,    0,  141,  141,
    0,  141,  141,  141,  141,  141,  141,    0,    0,  141,
    0,  141,  141,  141,    0,  141,  141,    0,    0,  141,
    0,  141,  141,  141,  141,  141,    0,    0,    0,  141,
  141,  141,  141,    0,    0,  141,    0,  141,  141,  141,
  141,  141,  141,    0,    0,  141,    0,    0,    0,    0,
  141,  141,  141,    0,  141,  141,    0,  141,    0,    0,
  141,    0,    0,    0,    0,    0,  141,  141,  141,  141,
  141,    0,    0,  141,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  141,    0,    0,  141,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  141,  141,  141,  141,  141,  141,  141,  141,  141,
  141,  141,  141,  141,  290,  141,  290,    0,    0,    0,
    0,    0,    0,    0,  141,    0,    0,    0,    0,  290,
  290,  290,  290,  290,  290,  290,    0,  290,    0,    0,
    0,    0,    0,    0,    0,    0,  290,  290,    0,  290,
  290,  290,  290,  290,  290,    0,    0,  290,    0,  290,
  290,  290,    0,  290,  290,    0,    0,  290,    0,  290,
  290,  290,  290,  290,    0,    0,    0,  290,  290,  290,
  290,    0,    0,  290,    0,  290,  290,  290,  290,  290,
  290,    0,    0,  290,    0,    0,    0,    0,  290,  290,
  290,    0,  290,  290,    0,  290,    0,    0,  290,    0,
    0,    0,    0,    0,  290,  290,  290,  290,  290,    0,
    0,  290,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  290,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  290,
  290,  290,  290,  290,  290,  290,  290,  290,  290,  290,
  290,  290,  320,  290,  320,    0,    0,    0,    0,    0,
    0,    0,  290,    0,    0,    0,    0,  320,  320,  320,
  320,  320,  320,    0,    0,  320,    0,    0,    0,    0,
    0,    0,    0,    0,  320,  320,    0,  320,  320,  320,
  320,  320,  320,    0,    0,  320,    0,  320,  320,  320,
    0,  320,  320,    0,    0,  320,    0,  320,  320,  320,
  320,  320,    0,    0,    0,  320,  320,  320,  320,    0,
    0,  320,    0,  320,  320,  320,  320,  320,  320,    0,
    0,  320,    0,    0,    0,    0,  320,  320,  320,    0,
  320,  320,    0,  320,    0,    0,  320,    0,    0,    0,
    0,    0,  320,  320,  320,  320,  320,    0,    0,  320,
    0,    0,    0,    0,    0,    0,  320,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  320,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  320,  320,  320,
  320,  320,  320,  320,  320,  320,  320,  320,  320,  320,
  144,  320,  144,    0,    0,    0,    0,    0,    0,    0,
  320,    0,    0,    0,    0,  144,  144,  144,  144,  144,
  144,  144,    0,  144,    0,    0,    0,    0,    0,    0,
    0,    0,  144,  144,    0,  144,  144,  144,  144,  144,
  144,    0,    0,  144,    0,  144,  144,  144,    0,  144,
  144,    0,    0,  144,    0,  144,  144,  144,  144,  144,
    0,    0,    0,  144,  144,  144,  144,    0,    0,  144,
    0,  144,  144,  144,  144,  144,  144,    0,    0,  144,
    0,    0,    0,    0,  144,  144,  144,    0,  144,  144,
    0,  144,    0,    0,  144,    0,    0,    0,    0,    0,
  144,  144,  144,  144,  144,    0,    0,  144,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  144,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  144,  144,  144,  144,  144,
  144,  144,  144,  144,  144,  144,  144,  144,  311,  144,
  311,    0,    0,    0,    0,    0,    0,    0,  144,    0,
    0,    0,    0,  311,  311,  311,  311,  311,  311,  311,
    0,  311,    0,    0,    0,    0,    0,    0,    0,    0,
  311,  311,    0,  311,  311,  311,  311,  311,  311,    0,
    0,  311,    0,  311,  311,  311,    0,  311,  311,    0,
    0,  311,    0,  311,  311,  311,  311,  311,    0,    0,
    0,  311,  311,  311,  311,    0,    0,  311,    0,  311,
  311,  311,  311,  311,  311,    0,    0,  311,    0,    0,
    0,    0,  311,  311,  311,    0,  311,  311,    0,  311,
    0,    0,  311,    0,    0,    0,    0,    0,  311,  311,
  311,  311,  311,    0,    0,  311,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  311,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  311,  311,  311,  311,  311,  311,  311,
  311,  311,  311,  311,  311,  311,  296,  311,  296,    0,
    0,    0,    0,    0,    0,    0,  311,    0,    0,    0,
    0,  296,  296,  296,  296,  296,  296,  296,    0,  296,
    0,    0,    0,    0,    0,    0,    0,    0,  296,  296,
    0,  296,  296,  296,  296,  296,  296,    0,    0,  296,
    0,  296,  296,  296,    0,  296,  296,    0,    0,  296,
    0,  296,  296,  296,  296,  296,    0,    0,    0,  296,
  296,  296,  296,    0,    0,  296,    0,  296,  296,  296,
  296,  296,  296,    0,    0,  296,    0,    0,    0,    0,
  296,  296,  296,    0,  296,  296,    0,  296,    0,    0,
  296,    0,    0,    0,    0,    0,  296,  296,  296,  296,
  296,    0,    0,  296,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  296,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  296,  296,  296,  296,  296,  296,  296,  296,  296,
  296,  296,  296,  296,  300,  296,  300,    0,    0,    0,
    0,    0,    0,    0,  296,    0,    0,    0,    0,  300,
  300,  300,  300,  300,  300,  300,    0,  300,    0,    0,
    0,    0,    0,    0,    0,    0,  300,  300,    0,  300,
  300,  300,  300,  300,  300,    0,    0,  300,    0,  300,
  300,  300,    0,  300,  300,    0,    0,  300,    0,  300,
  300,  300,  300,  300,    0,    0,    0,  300,  300,  300,
  300,    0,    0,  300,    0,  300,  300,  300,  300,  300,
  300,    0,    0,  300,    0,    0,    0,    0,  300,  300,
  300,    0,  300,  300,    0,  300,    0,    0,  300,    0,
    0,    0,    0,    0,  300,  300,  300,  300,  300,    0,
    0,  300,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  300,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  300,
  300,  300,  300,  300,  300,  300,  300,  300,  300,  300,
  300,  300,  292,  300,  292,    0,    0,    0,    0,    0,
    0,    0,  300,    0,    0,    0,    0,  292,  292,  292,
  292,  292,  292,  292,    0,  292,    0,    0,    0,    0,
    0,    0,    0,    0,  292,  292,    0,  292,  292,  292,
  292,  292,  292,    0,    0,  292,    0,  292,  292,  292,
    0,  292,  292,    0,    0,  292,    0,  292,  292,  292,
  292,  292,    0,    0,    0,  292,  292,  292,  292,    0,
    0,  292,    0,  292,  292,  292,  292,  292,  292,    0,
    0,  292,    0,    0,    0,    0,  292,  292,  292,    0,
  292,  292,    0,  292,    0,    0,  292,    0,    0,    0,
    0,    0,  292,  292,  292,  292,  292,    0,    0,  292,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  292,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  292,  292,  292,
  292,  292,  292,  292,  292,  292,  292,  292,  292,  292,
  570,  292,  570,    0,    0,    0,    0,    0,    0,    0,
  292,    0,    0,    0,    0,  570,  570,  570,  570,  570,
  570,  570,    0,  570,    0,    0,    0,    0,    0,    0,
    0,    0,  570,  570,    0,  570,  570,  570,  570,  570,
  570,    0,    0,  570,    0,  570,  570,  570,    0,  570,
  570,    0,    0,  570,    0,  570,  570,  570,  570,  570,
    0,    0,    0,  570,  570,  570,  570,    0,    0,  570,
    0,  570,    0,  570,  570,  570,  570,    0,    0,  570,
    0,    0,    0,    0,  570,  570,  570,    0,  570,  570,
    0,  570,    0,    0,  570,    0,    0,    0,    0,    0,
  570,  570,  570,  570,  570,    0,    0,  570,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  570,
    0,  570,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  570,  570,  570,  570,  570,
  570,  570,  570,  570,  570,  570,  570,  570,  560,  570,
  560,    0,    0,    0,    0,    0,    0,    0,  570,    0,
    0,    0,    0,  560,  560,  560,  560,  560,  560,  560,
    0,  560,    0,    0,    0,    0,    0,    0,    0,    0,
  560,  560,    0,  560,  560,  560,  560,  560,  560,    0,
    0,  560,    0,  560,  560,  560,    0,  560,  560,    0,
    0,  560,    0,  560,  560,  560,  560,  560,    0,    0,
    0,  560,  560,  560,  560,    0,    0,  560,    0,  560,
  560,  560,  560,  560,  560,    0,    0,  560,    0,    0,
    0,    0,  560,  560,  560,    0,  560,  560,    0,  560,
    0,    0,  560,    0,    0,    0,    0,    0,  560,  560,
  560,  560,  560,    0,    0,  560,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  560,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  560,  560,  560,  560,  560,  560,  560,
  560,  560,  560,  560,  560,  560,  291,  560,  291,    0,
    0,    0,    0,    0,    0,    0,  560,    0,    0,    0,
    0,  291,  291,  291,  291,  291,  291,  291,    0,  291,
    0,    0,    0,    0,    0,    0,    0,    0,  291,  291,
    0,  291,  291,  291,  291,  291,  291,    0,    0,  291,
    0,  291,  291,  291,    0,  291,  291,    0,    0,  291,
    0,  291,  291,  291,  291,  291,    0,    0,    0,  291,
  291,  291,  291,    0,    0,  291,    0,  291,  291,  291,
  291,  291,  291,    0,    0,  291,    0,    0,    0,    0,
  291,  291,  291,    0,  291,  291,    0,  291,    0,    0,
  291,    0,    0,    0,    0,    0,  291,  291,  291,  291,
  291,    0,    0,  291,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  291,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  291,  291,  291,  291,  291,  291,  291,  291,  291,
  291,  291,  291,  291,  339,  291,  339,    0,    0,    0,
    0,    0,    0,    0,  291,    0,    0,    0,    0,  339,
  339,  339,  339,  339,  339,  339,    0,  339,    0,    0,
    0,    0,    0,    0,    0,    0,  339,  339,    0,  339,
  339,  339,  339,  339,  339,    0,    0,  339,    0,  339,
  339,  339,    0,  339,  339,    0,    0,  339,    0,  339,
  339,  339,  339,  339,    0,    0,    0,  339,  339,  339,
  339,    0,    0,  339,    0,  339,  339,  339,  339,  339,
  339,    0,    0,  339,    0,    0,    0,    0,  339,  339,
  339,    0,  339,  339,    0,  339,    0,    0,  339,    0,
    0,    0,    0,    0,  339,  339,  339,  339,  339,    0,
    0,  339,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  339,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  339,
  339,  339,  339,  339,  339,  339,  339,  339,  339,  339,
  339,  339,  303,  339,  303,    0,    0,    0,    0,    0,
    0,    0,  339,    0,    0,    0,    0,  303,  303,  303,
  303,  303,  303,  303,    0,  303,    0,    0,    0,    0,
    0,    0,    0,    0,  303,  303,    0,  303,  303,  303,
  303,  303,  303,    0,    0,  303,    0,  303,  303,  303,
    0,  303,  303,    0,    0,  303,    0,  303,  303,  303,
  303,  303,    0,    0,    0,  303,  303,  303,  303,    0,
    0,  303,    0,  303,  303,  303,  303,  303,  303,    0,
    0,  303,    0,    0,    0,    0,  303,  303,  303,    0,
  303,  303,    0,  303,    0,    0,  303,    0,    0,    0,
    0,    0,  303,  303,  303,  303,  303,    0,    0,  303,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  303,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  303,  303,  303,
  303,  303,  303,  303,  303,  303,  303,  303,  303,  303,
  297,  303,  297,    0,    0,    0,    0,    0,    0,    0,
  303,    0,    0,    0,    0,  297,  297,  297,  297,  297,
  297,  297,    0,  297,    0,    0,    0,    0,    0,    0,
    0,    0,  297,  297,    0,  297,  297,  297,  297,  297,
  297,    0,    0,  297,    0,  297,  297,  297,    0,  297,
  297,    0,    0,  297,    0,  297,  297,  297,  297,  297,
    0,    0,    0,  297,  297,  297,  297,    0,    0,  297,
    0,  297,  297,  297,  297,  297,  297,    0,    0,  297,
    0,    0,    0,    0,  297,  297,  297,    0,  297,  297,
    0,  297,    0,    0,  297,    0,    0,    0,    0,    0,
  297,  297,  297,  297,  297,    0,    0,  297,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  297,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  297,  297,  297,  297,  297,
  297,  297,  297,  297,  297,  297,  297,  297,  293,  297,
  293,    0,    0,    0,    0,    0,    0,    0,  297,    0,
    0,    0,    0,  293,  293,  293,  293,  293,  293,  293,
    0,  293,    0,    0,    0,    0,    0,    0,    0,    0,
  293,  293,    0,  293,  293,  293,  293,  293,  293,    0,
    0,  293,    0,  293,  293,  293,    0,  293,  293,    0,
    0,  293,    0,  293,  293,  293,  293,  293,    0,    0,
    0,  293,  293,  293,  293,    0,    0,  293,    0,  293,
  293,  293,  293,  293,  293,    0,    0,  293,    0,    0,
    0,    0,  293,  293,  293,    0,  293,  293,    0,  293,
    0,    0,  293,    0,    0,    0,    0,    0,  293,  293,
  293,  293,  293,    0,    0,  293,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  293,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  293,  293,  293,  293,  293,  293,  293,
  293,  293,  293,  293,  293,  293,   67,  293,   67,    0,
    0,    0,    0,    0,    0,    0,  293,    0,    0,    0,
    0,   67,   67,   67,   67,   67,   67,    0,    0,   67,
    0,    0,    0,    0,    0,    0,    0,    0,   67,   67,
    0,   67,   67,   67,   67,   67,   67,    0,    0,   67,
    0,   67,   67,   67,    0,   67,   67,    0,    0,   67,
    0,   67,   67,   67,   67,   67,    0,    0,    0,   67,
   67,   67,   67,    0,    0,   67,    0,   67,   67,   67,
   67,   67,   67,    0,    0,   67,    0,    0,    0,    0,
   67,   67,   67,    0,   67,   67,    0,   67,    0,    0,
   67,    0,    0,    0,    0,    0,   67,   67,   67,   67,
   67,    0,    0,   67,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   67,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   67,   67,   67,   67,   67,   67,   67,   67,   67,
   67,   67,   67,   67,  601,   67,  601,    0,    0,    0,
    0,    0,    0,    0,   67,    0,    0,    0,    0,  601,
  601,  601,  601,  601,  601,    0,    0,  601,    0,    0,
    0,    0,    0,    0,    0,    0,  601,  601,    0,  601,
  601,  601,  601,  601,  601,    0,    0,  601,    0,  601,
  601,  601,    0,  601,  601,    0,    0,  601,    0,  601,
  601,  601,  601,  601,    0,    0,    0,  601,  601,  601,
  601,    0,    0,  601,    0,  601,  601,  601,  601,  601,
  601,    0,    0,  601,    0,    0,    0,    0,  601,  601,
  601,    0,  601,  601,    0,  601,    0,    0,  601,    0,
    0,    0,    0,    0,  601,  601,  601,  601,  601,    0,
    0,  601,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  601,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  601,
  601,  601,  601,  601,  601,  601,  601,  601,  601,  601,
  601,  601,  147,  601,  147,    0,    0,    0,    0,    0,
    0,    0,  601,    0,    0,    0,    0,  147,  147,  147,
  147,  147,  147,    0,    0,  147,    0,    0,    0,    0,
    0,    0,    0,    0,  147,  147,    0,  147,  147,  147,
  147,  147,  147,    0,    0,  147,    0,  147,  147,  147,
    0,  147,  147,    0,    0,  147,    0,  147,  147,  147,
  147,  147,    0,    0,    0,  147,  147,  147,  147,    0,
    0,  147,    0,  147,  147,  147,  147,  147,  147,    0,
    0,  147,    0,    0,    0,    0,  147,  147,  147,    0,
  147,  147,    0,  147,    0,    0,  147,    0,    0,    0,
    0,    0,  147,  147,  147,  147,  147,    0,    0,  147,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  147,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  147,  147,  147,
  147,  147,  147,  147,  147,  147,  147,  147,  147,  147,
  325,  147,  325,    0,    0,    0,    0,    0,    0,    0,
  147,    0,    0,    0,    0,  325,  325,  325,  325,  325,
  325,    0,    0,  325,    0,    0,    0,    0,    0,    0,
    0,    0,  325,  325,    0,  325,  325,  325,  325,  325,
  325,    0,    0,  325,    0,  325,  325,  325,    0,  325,
  325,    0,    0,  325,    0,  325,  325,  325,  325,  325,
    0,    0,    0,  325,  325,  325,  325,    0,    0,  325,
    0,  325,  325,  325,  325,  325,  325,    0,    0,  325,
    0,    0,    0,    0,  325,  325,  325,    0,  325,  325,
    0,  325,    0,    0,  325,    0,    0,    0,    0,    0,
  325,  325,  325,  325,  325,    0,    0,  325,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  325,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  325,  325,  325,  325,  325,
  325,  325,  325,  325,  325,  325,  325,  325,  561,  325,
  561,    0,    0,    0,    0,    0,    0,    0,  325,    0,
    0,    0,    0,  561,  561,  561,  561,  561,  561,    0,
    0,  561,    0,    0,    0,    0,    0,    0,    0,    0,
  561,  561,    0,  561,  561,  561,  561,  561,  561,    0,
    0,  561,    0,  561,  561,  561,    0,  561,  561,    0,
    0,  561,    0,  561,  561,  561,  561,  561,    0,    0,
    0,  561,  561,  561,  561,    0,    0,  561,    0,  561,
  561,  561,  561,  561,  561,    0,    0,  561,    0,    0,
    0,    0,  561,  561,  561,    0,  561,  561,    0,  561,
    0,    0,  561,    0,    0,    0,    0,    0,  561,  561,
  561,  561,  561,    0,    0,  561,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  561,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  561,  561,  561,  561,  561,  561,  561,
  561,  561,  561,  561,  561,  561,  282,  561,  282,    0,
    0,    0,    0,    0,    0,    0,  561,    0,    0,    0,
    0,  282,  282,  282,  282,  282,  282,    0,    0,  282,
    0,    0,    0,    0,    0,    0,    0,    0,  282,  282,
    0,  282,  282,  282,  282,  282,  282,    0,    0,  282,
    0,  282,  282,  282,    0,  282,  282,    0,    0,  282,
    0,  282,  282,  282,  282,  282,    0,    0,    0,  282,
  282,  282,  282,    0,    0,  282,    0,  282,  282,  282,
  282,  282,  282,    0,    0,  282,    0,    0,    0,    0,
  282,  282,  282,    0,  282,  282,    0,  282,    0,    0,
  282,    0,    0,    0,    0,    0,  282,  282,  282,  282,
  282,    0,    0,  282,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  282,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  282,  282,  282,  282,  282,  282,  282,  282,  282,
  282,  282,  282,  282,  298,  282,  298,    0,    0,    0,
    0,    0,    0,    0,  282,    0,    0,    0,    0,  298,
  298,  298,  298,  298,  298,    0,    0,  298,    0,    0,
    0,    0,    0,    0,    0,    0,  298,  298,    0,  298,
  298,  298,  298,  298,  298,    0,    0,  298,    0,  298,
  298,  298,    0,  298,  298,    0,    0,  298,    0,  298,
  298,  298,  298,  298,    0,    0,    0,  298,  298,  298,
  298,    0,    0,  298,    0,  298,  298,  298,  298,  298,
  298,    0,    0,  298,    0,    0,    0,    0,  298,  298,
  298,    0,  298,  298,    0,  298,    0,    0,  298,    0,
    0,    0,    0,    0,  298,  298,  298,  298,  298,    0,
    0,  298,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  298,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  298,
  298,  298,  298,  298,  298,  298,  298,  298,  298,  298,
  298,  298,  301,  298,  301,    0,    0,    0,    0,    0,
    0,    0,  298,    0,    0,    0,    0,  301,  301,  301,
  301,  301,  301,    0,    0,  301,    0,    0,    0,    0,
    0,    0,    0,    0,  301,  301,    0,  301,  301,  301,
  301,  301,  301,    0,    0,  301,    0,  301,  301,  301,
    0,  301,  301,    0,    0,  301,    0,  301,  301,  301,
  301,  301,    0,    0,    0,  301,  301,  301,  301,    0,
    0,  301,    0,  301,  301,  301,  301,  301,  301,    0,
    0,  301,    0,    0,    0,    0,  301,  301,  301,    0,
  301,  301,    0,  301,    0,    0,  301,    0,    0,    0,
    0,    0,  301,  301,  301,  301,  301,    0,    0,  301,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  301,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  301,  301,  301,
  301,  301,  301,  301,  301,  301,  301,  301,  301,  301,
  588,  301,  588,    0,    0,    0,    0,    0,    0,    0,
  301,    0,    0,    0,    0,  588,  588,  588,  588,  588,
  588,    0,    0,  588,    0,    0,    0,    0,    0,    0,
    0,    0,  588,  588,    0,  588,  588,  588,  588,  588,
  588,    0,    0,  588,    0,  588,  588,  588,    0,  588,
  588,    0,    0,  588,    0,  588,  588,  588,  588,  588,
    0,    0,    0,  588,  588,  588,  588,    0,    0,  588,
    0,  588,  588,  588,  588,  588,  588,    0,    0,  588,
    0,    0,    0,    0,  588,  588,  588,    0,  588,  588,
    0,  588,    0,    0,  588,    0,    0,    0,    0,    0,
  588,  588,  588,  588,  588,    0,    0,  588,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  588,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  588,  588,  588,  588,  588,
  588,  588,  588,  588,  588,  588,  588,  588,   93,  588,
   93,    0,    0,    0,    0,    0,    0,    0,  588,    0,
    0,    0,    0,   93,   93,   93,   93,   93,   93,    0,
    0,   93,    0,    0,    0,    0,    0,    0,    0,    0,
   93,   93,    0,   93,   93,   93,   93,   93,   93,    0,
    0,   93,    0,   93,   93,   93,    0,   93,   93,    0,
    0,   93,    0,   93,   93,   93,   93,   93,    0,    0,
    0,   93,   93,   93,   93,    0,    0,   93,    0,   93,
   93,   93,   93,   93,   93,    0,    0,   93,    0,    0,
    0,    0,   93,   93,   93,    0,   93,   93,    0,   93,
    0,    0,   93,    0,    0,    0,    0,    0,   93,   93,
   93,   93,   93,    0,    0,   93,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   93,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,  589,   93,  589,    0,
    0,    0,    0,    0,    0,    0,   93,    0,    0,    0,
    0,  589,  589,  589,  589,  589,  589,    0,    0,  589,
    0,    0,    0,    0,    0,    0,    0,    0,  589,  589,
    0,  589,  589,  589,  589,  589,  589,    0,    0,  589,
    0,  589,  589,  589,    0,  589,  589,    0,    0,  589,
    0,  589,  589,  589,  589,  589,    0,    0,    0,  589,
  589,  589,  589,    0,    0,  589,    0,  589,  589,  589,
  589,  589,  589,    0,    0,  589,    0,    0,    0,    0,
  589,  589,  589,    0,  589,  589,    0,  589,    0,    0,
  589,    0,    0,    0,    0,    0,  589,  589,  589,  589,
  589,    0,    0,  589,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  589,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  589,  589,  589,  589,  589,  589,  589,  589,  589,
  589,  589,  589,  589,  590,  589,  590,    0,    0,    0,
    0,    0,    0,    0,  589,    0,    0,    0,    0,  590,
  590,  590,  590,  590,  590,    0,    0,  590,    0,    0,
    0,    0,    0,    0,    0,    0,  590,  590,    0,  590,
  590,  590,  590,  590,  590,    0,    0,  590,    0,  590,
  590,  590,    0,  590,  590,    0,    0,  590,    0,  590,
  590,  590,  590,  590,    0,    0,    0,  590,  590,  590,
  590,    0,    0,  590,    0,  590,  590,  590,  590,  590,
  590,    0,    0,  590,    0,    0,    0,    0,  590,  590,
  590,    0,  590,  590,    0,  590,    0,    0,  590,    0,
    0,    0,    0,    0,  590,  590,  590,  590,  590,    0,
    0,  590,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  590,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  590,
  590,  590,  590,  590,  590,  590,  590,  590,  590,  590,
  590,  590,  294,  590,  294,    0,    0,    0,    0,    0,
    0,    0,  590,    0,    0,    0,    0,  294,  294,  294,
  294,  294,  294,    0,    0,  294,    0,    0,    0,    0,
    0,    0,    0,    0,  294,  294,    0,  294,  294,  294,
  294,  294,  294,    0,    0,  294,    0,  294,  294,  294,
    0,  294,  294,    0,    0,  294,    0,  294,  294,  294,
  294,  294,    0,    0,    0,  294,  294,  294,  294,    0,
    0,  294,    0,  294,  294,  294,  294,  294,  294,    0,
    0,  294,    0,    0,    0,    0,  294,  294,  294,    0,
  294,  294,    0,  294,    0,    0,  294,    0,    0,    0,
    0,    0,  294,  294,  294,  294,  294,    0,    0,  294,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  294,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  294,  294,  294,
  294,  294,  294,  294,  294,  294,  294,  294,  294,  294,
  304,  294,  304,    0,    0,    0,    0,    0,    0,    0,
  294,    0,    0,    0,    0,  304,  304,  304,  304,  304,
  304,    0,    0,  304,    0,    0,    0,    0,    0,    0,
    0,    0,  304,  304,    0,  304,  304,  304,  304,  304,
  304,    0,    0,  304,    0,  304,  304,  304,    0,  304,
  304,    0,    0,  304,    0,  304,  304,  304,  304,  304,
    0,    0,    0,  304,  304,  304,  304,    0,    0,  304,
    0,  304,  304,  304,  304,  304,  304,    0,    0,  304,
    0,    0,    0,    0,  304,  304,  304,    0,  304,  304,
    0,  304,    0,    0,  304,    0,    0,    0,    0,    0,
  304,  304,  304,  304,  304,    0,    0,  304,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  304,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  304,  304,  304,  304,  304,
  304,  304,  304,  304,  304,  304,  304,  304,   94,  304,
   94,    0,    0,    0,    0,    0,    0,    0,  304,    0,
    0,    0,    0,   94,   94,   94,   94,   94,   94,    0,
    0,   94,    0,    0,    0,    0,    0,    0,    0,    0,
   94,   94,    0,   94,   94,   94,   94,   94,   94,    0,
    0,   94,    0,   94,   94,   94,    0,   94,   94,    0,
    0,   94,    0,   94,   94,   94,   94,   94,    0,    0,
    0,   94,   94,   94,   94,    0,    0,   94,    0,   94,
   94,   94,   94,   94,   94,    0,    0,   94,    0,    0,
    0,    0,   94,   94,   94,    0,   94,   94,    0,   94,
    0,    0,   94,    0,    0,    0,    0,    0,   94,   94,
   94,   94,   94,    0,    0,   94,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   94,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   94,   94,   94,   94,   94,   94,   94,
   94,   94,   94,   94,   94,   94,  322,   94,  322,    0,
    0,    0,    0,    0,    0,    0,   94,    0,    0,    0,
    0,  322,  322,  322,  322,  322,  322,    0,    0,  322,
    0,    0,    0,    0,    0,    0,    0,    0,  322,  322,
    0,  322,  322,  322,  322,  322,  322,    0,    0,  322,
    0,  322,  322,  322,    0,  322,  322,    0,    0,  322,
    0,  322,  322,  322,  322,  322,    0,    0,    0,  322,
  322,  322,  322,    0,    0,  322,    0,  322,  322,  322,
  322,  322,  322,    0,    0,  322,    0,    0,    0,    0,
  322,  322,  322,    0,  322,  322,    0,  322,    0,    0,
  322,    0,    0,    0,    0,    0,  322,  322,  322,  322,
  322,    0,    0,  322,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  322,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  322,  322,  322,  322,  322,  322,  322,  322,  322,
  322,  322,  322,  322,  602,  322,  602,    0,    0,    0,
    0,    0,    0,    0,  322,    0,    0,    0,    0,  602,
  602,  602,  602,  602,  602,    0,    0,  602,    0,    0,
    0,    0,    0,    0,    0,    0,  602,  602,    0,  602,
  602,  602,  602,  602,  602,    0,    0,  602,    0,  602,
  602,  602,    0,  602,  602,    0,    0,  602,    0,  602,
  602,  602,  602,  602,    0,    0,    0,  602,  602,  602,
  602,    0,    0,  602,    0,  602,  602,  602,  602,  602,
  602,    0,    0,  602,    0,    0,    0,    0,  602,  602,
  602,    0,  602,  602,    0,  602,    0,    0,  602,    0,
    0,    0,    0,    0,  602,  602,  602,  602,  602,    0,
    0,  602,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  602,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  602,
  602,  602,  602,  602,  602,  602,  602,  602,  602,  602,
  602,  602,  352,  602,  352,    0,    0,    0,    0,    0,
    0,    0,  602,    0,    0,    0,    0,  352,  352,  352,
  352,  352,  352,  352,    0,  352,    0,    0,    0,    0,
    0,    0,    0,    0,  352,  352,    0,  352,  352,  352,
  352,  352,  352,    0,    0,  352,    0,  352,  352,  352,
    0,  352,  352,    0,    0,  352,    0,  352,  352,  352,
  352,  352,    0,    0,    0,  352,  352,  352,  352,    0,
    0,  352,    0,  352,    0,  352,  352,  352,  352,    0,
    0,  352,    0,    0,    0,    0,  352,  352,  352,    0,
  352,  352,    0,  352,    0,    0,  352,    0,    0,    0,
    0,    0,  352,  352,  352,  352,  352,    0,    0,  352,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  352,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  352,  352,  352,
  352,  352,  352,  352,  352,  352,  352,  352,  352,  352,
  342,  352,  342,    0,    0,    0,    0,    0,    0,    0,
  352,    0,    0,    0,    0,  342,  342,  342,  342,  342,
  342,    0,    0,  342,    0,    0,    0,    0,    0,    0,
    0,    0,  342,  342,    0,  342,  342,  342,  342,  342,
  342,    0,    0,  342,    0,  342,  342,  342,    0,  342,
  342,    0,    0,  342,    0,  342,  342,  342,  342,  342,
    0,    0,    0,  342,  342,  342,  342,    0,    0,  342,
    0,  342,  342,  342,  342,  342,  342,    0,    0,  342,
    0,    0,    0,    0,  342,  342,  342,    0,  342,  342,
    0,  342,    0,    0,  342,    0,    0,    0,    0,    0,
  342,  342,  342,  342,  342,    0,    0,  342,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  342,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  342,  342,  342,  342,  342,
  342,  342,  342,  342,  342,  342,  342,  342,  574,  342,
  574,    0,    0,    0,    0,    0,    0,    0,  342,    0,
    0,    0,    0,  574,  574,  574,  574,  574,  574,  574,
    0,  574,    0,    0,    0,    0,    0,    0,    0,    0,
  574,  574,    0,  574,  574,  574,  574,  574,  574,    0,
    0,  574,    0,  574,  574,  574,    0,  574,  574,    0,
    0,  574,    0,  574,  574,  574,  574,  574,    0,    0,
    0,  574,  574,  574,  574,    0,    0,  574,    0,  574,
    0,  574,  574,  574,  574,    0,    0,  574,    0,    0,
    0,    0,  574,  574,  574,    0,  574,  574,    0,  574,
    0,    0,  574,    0,    0,    0,    0,    0,  574,  574,
  574,  574,  574,    0,    0,  574,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  574,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  574,  574,  574,  574,  574,  574,  574,
  574,  574,  574,  574,  574,  574,  572,  574,  572,    0,
    0,    0,    0,    0,    0,    0,  574,    0,    0,    0,
    0,  572,  572,  572,  572,  572,  572,  572,    0,  572,
    0,    0,    0,    0,    0,    0,    0,    0,  572,  572,
    0,  572,  572,  572,  572,  572,  572,    0,    0,  572,
    0,  572,  572,  572,    0,  572,  572,    0,    0,  572,
    0,  572,  572,  572,  572,  572,    0,    0,    0,  572,
  572,  572,  572,    0,    0,  572,    0,  572,    0,  572,
  572,  572,  572,    0,    0,  572,    0,    0,    0,    0,
  572,  572,  572,    0,  572,  572,    0,  572,    0,    0,
  572,    0,    0,    0,    0,    0,  572,  572,  572,  572,
  572,    0,    0,  572,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  572,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  572,  572,  572,  572,  572,  572,  572,  572,  572,
  572,  572,  572,  572,  306,  572,  306,    0,    0,    0,
    0,    0,    0,    0,  572,    0,    0,    0,    0,  306,
  306,  306,  306,  306,  306,    0,    0,  306,    0,    0,
    0,    0,    0,    0,    0,    0,  306,  306,    0,  306,
  306,  306,  306,  306,  306,    0,    0,  306,    0,  306,
  306,  306,    0,  306,  306,    0,    0,  306,    0,  306,
  306,  306,  306,  306,    0,    0,    0,  306,  306,  306,
  306,    0,    0,  306,    0,  306,  306,  306,  306,  306,
  306,    0,    0,  306,    0,    0,    0,    0,  306,  306,
  306,    0,  306,  306,    0,  306,    0,    0,  306,    0,
    0,    0,    0,    0,  306,  306,  306,  306,  306,    0,
    0,  306,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  306,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  306,
  306,  306,  306,  306,  306,  306,  306,  306,  306,  306,
  306,  306,  573,  306,  573,    0,    0,    0,    0,    0,
    0,    0,  306,    0,    0,    0,    0,  573,  573,  573,
  573,  573,  573,  573,    0,  573,    0,    0,    0,    0,
    0,    0,    0,    0,  573,  573,    0,  573,  573,  573,
  573,  573,  573,    0,    0,  573,    0,  573,  573,  573,
    0,  573,  573,    0,    0,  573,    0,  573,  573,  573,
  573,  573,    0,    0,    0,  573,  573,  573,  573,    0,
    0,  573,    0,  573,    0,  573,  573,  573,  573,    0,
    0,  573,    0,    0,    0,    0,  573,  573,  573,    0,
  573,  573,    0,  573,    0,    0,  573,    0,    0,    0,
    0,    0,  573,  573,  573,  573,  573,    0,    0,  573,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  573,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  573,  573,  573,
  573,  573,  573,  573,  573,  573,  573,  573,  573,  573,
  353,  573,  353,    0,    0,    0,    0,    0,    0,    0,
  573,    0,    0,    0,    0,  353,  353,  353,  353,  353,
  353,  353,    0,  353,    0,    0,    0,    0,    0,    0,
    0,    0,  353,  353,    0,  353,  353,  353,  353,  353,
  353,    0,    0,  353,    0,  353,  353,  353,    0,  353,
  353,    0,    0,  353,    0,  353,  353,  353,  353,  353,
    0,    0,    0,  353,  353,  353,  353,    0,    0,  353,
    0,  353,    0,  353,  353,  353,  353,    0,    0,  353,
    0,    0,    0,    0,  353,  353,  353,    0,  353,  353,
    0,  353,    0,    0,  353,    0,    0,    0,    0,    0,
  353,  353,  353,  353,  353,    0,    0,  353,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  353,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  353,  353,  353,  353,  353,
  353,  353,  353,  353,  353,  353,  353,  353,  354,  353,
  354,    0,    0,    0,    0,    0,    0,    0,  353,    0,
    0,    0,    0,  354,  354,  354,  354,  354,  354,  354,
    0,  354,    0,    0,    0,    0,    0,    0,    0,    0,
  354,  354,    0,  354,  354,  354,  354,  354,  354,    0,
    0,  354,    0,  354,  354,  354,    0,  354,  354,    0,
    0,  354,    0,  354,  354,  354,  354,  354,    0,    0,
    0,  354,  354,  354,  354,    0,    0,  354,    0,  354,
    0,  354,  354,  354,  354,    0,    0,  354,    0,    0,
    0,    0,  354,  354,  354,    0,  354,  354,    0,  354,
    0,    0,  354,    0,    0,    0,    0,    0,  354,  354,
  354,  354,  354,    0,    0,  354,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  354,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  354,  354,  354,  354,  354,  354,  354,
  354,  354,  354,  354,  354,  354,  355,  354,  355,    0,
    0,    0,    0,    0,    0,    0,  354,    0,    0,    0,
    0,  355,  355,  355,  355,  355,  355,  355,    0,  355,
    0,    0,    0,    0,    0,    0,    0,    0,  355,  355,
    0,  355,  355,  355,  355,  355,  355,    0,    0,  355,
    0,  355,  355,  355,    0,  355,  355,    0,    0,  355,
    0,  355,  355,  355,  355,  355,    0,    0,    0,  355,
  355,  355,  355,    0,    0,  355,    0,  355,    0,  355,
  355,  355,  355,    0,    0,  355,    0,    0,    0,    0,
  355,  355,  355,    0,  355,  355,    0,  355,    0,    0,
  355,    0,    0,    0,    0,    0,  355,  355,  355,  355,
  355,    0,    0,  355,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  355,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  355,  355,  355,  355,  355,  355,  355,  355,  355,
  355,  355,  355,  355,  356,  355,  356,    0,    0,    0,
    0,    0,    0,    0,  355,    0,    0,    0,    0,  356,
  356,  356,  356,  356,  356,  356,    0,  356,    0,    0,
    0,    0,    0,    0,    0,    0,  356,  356,    0,  356,
  356,  356,  356,  356,  356,    0,    0,  356,    0,  356,
  356,  356,    0,  356,  356,    0,    0,  356,    0,  356,
  356,  356,  356,  356,    0,    0,    0,  356,  356,  356,
  356,    0,    0,  356,    0,  356,    0,  356,  356,  356,
  356,    0,    0,  356,    0,    0,    0,    0,  356,  356,
  356,    0,  356,  356,    0,  356,    0,    0,  356,    0,
    0,    0,    0,    0,  356,  356,  356,  356,  356,    0,
    0,  356,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  356,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  356,
  356,  356,  356,  356,  356,  356,  356,  356,  356,  356,
  356,  356,  575,  356,  575,    0,    0,    0,    0,    0,
    0,    0,  356,    0,    0,    0,    0,  575,  575,  575,
  575,  575,  575,  575,    0,  575,    0,    0,    0,    0,
    0,    0,    0,    0,  575,  575,    0,  575,  575,  575,
  575,  575,  575,    0,    0,  575,    0,  575,  575,  575,
    0,  575,  575,    0,    0,  575,    0,  575,  575,  575,
  575,  575,    0,    0,    0,  575,  575,  575,  575,    0,
    0,  575,    0,  575,    0,  575,  575,  575,  575,    0,
    0,  575,    0,    0,    0,    0,  575,  575,  575,    0,
  575,  575,    0,  575,    0,    0,  575,    0,    0,    0,
    0,    0,  575,  575,  575,  575,  575,    0,    0,  575,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  575,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  575,  575,  575,
  575,  575,  575,  575,  575,  575,  575,  575,  575,  575,
  576,  575,  576,    0,    0,    0,    0,    0,    0,    0,
  575,    0,    0,    0,    0,  576,  576,  576,  576,  576,
  576,    0,    0,  576,    0,    0,    0,    0,    0,    0,
    0,    0,  576,  576,    0,  576,  576,  576,  576,  576,
  576,    0,    0,  576,    0,  576,  576,  576,    0,  576,
  576,    0,    0,  576,    0,  576,  576,  576,  576,  576,
    0,    0,    0,  576,  576,  576,  576,    0,    0,  576,
    0,  576,    0,  576,  576,  576,  576,    0,    0,  576,
    0,    0,    0,    0,  576,  576,  576,    0,  576,  576,
    0,  576,    0,    0,  576,    0,    0,    0,    0,    0,
  576,  576,  576,  576,  576,    0,    0,  576,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  576,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  576,  576,  576,  576,  576,
  576,  576,  576,  576,  576,  576,  576,  576,  564,  576,
  564,    0,    0,    0,    0,    0,    0,    0,  576,    0,
    0,    0,    0,  564,  564,  564,  564,  564,  564,    0,
    0,  564,    0,    0,    0,    0,    0,    0,    0,    0,
  564,  564,    0,  564,  564,  564,  564,  564,  564,    0,
    0,  564,    0,  564,  564,  564,    0,  564,  564,    0,
    0,  564,    0,  564,  564,  564,  564,  564,    0,    0,
    0,  564,  564,  564,  564,    0,    0,  564,    0,  564,
    0,  564,  564,  564,  564,    0,    0,  564,    0,    0,
    0,    0,  564,  564,  564,    0,  564,  564,    0,  564,
    0,    0,  564,    0,    0,    0,    0,    0,  564,  564,
  564,  564,  564,    0,    0,  564,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  564,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  564,  564,  564,  564,  564,  564,  564,
  564,  564,  564,  564,  564,  564,  568,  564,  568,    0,
    0,    0,    0,    0,    0,    0,  564,    0,    0,    0,
    0,  568,  568,  568,  568,  568,  568,    0,    0,  568,
    0,    0,    0,    0,    0,    0,    0,    0,  568,  568,
    0,  568,  568,  568,  568,  568,  568,    0,    0,  568,
    0,  568,  568,  568,    0,  568,  568,    0,    0,  568,
    0,  568,  568,  568,  568,  568,    0,    0,    0,  568,
  568,  568,  568,    0,    0,  568,    0,  568,    0,  568,
  568,  568,  568,    0,    0,  568,    0,    0,    0,    0,
  568,  568,  568,    0,  568,  568,    0,  568,    0,    0,
  568,    0,    0,    0,    0,    0,  568,  568,  568,  568,
  568,    0,    0,  568,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  568,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  568,  568,  568,  568,  568,  568,  568,  568,  568,
  568,  568,  568,  568,  342,  568,  342,    0,    0,    0,
    0,    0,    0,    0,  568,    0,    0,    0,    0,  342,
  342,  342,  342,  342,  342,    0,    0,  342,    0,    0,
    0,    0,    0,    0,    0,    0,  342,  342,    0,  342,
  342,  342,  342,  342,  342,    0,    0,  342,    0,  342,
  342,  342,    0,  342,  342,    0,    0,  342,    0,  342,
  342,  342,  342,  342,    0,    0,    0,  342,  342,  342,
  342,    0,    0,  342,    0,  342,    0,  342,  342,  342,
  342,    0,    0,  342,    0,    0,    0,    0,  342,  342,
  342,    0,  342,  342,    0,  342,    0,    0,  342,    0,
    0,    0,    0,    0,  342,  342,  342,  342,  342,    0,
    0,  342,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  342,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  342,
  342,  342,  342,  342,  342,  342,  342,  342,  342,  342,
  342,  342,  630,  342,  630,    0,    0,    0,    0,    0,
    0,    0,  342,    0,    0,    0,    0,  630,  630,  630,
  630,  630,  630,    0,    0,  630,    0,    0,    0,    0,
    0,    0,    0,    0,  630,  630,    0,  630,  630,  630,
  630,  630,  630,    0,    0,  630,    0,  630,  630,  630,
    0,  630,  630,    0,    0,  630,    0,  630,  630,  630,
  630,  630,    0,    0,    0,  630,  630,  630,  630,    0,
    0,  630,    0,  630,    0,  630,  630,  630,  630,    0,
    0,  630,    0,    0,    0,    0,  630,  630,  630,    0,
  630,  630,    0,  630,    0,    0,  630,    0,    0,    0,
    0,    0,  630,  630,  630,  630,  630,    0,    0,  630,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  630,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  630,  630,  630,
  630,  630,  630,  630,  630,  630,  630,  630,  630,  630,
  631,  630,  631,    0,    0,    0,    0,    0,    0,    0,
  630,    0,    0,    0,    0,  631,  631,  631,  631,  631,
  631,    0,    0,  631,    0,    0,    0,    0,    0,    0,
    0,    0,  631,  631,    0,  631,  631,  631,  631,  631,
  631,    0,    0,  631,    0,  631,  631,  631,    0,  631,
  631,    0,    0,  631,    0,  631,  631,  631,  631,  631,
    0,    0,    0,  631,  631,  631,  631,    0,    0,  631,
    0,  631,    0,  631,  631,  631,  631,    0,    0,  631,
    0,    0,    0,    0,  631,  631,  631,    0,  631,  631,
    0,  631,    0,    0,  631,    0,    0,    0,    0,    0,
  631,  631,  631,  631,  631,    0,    0,  631,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  631,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  631,  631,  631,  631,  631,
  631,  631,  631,  631,  631,  631,  631,  631,  578,  631,
  578,    0,    0,    0,    0,    0,    0,    0,  631,    0,
    0,    0,    0,  578,  578,  578,  578,  578,  578,    0,
    0,  578,    0,    0,    0,    0,    0,    0,    0,    0,
  578,  578,    0,  578,  578,  578,  578,  578,  578,    0,
    0,  578,    0,  578,  578,  578,    0,  578,  578,    0,
    0,  578,    0,  578,  578,  578,  578,  578,    0,    0,
    0,  578,  578,  578,  578,    0,    0,  578,    0,  578,
    0,  578,  578,  578,  578,    0,    0,  578,    0,    0,
    0,    0,  578,  578,  578,    0,  578,  578,    0,  578,
    0,    0,  578,    0,    0,    0,    0,    0,  578,  578,
  578,  578,  578,    0,    0,  578,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  578,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  578,  578,  578,  578,  578,  578,  578,
  578,  578,  578,  578,  578,  578,  648,  578,  648,    0,
    0,    0,    0,    0,    0,    0,  578,    0,    0,    0,
    0,  648,  648,  648,  648,  648,  648,    0,    0,  648,
    0,    0,  944,  945,    0,    0,    0,   55,  648,  648,
    0,  648,  648,  648,  648,  648,  648,    0,    0,  648,
    0,  648,  648,  648,    0,  648,  648,    0,    0,  648,
    0,  648,  648,  648,  648,  648,    0,    0,    0,  648,
  648,  648,  648,    0,    0,  648,    0,  648,    0,  648,
  648,  648,  648,    0,    0,  648,    0,    0,    0,    0,
  648,  648,  648,    0,  648,  648,    0,  648,    0,    0,
  648,  946,  947,    0,    0,    0,  648,  648,  648,  648,
  648,    0,    0,  648,    0,    0,    0,    0,    0,  948,
  949,   25,  950,  951,    0,    0,    0,    0,    0,  952,
  953,    0,  954,  955,   26,  956,  957,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   12,    0,  958,   14,
    0,    0,    0,    0,    0,   15,   16,   17,  451,    0,
   18,    0,    0,    0,    0,    0,    0,    0,    0,   19,
    0,    0,    0,    0,  959,  960,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  648,  648,  648,  648,  648,  648,  648,  648,  648,
  648,  648,  648,  648,  647,  648,    0,    0,    0,    0,
    0,    0,    0,    0,  648,    0,    0,  647,  647,  647,
  647,  647,  647,    0,    0,  647,    0,  452,    0,    0,
    0,   23,   24,  453,  647,  647,   55,  647,  647,  647,
  647,  647,  647,    0,    0,  647,    0,    0,  647,  647,
    0,  647,  647,    0,    0,  647,    0,  647,    0,  647,
  647,  647,    0,    0,    0,  647,  647,  647,  647,    0,
    0,  647,    0,  647,    0,  647,  647,  647,  647,    0,
    0,  647,    0,    0,    0,    0,  647,  647,  647,    0,
  647,  647,    0,  647,    0,    0,  647,    0,    0,    0,
  946,  947,  647,  647,  647,  647,  647,    0,    0,  647,
    0,    0,    0,    0,    0,    0,    0,    0,  948,  949,
   25,  950,  951,    0,    0,    0,    0,    0,  952,  953,
    0,  954,  955,   26,  956,  957,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   27,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  451,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   28,   29,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  647,  647,    0,
    0,    0,    0,    0,  647,  647,  647,  647,  647,  647,
    0,  647,  342,    0,  342,    0,    0,    0,    0,    0,
  647,    0,    0,    0,    0,    0,    0,  342,  342,  342,
  342,  342,  342,    0,    0,  342,  452,    0,    0,    0,
    0,    0,  453,    0,  342,  342,    0,  342,  342,  342,
  342,  342,  342,    0,    0,    0,    0,  342,  342,    0,
    0,    0,    0,    0,    0,  342,    0,    0,  342,  342,
  342,  342,    0,    0,    0,  342,  342,  342,  342,    0,
    0,  342,    0,  342,  342,  342,    0,  342,  342,    0,
    0,  342,    0,    0,    0,    0,  342,  342,  342,    0,
  342,  342,    0,  342,    0,    0,  342,    0,    0,    0,
    0,    0,  342,    0,    0,    0,  342,    0,    0,  342,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  342,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  342,  342,  342,
  342,  342,  342,  342,  342,  342,  342,  342,  342,  342,
  627,  342,  627,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  627,  627,  627,  627,  627,
  627,    0,    0,  627,    0,    0,    0,    0,    0,    0,
    0,    0,  627,  627,    0,  627,  627,  627,  627,  627,
  627,    0,    0,    0,    0,  627,  627,    0,    0,    0,
    0,    0,    0,  627,    0,    0,  627,  627,  627,  627,
    0,    0,    0,  627,  627,  627,  627,    0,    0,  627,
    0,  627,  627,  627,    0,  627,  627,    0,    0,  627,
    0,    0,    0,    0,  627,  627,  627,    0,  627,  627,
    0,  627,    0,    0,  627,    0,    0,    0,    0,    0,
  627,    0,    0,    0,  627,    0,    0,  627,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  627,  627,  627,  627,  627,
  627,  627,  627,  627,  627,  627,  627,  627,   52,  627,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   52,   52,   52,   52,   52,   52,    0,    0,   52,
    0,    0,    0,    0,    0,    0,    0,    0,   52,   52,
    0,   52,   52,   52,   52,   52,   52,    0,    0,   52,
    0,    0,   52,   52,    0,   52,   52,    0,    0,   52,
    0,   52,    0,   52,   52,   52,    0,    0,    0,   52,
   52,   52,   52,    0,    0,   52,    0,   52,    0,   52,
   52,   52,   52,    0,    0,   52,    0,    0,    0,    0,
   52,   52,   52,    0,   52,   52,    0,   52,    0,    0,
   52,    0,    0,    0,    0,    0,   52,   52,   52,   52,
   52,    0,    0,   52,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   52,   52,   52,   52,   52,   52,   52,   52,   52,
   52,   52,   52,   52,  391,   52,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  333,  334,  335,
  336,  337,  338,    0,    0,  339,    0,    0,    0,    0,
    0,    0,    0,    0,  392,  341,    0,  342,  343,  344,
  345,  346,  347,    0,    0,  393,    0,    0,  348,  394,
    0,  395,  396,    0,    0,  397,    0,  398,    0,  350,
  351,  352,    0,    0,    0,  399,  354,  355,  356,    0,
    0,  357,    0,  358,    0,  360,  400,  401,  362,    0,
    0,  402,    0,    0,    0,    0,  364,  365,  366,    0,
  367,  368,    0,  369,    0,    0,  370,    0,    0,    0,
    0,    0,  403,  404,  405,  406,  372,    0,    0,  373,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  374,  375,   52,
    0,    0,    0,    0,  376,  377,  378,  379,  407,  381,
    0,  382,   52,   52,   52,   52,   52,   52,    0,    0,
   52,    0,    0,    0,    0,    0,    0,    0,    0,   52,
   52,    0,   52,   52,   52,   52,   52,   52,    0,    0,
    0,    0,    0,   52,    0,    0,    0,    0,    0,    0,
   52,    0,    0,    0,   52,   52,   52,    0,    0,    0,
   52,   52,   52,   52,    0,    0,   52,    0,   52,   52,
   52,    0,   52,   52,    0,    0,   52,    0,    0,    0,
    0,   52,   52,   52,    0,   52,   52,    0,   52,    0,
    0,   52,    0,    0,    0,    0,    0,   52,    0,    0,
    0,   52,    0,    0,   52,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   52,   52,   52,   52,   52,   52,   52,   52,
   52,   52,   52,   52,   52,  332,   52,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  333,  334,
  335,  336,  337,  338,    0,    0,  339,    0,    0,    0,
    0,    0,    0,    0,    0,  340,  341,    0,  342,  343,
  344,  345,  346,  347,    0,    0,    0,    0,    0,  348,
    0,    0,    0,    0,    0,    0,  349,    0,    0,    0,
  350,  351,  352,    0,    0,    0,  353,  354,  355,  356,
    0,    0,  357,    0,  358,  359,  360,    0,  361,  362,
    0,    0,  363,    0,    0,    0,    0,  364,  365,  366,
    0,  367,  368,    0,  369,    0,    0,  370,    0,    0,
    0,    0,    0,  371,    0,    0,    0,  372,    0,    0,
  373,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  374,  375,
    0,    0,    0,    0,    0,  376,  377,  378,  379,  380,
  381,    0,  382,
};
static const short yycheck[] = {                          5,
   67,    8,    2,   70,  223,  154,   73,  145,  527,  147,
   68,   69,  150,  151,  158,  353,  554,   75,    5,   74,
  313,  348,  288,   69,   81,   82,  298,  343,  300,   75,
  355,  413,  149,  772,  715,  152,  615,  533,  183,  758,
  722,  809,  409,  339,  821,  730,  374,  164,  376,  274,
  119,  310,  631,  381,  618,  619,  769,  273,  274,  270,
  920,   67,   68,   69,   70,   71,  568,   73,  166,   75,
  290,  278,  292,  293,  172,   81,   82,  819,  820,  273,
  274,  802,  410,  166,   71,  265,  592,    6,  287,  595,
  736,  597,  273,  274,  265,  212,  143,  273,  274,  265,
  107,  455,  608,  391,  173,  369,  163,  396,  153,  332,
  987,  278,  391,  310, 1193,  253,  254,  393,  379,  392,
  272,  627,  379,  382,  357,  398,  265,  357,  382,  265,
  197,  198,  393,  394,  251,  252,  393,  410,  265,  393,
  195,  196,  148,    1,  310,  265,  379,  153,  205,  298,
  156,  300,  346,  379,  391,  321,  995,  163, 1237,  265,
  393,  148,  168,  393,  170,  790,  393,  393,  999,  396,
  393,  310,  472,  798,  291,  233,   95,  294,  405,  468,
  379,  168,  321,  170,  472,  382,  393,  233,  395,  327,
  469,  197,  198,  387,  393,  389,  390,  473,  417,  205,
  119,  120,  121,  397,  398,  286, 1066,  401,  379,  390,
  469,  258,  257,  393,   72,  983,   74,  223,  285,  904,
  139,  415,  393,  321, 1101,  938,  145,  233,  395,  273,
  274,  289,  469,  452,  453,  602,  242, 1014,  321,  564,
  246,  247,  567,  289,  469,  471,  542,  614,  167,  255,
  169,  257,  468,  310,  173,  757,  472,  468,  408,  246,
  247,  589,  590,  765,  828,  911,  594, 1106,  255, 1100,
  152,  992,  469,  318,  468,  393, 1018,  783,  784,  285,
  634,  787,  382,  289,  392,  379,  452,  453,  454,  455,
  456,  149,  468,  393,  152,  391,  560,  561,  562,  393,
  158,  272,  656,    4,  310,  569,  164,  473,  393,  573,
  574,  317,  318,  452,  453,  454,  455,  456,  362,  815,
  270,  472, 1004,  273,  405,  468,  407,  408,  409,  309,
  317,  375,  391,  339,  396,  394,  378,  195,  196,  391,
  478,  479,  480,  286,  405,  389,  407,  408,  409,  468,
  468,  393,  379,  491,  212,  391, 1075,  495,  394,  509,
  742,  469,  500,  512,  364,  432,  393,  379,  318,  251,
  252,  415,  416,  469,  441,  471,  393,  471,  436,  437,
  447,  393,  391,  392,  472,  923,  471,  404,  405,  406,
  459,  541,  399,  251,  252,  391,  546,  391,  465,  379,
  469,  391, 1141,  461,  549,  272,  468,  309,  109,  328,
  329,  417,  471,  393,  473,  461, 1097,  469,  756,  801,
  489, 1000,  412,  750,  430,  392,  432,  720,  647,  745,
  436,  437,  698,  291,  936,  441,  294,  733,  763,  445,
  390,  447,  469,  430,  391,  392,  452,  453,  393,  455,
  391,  401,  272,  394,  155,  461,  456,  469,  445,  465,
  469,  606,  405,  391,  407,  408,  409,  805,  618,  619,
  392,  392,  393,  469,  531,  469,  533,  379,  393,  469,
  392,  471,  702,  473,  342,  343,  706,  391,  633, 1008,
  710,  393,  846,  391,  273,  274,  472,  555,  356,  392,
  335,  265,  469,  396,  471,  393,  473,  472,  391,  555,
  345,  369,  405,  391,  391,  391,  391,  375,  391,  525,
  391,  391,  469,  472,  382,  531,  471,  533,  469,  536,
  471,  391,  265,  469,  391,  471,  542,  473,  525,  468,
  459,  469,  393,  601,  694,  695,  393,  469,  686,  555,
  469,  700,  468,  772,  405,  601,  775,  469,  708,  393,
  832,  780,  396,  273,  274,  469,  276,  468,  278,  488,
  489,  469,  639,  411,  641,  413,  469,  727,  471,  498,
  473,  393, 1088,  471,  396,  504,  469,  393,  643,  943,
  396,  469,  469,  469,  469,  601,  469,  924,  469,  469,
  468,  739,  332,  398,  297,  273,  274,  395,  962,  469,
  389,  390,  469,  379,  968,  410,  154,  396,  397,  398,
  539,  540,  401,  273,  274,  318,  392,  393,  634,  635,
  468,  410,  273,  639,  393,  641,  393,  396,  857,  396,
  398,  647,  392,  971,  337,  651,  912,  340,  635,  379,
  656,  344,  410,  354,  355,  398,  357,  154,  417,  418,
  417,  418,  379,  393,  392,  333,  359,  816,  812,  471,
  393,  393,  365,  393,  396,  392,  393, 1031,  828,  389,
  390,  332,  391,  832,  393,  394,  396,  397,  398,  399,
  696,  401,  473,  472,  417,  418,  396,  417,  418,  379,
  410,  559,  560,  561,  562,  393,  273,  274,  396,  696,
  473,  569,  392,  393,  394,  573,  574,  272,  273,  273,
  274,  389,  390,  471,  278,  273,  274,  733,  396,  397,
  398,  473,  882,  401,  351,  352,  853,  743,  393, 1005,
  395,  358,  410,  360,  310,  283,  284,  266,  411,  268,
  413,  270,  470,  272,  273,  274,  743,  295,  815,  278,
  298,  878,  300,  470,  393,  472,  772,  396,  687,  775,
  776, 1109,  405,  773,  780,  404,  405,  406,  404,  405,
  406,  273,  274,  789,  790,  643,  278,  405,  417,  418,
  287,  321,  798,  290,  405,  292,  293,  469,  346,  718,
  469,  298,  789,  300, 1158,  396,   98,   99,  362,  815,
  468,  818, 1140,  105,  333,  468,  396,  823,  110,  111,
  468,  375,  389,  390,  404,  405,  406,  834,  473,  396,
  397,  398,  392,  393,  401,  389,  823,  473,  392,  387,
  846,  389,  390,  410,  468,  399,  470,  391, 1067,  397,
  398,  857,  471,  401,  473,  556, 1210,  471, 1007,  392,
  393,  415,  416,  564,  392,  393,  567,  415,  406,  473,
  362,  390,  257,  258,  259,  260,  261,  262,  263,  264,
  399,  392,  393,  375,  379,  393,  744,  745,  383,  384,
  385,  386,  411,  471,  413,  190,  191,  389,  393,  393,
  392,  393,  603,  470,  404,  405,  406,  399,  827,  123,
  124,  408,  286,  392,  468,  616,  436,  437,  776,  925,
  474,  979, 1141,  415,  416,  626, 1064,  648,  649, 1046,
 1244, 1245,  790,  979,  410,  472,  382,  943,  925,  405,
  798,  407,  408,  409, 1163,  472,  272,  472,  272,  468,
  472,  470,  272,  472,  392,  474,  962,  476,  477,  478,
  479,  405,  968,  664,  469,  405,  667,  407,  408,  409,
  508,  473,  473,  979,  512,  393,  468,  469,  897,  472,
  470,  286,  474,  902,  903,  469,  905,  906,  907,  908,
  909,  997,  272,  395,  913,  853,  452,  453,  454,  455,
  456, 1151,  473,  468,  378,  468,  393,  412,  469, 1147,
  997,  473,  509,  473,  469,  512,  935,  391,  392,  393,
  878,  473,  396,  287,  471, 1031, 1032,  565,  473,  396,
  473,  405,  471,  407,  408,  409,  452,  453,  454,  455,
  456,  473,  470,  398,  541, 1032,  393,  396,  394,  546,
  393,  286,  286,  321, 1204,  286,  471,  382,  396, 1065,
  918, 1067,  763,  286,  286,  273,  274,  396,  769,  286,
  278,  393,  272,  378,  286,  286, 1082, 1083, 1065,  998,
  286,  394,  620,  272,  321,  286,  391,  392,  286,  469,
  469,  396,  469, 1099,  395,  469, 1015,  471,  469,  473,
  405, 1107,  407,  408,  409,  469,  471,  310,  809, 1176,
  412,  812, 1099,  469,  272,  469,  469,  469,    3,  616,
 1107,  618,  619, 1129, 1130, 1131, 1132,  469,  469,  830,
 1136, 1138,  287,  393,  473, 1141, 1142, 1143,  391,  405,
  468,  391, 1129, 1130, 1131, 1132,  473,  332,  396, 1136,
  382,  272, 1158,  469,  362,  473, 1143, 1163,  286, 1165,
 1166,  379,  700,  396,  469,  473,  471,  375,  473,  396,
 1176,   56,   57,  392,  286,  382,  396,  473, 1165, 1166,
  469,  389,  270,   68,   69,  273,  274,  469, 1046,  393,
   75,  399,   77,  471,  469,  392,  469,  694,  695,  469,
  469,  273,  274,  700, 1210,  702, 1125,  415,  416,  706,
  473,  708,  469,  710,  273,  274, 1135,  469,  469,  278,
  758, 1227,  398,  761,  394, 1083,  332,  396,  391, 1148,
  727,  270,  310, 1152,  393, 1241, 1242,  938,  939,  392,
 1227,  469,  266,  392,  268,  469,  270,  391,  272,  273,
  274,  396,  310,  469, 1241, 1242,  469,  795,  396,  393,
  468,  470,  392,  396,  472,  396,  474, 1186,  286, 1188,
  469,  393,  769,  468,  393,  469,  396,  473,  816,  396,
  468,  473,  983,  398,  822,  986,  396,  825,  396,  396,
  469,  456,  456,  398,  832,  391,  469,  182,  183,  387,
  272,  389,  390,  362,  398,  473, 1225,  469,  396,  397,
  398,  471,  469,  401,  310,  387,  375,  389,  390,  816,
 1021,  473,  410,  473,  396,  397,  398,  415,  416,  401,
  389,  828, 1033,  469,  473,  832,  468,  382,  410,  405,
  399,  398,  471,  415,  416,  469,  469,  412,  233,  398,
  468,  273,  274,  275,  276,  468,  415,  416,  394,  396,
  471,  396,  471,  387,  393,  389,  390,  469,  469,  469,
  273,  274,  396,  397,  398,  278,  473,  401,  471,  469,
  468,  473,  470,  469,  405,  882,  410,  469,  473,  473,
  396,  415,  416,  469,  469,  469,  473,  421,  273,  274,
  469,  469,  473,  288,  289,  469,  266,  396,  268,  468,
  270,  473,  272,  273,  274,  474,  469,  394,  278,  177,
 1023, 1088,  422, 1020,  266,  453,  268,  269,  270,  271,
  272,  273,  274,  275,  276,  277,  278, 1031, 1082,  339,
  978,  938,  158,  981,  468,  469,  636,  835,  918,  616,
  292,  293, 1118,  646,  339, 1002,  341,  299, 1142,  362,
  644, 1200,  721,  773,  306,  387, 1162,  389,  390, 1007,
  345,  531,  375,  333,  396,  397,  398, 1083,  942,  401,
  365,  966,  791,  368,  326,  976,  389,  777,  410,  392,
  393,  333,  969,  415,  416,  781,  399,  985,  383, 1177,
  385,  386, 1178,  750,  991,  799,  927, 1167, 1169, 1213,
 1007,  153,  415,  416,  389,  390,  884,  700,  294, 1231,
  321,  396,  397,  398,  273,  274,  401,  981,  719, 1007,
  390,  391, 1203, 1206,  682,  410, 1152, 1075,  380,  399,
  727,  401,  546,  668, 1033,  387, 1146,  389,  390,  434,
  114,  436,  437,  395,  396,  397,  398,  399,  733,  401,
 1137, 1160, 1021,  667,  825,  468,  469, 1016,  410,  177,
 1140,  474, 1114,  415,  412,  761,  461,  419,  420,  421,
  422,  423,  424,  425,  426,  427,  428,  429,  430,  431,
  432,  433,  434,  435,  436,  437,  627,  439,   -1,   -1,
   -1,   -1,   -1,   -1,  446,  447,   -1,   -1,  468,   -1,
  470,   -1,  273,  274,  474,  276,  476,  477,  478,  479,
   -1,   -1,   -1,  465,  466,  467,  468,   -1,   -1, 1167,
  472, 1169,  474,  475,  476,  477,  478,  479,  387,  481,
  389,  390,  391,   -1,   -1,   -1,   -1,  396,  397,  398,
   -1,   -1,  401,   -1, 1151,  273,  274,  542,   -1,   -1,
   -1,  410,  547,   -1,  549,   -1,  415,  416,   -1,   -1,
  555,   -1,  266,   -1,  268,  269,  270,  271,  272,  273,
  274,  275,  276,  277,  278,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  289,  290,  291,  292,  293,
  294,  295,  296,   -1,   -1,  299,   -1, 1204,   -1,   -1,
   -1,   -1,  306,   -1,   -1,   -1,  601,   -1,   -1,  313,
   -1,  606,  316,  317,   -1,  319,   -1,  345,  389,  390,
  615,  325,  326,  327,   -1,  396,  397,  398,   -1,  333,
  401,   -1,   -1,   -1,   -1,   -1,  631,   -1,  633,  410,
   -1,   -1,   -1,  347,  348,  266,   -1,  268,   -1,  270,
   -1,  272,  273,  274,  358,   -1,   -1,  278,   -1,   -1,
   -1,  389,  390,   -1,   -1,   -1,   -1,  266,  396,  397,
  398,  270,  271,  401,  273,  274,  380,  381,   -1,  278,
   -1,   -1,  410,  387,   -1,  389,  390,   -1,   -1,   -1,
   -1,  395,  396,  397,  398,  399,   -1,  401,   -1,   -1,
   -1,  405,   -1,  698,   -1,   -1,  410,   -1,  273,  274,
   -1,  415,  333,  278,   -1,  419,  420,  421,  422,  423,
  424,  425,  426,  427,  428,  429,  430,  431,  432,  433,
  434,  435,  436,  437,  333,  439,   -1,   -1,  733,   -1,
  444,   -1,  446,  447,   -1,   -1,  266,  346,  268,   -1,
  270,   -1,  272,  273,  274,   -1,   -1,   -1,  278,   -1,
   -1,  465,  466,  467,  468,   -1,   -1,   -1,  472,  390,
  474,  475,  476,  477,  478,  479,   -1,  481,  399,   -1,
  401,  270,  777,   -1,  273,  274,  781,   -1,  387,   -1,
  389,  390,  391,   -1,  393,  394,  791,   -1,  397,  398,
  399,   -1,  401,   -1,  799,   -1,   -1,  802,   -1,   -1,
   -1,   -1,   -1,  333,   -1,  414,  415,  416,   -1,  286,
   -1,   -1,   -1,   -1,  389,  390,  425,  426,  427,  428,
   -1,  396,  397,  398,  399,   -1,  401,   -1,   -1,   -1,
   -1,   -1,  441,   -1,   -1,  410,   -1,  468,   -1,  470,
  845,   -1,   -1,  474,   -1,  476,  477,  478,  479,   -1,
   -1,  273,  274,   -1,   -1,   -1,  278,   -1,   -1,  468,
  390,  470,  471,  472,  473,  474,  475,  476,  477,  399,
  479,   -1,  481,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  387,   -1,
  389,  390,   -1,   -1,   -1,   -1,   -1,  396,  397,  398,
   -1,  378,  401,   -1,  403,   -1,   -1,  912,   -1,   -1,
   -1,  410,   -1,   -1,  391,  392,  415,  416,   -1,  396,
   -1,   -1,   -1,   -1,  346,   -1,   -1,   -1,  405,   -1,
  407,  408,  409,   -1,   -1,   -1,   -1,   -1,  468,   -1,
  470,   -1,  472,   -1,  474,   -1,  476,  477,  478,  479,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  387,   -1,  389,  390,  468,
   -1,   -1,   -1,   -1,  979,  397,  398,  399,   -1,  401,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  992,   -1,   -1,
   -1,   -1,  469,  415,  471, 1000,  473,   -1,   -1,   -1,
 1005,  265,  266,  267,  268,  269,  270,  271,  272,  273,
  274,  275,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  301,  302,  303,
  304,  305,  306,   -1,  308,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  321,  322,  323,
  324,  325,  326,  327,  328,  329,  330,  331,  332,  333,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,  347,  348,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,  358,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,   -1,  379,  380,  381,  382,  383,
  384,  385,  386,  387,   -1,  389,  390,  391,  392,  393,
  394,  395,  396,  397,  398,  399,   -1,  401,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,  410,   -1,   -1,   -1,
   -1,  415,   -1,   -1,   -1,  419,  420,  421,  422,  423,
  424,  425,  426,  427,  428,  429,  430,  431,  432,  433,
  434,  435,  436,  437,   -1,  439,   -1,   -1,   -1,   -1,
  444,   -1,  446,  447,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,   -1,
  464,  465,  466,  467,  468,  469,   -1,  471,  472,  473,
  474,  475,  476,  477,  478,  479,   -1,  481,  265,  266,
  267,  268,  269,  270,  271,  272,  273,  274,  275,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  290,  291,  292,  293,  294,  295,  296,
  297,  298,  299,  300,  301,  302,  303,  304,  305,  306,
   -1,  308,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,  321,  322,  323,  324,  325,  326,
  327,  328,  329,  330,  331,  332,  333,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
  347,  348,  349,  350,  351,   -1,  353,  354,   -1,  356,
  357,  358,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,  379,  380,  381,  382,  383,  384,  385,  386,
  387,   -1,  389,  390,  391,  392,  393,  394,  395,  396,
  397,  398,  399,   -1,  401,   -1,   -1,   -1,  405,   -1,
  407,  408,  409,  410,   -1,   -1,   -1,   -1,  415,   -1,
   -1,   -1,  419,  420,  421,  422,  423,  424,  425,  426,
  427,  428,  429,  430,  431,  432,  433,  434,  435,  436,
  437,   -1,  439,   -1,   -1,   -1,   -1,  444,   -1,  446,
  447,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,   -1,  464,  465,  466,
  467,  468,  469,   -1,  471,   -1,  473,  474,  475,  476,
  477,  478,  479,   -1,  481,  265,  266,  267,   -1,   -1,
  270,  271,   -1,  273,  274,   -1,   -1,   -1,  278,   -1,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,
  300,  301,  302,  303,  304,  305,   -1,   -1,  308,  309,
  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,
  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,
  330,  331,  332,  333,  334,   -1,  336,  337,  338,  339,
  340,  341,   -1,   -1,  344,   -1,  346,   -1,   -1,  349,
  350,  351,   -1,  353,  354,   -1,  356,  357,   -1,  359,
   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,
   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,  378,  379,
   -1,   -1,  382,  383,  384,  385,  386,  387,   -1,  389,
  390,  391,  392,  393,  394,   -1,  396,  397,  398,  399,
   -1,  401,   -1,   -1,  404,  405,  406,  407,  408,  409,
  410,   -1,  412,   -1,  414,  415,  416,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  425,  426,  427,  428,  270,
   -1,   -1,  273,  274,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  441,  273,  274,   -1,  276,   -1,  278,   -1,   -1,
  450,  451,  452,  453,  454,  455,  456,  457,  458,  459,
  460,  461,  462,   -1,  464,   -1,   -1,   -1,  468,  469,
   -1,  471,  472,  473,  474,  475,  476,  477,   -1,  479,
  266,  481,  268,  269,  270,  271,  272,  273,  274,  275,
  276,  277,  278,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  289,  290,  291,  292,  293,  294,  295,
  296,   -1,   -1,  299,   -1,   -1,   -1,   -1,   -1,   -1,
  306,   -1,   -1,   -1,   -1,   -1,   -1,  313,   -1,   -1,
  316,  317,   -1,  319,   -1,   -1,   -1,   -1,   -1,  325,
  326,  327,   -1,   -1,   -1,   -1,  387,  333,  389,  390,
  273,  274,   -1,   -1,   -1,  396,  397,  398,  389,  390,
  401,  347,  348,   -1,   -1,  396,  397,  398,  399,  410,
  401,   -1,  358,   -1,  415,  416,   -1,   -1,   -1,  410,
   -1,   -1,   -1,   -1,   -1,  266,   -1,  268,   -1,  270,
   -1,  272,  273,  274,  380,  381,   -1,  278,   -1,   -1,
   -1,  387,   -1,  389,  390,   -1,   -1,   -1,   -1,  395,
  396,  397,  398,  399,  266,  401,  268,   -1,  270,   -1,
  272,  273,  274,   -1,  410,   -1,   -1,  468,   -1,  415,
   -1,   -1,   -1,  419,  420,  421,  422,  423,  424,  425,
  426,  427,  428,  429,  430,  431,  432,  433,  434,  435,
  436,  437,  333,  439,   -1,  273,  274,   -1,  444,   -1,
  446,  447,   -1,   -1,   -1,   -1,  389,  390,   -1,   -1,
   -1,   -1,   -1,  396,  397,  398,   -1,   -1,  401,  465,
  466,  467,  468,   -1,   -1,   -1,  472,  410,  474,  475,
  476,  477,  478,  479,  266,  481,  268,  269,  270,  271,
  272,  273,  274,  275,  276,  277,  278,   -1,   -1,  390,
   -1,   -1,   -1,   -1,   -1,  333,   -1,   -1,  399,   -1,
  292,  293,   -1,   -1,   -1,   -1,   -1,  299,   -1,   -1,
   -1,   -1,   -1,   -1,  306,  387,   -1,  389,  390,   -1,
   -1,   -1,   -1,   -1,  396,  397,  398,   -1,   -1,  401,
   -1,   -1,   -1,   -1,  326,  273,  274,   -1,  410,   -1,
  278,  333,   -1,  415,  416,   -1,   -1,   -1,   -1,  421,
   -1,  389,  390,   -1,   -1,   -1,   -1,   -1,  396,  397,
  398,   -1,   -1,  401,   -1,   -1,   -1,  468,   -1,  470,
   -1,  472,  410,  474,   -1,  476,  477,  478,  479,  266,
   -1,  268,   -1,  270,   -1,  272,  273,  274,  380,   -1,
   -1,  463,   -1,   -1,   -1,  387,  468,  389,  390,   -1,
   -1,   -1,   -1,  395,  396,  397,  398,  399,  346,  401,
   -1,   -1,  266,   -1,  273,  274,  270,  271,  410,  273,
  274,   -1,   -1,  415,  278,   -1,   -1,  419,  420,  421,
  422,  423,  424,  425,  426,  427,  428,  429,  430,  431,
  432,  433,  434,  435,  436,  437,   -1,  439,   -1,  387,
   -1,  389,  390,  391,  446,  447,   -1,   -1,   -1,  397,
  398,  399,   -1,  401,  273,  274,   -1,   -1,   -1,  278,
   -1,  325,   -1,  465,  466,  467,  468,  415,   -1,  333,
  472,   -1,  474,  475,  476,  477,  478,  479,   -1,  481,
   -1,   -1,  346,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  387,   -1,  389,  390,   -1,  392,   -1,   -1,  266,  396,
  397,  398,  270,  271,  401,  273,  274,   -1,   -1,   -1,
  278,  273,  274,  410,   -1,   -1,   -1,   -1,  415,  416,
  389,  390,   -1,  387,  421,  389,  390,  396,  397,  398,
   -1,   -1,  401,  397,  398,  399,   -1,  401,  402,  403,
   -1,  410,   -1,  362,   -1,   -1,  286,   -1,   -1,   -1,
  414,  415,  416,   -1,   -1,   -1,  375,  325,   -1,   -1,
   -1,  425,  426,  427,  428,  333,   -1,   -1,   -1,   -1,
  389,  468,   -1,  392,  393,   -1,  440,  441,  346,   -1,
  399,   -1,   -1,   -1,  346,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  266,  415,  416,   -1,  270,
  271,   -1,  273,  274,  468,   -1,  470,  278,  472,   -1,
  474,  475,  476,  477,   -1,  479,   -1,  481,   -1,  387,
  270,  389,  390,  273,  274,  387,   -1,  389,  390,  397,
  398,  399,   -1,  401,   -1,  397,  398,  405,  378,  401,
  402,  403,   -1,   -1,   -1,   -1,  414,  415,  416,  468,
  469,  391,  392,  415,  325,  474,  396,  425,  426,  427,
  428,   -1,  333,   -1,   -1,  405,   -1,  407,  408,  409,
   -1,   -1,  440,  441,  266,  346,  268,   -1,  270,   -1,
  272,  273,  274,   -1,   -1,   -1,  278,   -1,   -1,   -1,
   -1,  266,   -1,   -1,   -1,  270,  271,   -1,  273,  274,
  468,   -1,  470,  278,  472,   -1,  474,  475,  476,  477,
   -1,  479,   -1,  481,   -1,   -1,  387,   -1,  389,  390,
  273,  274,   -1,   -1,   -1,   -1,  397,  398,  399,  469,
  401,  471,   -1,  473,   -1,   -1,   -1,  387,   -1,  389,
  390,  333,   -1,  414,  415,  416,  396,  397,  398,   -1,
   -1,  401,   -1,  403,  425,  426,  427,  428,  333,   -1,
  410,   -1,   -1,   -1,   -1,  415,  416,   -1,   -1,  440,
  441,  346,  273,  274,   -1,   -1,   -1,  278,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  266,   -1,
   -1,   -1,  270,  271,   -1,  273,  274,  468,  390,  470,
  278,  472,   -1,  474,  475,  476,  477,  399,  479,  401,
  481,   -1,  387,   -1,  389,  390,   -1,   -1,  468,   -1,
   -1,   -1,  397,  398,  399,   -1,  401,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  389,  390,   -1,  414,
  415,  416,   -1,  396,  397,  398,   -1,   -1,  401,   -1,
  425,  426,  427,  428,   -1,  333,   -1,  410,   -1,   -1,
   -1,  362,   -1,   -1,   -1,   -1,  441,   -1,  346,   -1,
   -1,   -1,   -1,   -1,  375,   -1,  468,   -1,  470,   -1,
   -1,   -1,  474,  286,  476,  477,  478,  479,  389,   -1,
   -1,  392,  393,  468,   -1,  470,   -1,  472,  399,  474,
  475,  476,  477,   -1,  479,   -1,  481,   -1,   -1,  387,
   -1,  389,  390,   -1,  415,  416,   -1,   -1,   -1,  397,
  266,  399,  268,  401,  270,   -1,  272,  273,  274,   -1,
   -1,   -1,  278,   -1,   -1,   -1,  414,  415,  416,   -1,
  286,   -1,   -1,   -1,   -1,   -1,   -1,  425,  426,  427,
  428,   -1,  266,   -1,  268,   -1,  270,   -1,  272,  273,
  274,   -1,   -1,  441,  278,   -1,   -1,  468,  469,   -1,
   -1,   -1,  286,  474,   -1,  378,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  333,  391,  392,
  468,   -1,  470,  396,  472,   -1,  474,  475,  476,  477,
   -1,  479,  405,  481,  407,  408,  409,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  333,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  378,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  390,  391,  392,  393,   -1,   -1,
  396,   -1,   -1,  399,   -1,   -1,   -1,   -1,   -1,  405,
   -1,  407,  408,  409,  378,   -1,  469,   -1,  471,   -1,
  473,   -1,   -1,   -1,   -1,   -1,  390,  391,  392,  393,
   -1,   -1,  396,   -1,   -1,  399,   -1,   -1,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  468,  469,  470,  471,  472,  473,  474,   -1,
  476,  477,  478,  479,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  265,   -1,  267,  468,  469,  470,  471,  472,  473,
  474,   -1,  476,  477,  478,  479,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,
  304,  305,   -1,   -1,  308,  309,  310,  311,  312,   -1,
  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,
  324,   -1,   -1,   -1,  328,  329,  330,  331,  332,   -1,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,   -1,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,  378,  379,   -1,   -1,  382,  383,
  384,  385,  386,   -1,   -1,   -1,   -1,  391,  392,  393,
  394,   -1,  396,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  404,  405,  406,  407,  408,  409,   -1,   -1,  412,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,  265,
  464,  267,   -1,   -1,   -1,  469,   -1,  471,   -1,  473,
   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,
  286,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  297,  298,   -1,  300,  301,  302,  303,  304,  305,
   -1,   -1,  308,  309,  310,  311,  312,   -1,  314,  315,
   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,
   -1,   -1,  328,  329,  330,  331,  332,   -1,  334,   -1,
  336,  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,
   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,
  356,  357,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,
  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,
   -1,   -1,  378,  379,   -1,   -1,  382,  383,  384,  385,
  386,   -1,   -1,   -1,   -1,  391,  392,  393,  394,   -1,
  396,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  404,  405,
  406,  407,  408,  409,   -1,   -1,  412,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,
  456,  457,  458,  459,  460,  461,  462,  265,  464,  267,
   -1,   -1,   -1,  469,   -1,  471,   -1,  473,   -1,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,
  308,  309,  310,  311,  312,   -1,  314,  315,   -1,   -1,
  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,
  328,  329,  330,  331,  332,   -1,  334,   -1,  336,  337,
  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,
   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,  357,
   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,
  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,
  378,  379,   -1,   -1,  382,  383,  384,  385,  386,   -1,
   -1,   -1,   -1,  391,  392,  393,  394,   -1,  396,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  404,  405,  406,  407,
  408,  409,   -1,   -1,  412,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  450,  451,  452,  453,  454,  455,  456,  457,
  458,  459,  460,  461,  462,  265,  464,  267,   -1,   -1,
   -1,  469,   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,
  300,  301,  302,  303,  304,  305,   -1,   -1,  308,  309,
  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,
  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,
  330,  331,  332,   -1,  334,   -1,  336,  337,  338,  339,
  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,
  350,  351,   -1,  353,  354,   -1,  356,  357,   -1,  359,
   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,
   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,  378,  379,
   -1,   -1,  382,  383,  384,  385,  386,   -1,   -1,   -1,
   -1,  391,  392,   -1,  394,   -1,  396,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  404,  405,  406,  407,  408,  409,
   -1,   -1,  412,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  450,  451,  452,  453,  454,  455,  456,  457,  458,  459,
  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,  469,
   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,
  282,  283,  284,  285,  286,  287,  288,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,   -1,   -1,  308,  309,  310,  311,
  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,
  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,
  332,   -1,  334,   -1,  336,  337,  338,  339,  340,  341,
   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,
   -1,  353,  354,   -1,  356,  357,   -1,  359,   -1,   -1,
   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,
  372,   -1,   -1,   -1,   -1,   -1,   -1,  379,   -1,   -1,
  382,  383,  384,  385,  386,   -1,   -1,   -1,   -1,  391,
  392,  393,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  405,   -1,  407,  408,  409,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,
  452,  453,  454,  455,  456,  457,  458,  459,  460,  461,
  462,  265,  464,  267,   -1,   -1,   -1,  469,   -1,  471,
   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,
  304,  305,   -1,   -1,  308,  309,  310,  311,  312,   -1,
  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,
  324,   -1,   -1,   -1,  328,  329,  330,  331,  332,   -1,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,   -1,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,   -1,  379,   -1,   -1,  382,  383,
  384,  385,  386,   -1,   -1,   -1,   -1,  391,  392,   -1,
  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,  265,
  464,  267,   -1,   -1,   -1,  469,   -1,  471,   -1,  473,
   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,
  286,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  297,  298,   -1,  300,  301,  302,  303,  304,  305,
   -1,   -1,  308,  309,  310,  311,  312,   -1,  314,  315,
   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,
   -1,   -1,  328,  329,  330,  331,  332,   -1,  334,   -1,
  336,  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,
   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,
  356,  357,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,
  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,
   -1,   -1,   -1,  379,   -1,   -1,  382,  383,  384,  385,
  386,   -1,   -1,   -1,   -1,   -1,  392,  393,  394,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,
   -1,  407,  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,
  456,  457,  458,  459,  460,  461,  462,  265,  464,  267,
   -1,   -1,   -1,  469,   -1,  471,   -1,  473,   -1,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,
  308,  309,  310,  311,  312,   -1,  314,  315,   -1,   -1,
  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,
  328,  329,  330,  331,  332,   -1,  334,   -1,  336,  337,
  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,
   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,  357,
   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,
  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,
   -1,  379,   -1,   -1,  382,  383,  384,  385,  386,   -1,
   -1,   -1,   -1,   -1,  392,  393,  394,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,
  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  450,  451,  452,  453,  454,  455,  456,  457,
  458,  459,  460,  461,  462,  265,  464,  267,   -1,   -1,
   -1,  469,   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,
  300,  301,  302,  303,  304,  305,   -1,   -1,  308,  309,
  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,
  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,
  330,  331,  332,   -1,  334,   -1,  336,  337,  338,  339,
  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,
  350,  351,   -1,  353,  354,   -1,  356,  357,   -1,  359,
   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,
   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  382,  383,  384,  385,  386,   -1,   -1,   -1,
   -1,  391,  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,  408,  409,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  450,  451,  452,  453,  454,  455,  456,  457,  458,  459,
  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,  469,
   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,
  282,  283,  284,  285,  286,  287,  288,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,   -1,   -1,  308,  309,  310,  311,
  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,
  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,
  332,   -1,  334,   -1,  336,  337,  338,  339,  340,  341,
   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,
   -1,  353,  354,   -1,  356,  357,   -1,  359,   -1,   -1,
   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,
  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  382,  383,  384,  385,  386,   -1,   -1,   -1,   -1,  391,
  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  405,   -1,  407,  408,  409,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,
  452,  453,  454,  455,  456,  457,  458,  459,  460,  461,
  462,  265,  464,  267,   -1,   -1,   -1,  469,   -1,  471,
   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,
  304,  305,   -1,   -1,  308,  309,  310,  311,  312,   -1,
  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,
  324,   -1,   -1,   -1,  328,  329,  330,  331,  332,   -1,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,   -1,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  382,  383,
  384,  385,  386,   -1,   -1,   -1,   -1,  391,  392,   -1,
  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,  265,
  464,  267,   -1,   -1,   -1,  469,   -1,  471,   -1,  473,
   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,
  286,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  297,  298,   -1,  300,  301,  302,  303,  304,  305,
   -1,   -1,  308,  309,  310,  311,  312,   -1,  314,  315,
   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,
   -1,   -1,  328,  329,  330,  331,  332,   -1,  334,   -1,
  336,  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,
   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,
  356,  357,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,
  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  382,  383,  384,  385,
  386,   -1,   -1,   -1,   -1,  391,  392,   -1,  394,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,
   -1,  407,  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,
  456,  457,  458,  459,  460,  461,  462,  265,  464,  267,
   -1,   -1,   -1,  469,   -1,  471,   -1,  473,   -1,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,
  308,  309,  310,  311,  312,   -1,  314,  315,   -1,   -1,
  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,
  328,  329,  330,  331,  332,   -1,  334,   -1,  336,  337,
  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,
   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,  357,
   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,
  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  382,  383,  384,  385,  386,   -1,
   -1,   -1,   -1,  391,  392,   -1,  394,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,
  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  450,  451,  452,  453,  454,  455,  456,  457,
  458,  459,  460,  461,  462,  265,  464,  267,   -1,   -1,
   -1,  469,   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,
  300,  301,  302,  303,  304,  305,   -1,   -1,  308,  309,
  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,
  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,
  330,  331,  332,   -1,  334,   -1,  336,  337,  338,  339,
  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,
  350,  351,   -1,  353,  354,   -1,  356,  357,   -1,  359,
   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,
   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  382,  383,  384,  385,  386,   -1,   -1,   -1,
   -1,  391,  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,  408,  409,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  450,  451,  452,  453,  454,  455,  456,  457,  458,  459,
  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,  469,
   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,
  282,  283,  284,  285,  286,  287,  288,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,   -1,   -1,  308,  309,  310,  311,
  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,
  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,
  332,   -1,  334,   -1,  336,  337,  338,  339,  340,  341,
   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,
   -1,  353,  354,   -1,  356,  357,   -1,  359,   -1,   -1,
   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,
  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  382,  383,  384,  385,  386,   -1,   -1,   -1,   -1,  391,
  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  405,   -1,  407,  408,  409,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,
  452,  453,  454,  455,  456,  457,  458,  459,  460,  461,
  462,  265,  464,  267,   -1,   -1,   -1,  469,   -1,  471,
   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,
  304,  305,   -1,   -1,  308,  309,  310,  311,  312,   -1,
  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,
  324,   -1,   -1,   -1,  328,  329,  330,  331,  332,   -1,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,   -1,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  382,  383,
  384,  385,  386,   -1,   -1,   -1,   -1,  391,  392,   -1,
  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,  265,
  464,  267,   -1,   -1,   -1,  469,   -1,  471,   -1,  473,
   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,
  286,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  297,  298,   -1,  300,  301,  302,  303,  304,  305,
   -1,   -1,  308,  309,  310,  311,  312,   -1,  314,  315,
   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,
   -1,   -1,  328,  329,  330,  331,  332,   -1,  334,   -1,
  336,  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,
   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,
  356,  357,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,
  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  382,  383,  384,  385,
  386,   -1,   -1,   -1,   -1,  391,  392,   -1,  394,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,
   -1,  407,  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,
  456,  457,  458,  459,  460,  461,  462,  265,  464,  267,
   -1,   -1,   -1,  469,   -1,  471,   -1,  473,   -1,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,
  308,  309,  310,  311,  312,   -1,  314,  315,   -1,   -1,
  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,
  328,  329,  330,  331,  332,   -1,  334,   -1,  336,  337,
  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,
   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,  357,
   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,
  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  382,  383,  384,  385,  386,   -1,
   -1,   -1,   -1,  391,  392,   -1,  394,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,
  408,  409,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  450,  451,  452,  453,  454,  455,  456,  457,
  458,  459,  460,  461,  462,  265,  464,  267,   -1,   -1,
   -1,  469,   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,
  300,  301,  302,  303,  304,  305,   -1,   -1,  308,  309,
  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,
  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,
  330,  331,  332,   -1,  334,   -1,  336,  337,  338,  339,
  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,
  350,  351,   -1,  353,  354,   -1,  356,  357,   -1,  359,
   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,
   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  382,  383,  384,  385,  386,   -1,   -1,   -1,
   -1,  391,  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  405,   -1,  407,  408,  409,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  450,  451,  452,  453,  454,  455,  456,  457,  458,  459,
  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,  469,
   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,
  282,  283,  284,  285,  286,  287,  288,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,   -1,   -1,  308,  309,  310,  311,
  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,
  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,
  332,   -1,  334,   -1,  336,  337,  338,  339,  340,  341,
   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,
   -1,  353,  354,   -1,  356,  357,   -1,  359,   -1,   -1,
   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,
  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  382,  383,  384,  385,  386,   -1,   -1,   -1,   -1,  391,
  392,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  405,   -1,  407,  408,  409,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,
  452,  453,  454,  455,  456,  457,  458,  459,  460,  461,
  462,  265,  464,  267,   -1,   -1,   -1,  469,   -1,  471,
   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,
  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,
  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,
  324,   -1,   -1,   -1,  328,  329,  330,  331,  332,   -1,
  334,   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,
  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,
  354,   -1,  356,  357,   -1,  359,   -1,   -1,   -1,   -1,
   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  382,  383,
  384,  385,  386,   -1,   -1,   -1,   -1,  391,  392,   -1,
  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  405,   -1,  407,  408,  409,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,
  454,  455,  456,  457,  458,  459,  460,  461,  462,   -1,
  464,   -1,  265,   -1,  267,  469,   -1,  471,   -1,  473,
  273,  274,   -1,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  387,   -1,  389,  390,   -1,   -1,
   -1,  394,   -1,  396,  397,  398,   -1,   -1,  401,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  410,   -1,   -1,
   -1,   -1,  415,  416,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,
  274,   -1,   -1,   -1,  278,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,  273,  274,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,  362,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,  375,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,  389,   -1,   -1,  392,  393,
  365,  366,  367,  368,  369,  399,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,  379,   -1,   -1,   -1,   -1,   -1,
   -1,  415,  416,   -1,  389,  390,   -1,   -1,   -1,  394,
   -1,  396,  397,  398,   -1,   -1,  401,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  410,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  468,  469,   -1,   -1,   -1,   -1,
  474,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
  266,  288,  268,   -1,  270,   -1,  272,  273,  274,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,  332,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,  379,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  391,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  387,   -1,  389,  390,   -1,   -1,   -1,   -1,   -1,
  396,  397,  398,   -1,   -1,  401,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  410,   -1,   -1,   -1,   -1,  415,
  416,   -1,   -1,   -1,   -1,  421,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,  468,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  391,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,  471,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,  286,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,  379,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  391,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,  379,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  391,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  391,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,  379,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  391,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,  286,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,  379,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,  286,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,   -1,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,  396,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,  286,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
  337,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
   -1,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,   -1,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,  337,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  286,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,   -1,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  286,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
   -1,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,  286,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,   -1,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,  286,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,   -1,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,  286,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,   -1,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
   -1,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,   -1,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  265,  464,  267,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,
  301,  302,  303,  304,  305,   -1,   -1,  308,   -1,  310,
  311,  312,   -1,  314,  315,   -1,   -1,  318,   -1,  320,
  321,  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,
  331,   -1,   -1,  334,   -1,  336,   -1,  338,  339,  340,
  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,
  351,   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,
   -1,   -1,   -1,   -1,  365,  366,  367,  368,  369,   -1,
   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,
  451,  452,  453,  454,  455,  456,  457,  458,  459,  460,
  461,  462,  265,  464,  267,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  473,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,  310,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,  308,   -1,  310,  311,  312,   -1,  314,
  315,   -1,   -1,  318,   -1,  320,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,   -1,  338,  339,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,  366,  367,  368,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  265,  464,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  297,  298,   -1,  300,  301,  302,  303,  304,  305,   -1,
   -1,  308,   -1,  310,  311,  312,   -1,  314,  315,   -1,
   -1,  318,   -1,  320,  321,  322,  323,  324,   -1,   -1,
   -1,  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,
   -1,  338,  339,  340,  341,   -1,   -1,  344,   -1,   -1,
   -1,   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,
   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,  366,
  367,  368,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  394,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  450,  451,  452,  453,  454,  455,  456,
  457,  458,  459,  460,  461,  462,  265,  464,  267,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  473,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,  273,  274,   -1,   -1,   -1,  278,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,  310,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,  321,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,   -1,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,  342,  343,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,  360,
  361,  362,  363,  364,   -1,   -1,   -1,   -1,   -1,  370,
  371,   -1,  373,  374,  375,  376,  377,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  387,   -1,  389,  390,
   -1,   -1,   -1,   -1,   -1,  396,  397,  398,  399,   -1,
  401,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  410,
   -1,   -1,   -1,   -1,  415,  416,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  267,  464,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  473,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,  468,   -1,   -1,
   -1,  273,  274,  474,  297,  298,  278,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,   -1,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,   -1,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
  342,  343,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  360,  361,
  362,  363,  364,   -1,   -1,   -1,   -1,   -1,  370,  371,
   -1,  373,  374,  375,  376,  377,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  389,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  399,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  415,  416,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,   -1,
   -1,   -1,   -1,   -1,  457,  458,  459,  460,  461,  462,
   -1,  464,  265,   -1,  267,   -1,   -1,   -1,   -1,   -1,
  473,   -1,   -1,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  468,   -1,   -1,   -1,
   -1,   -1,  474,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,   -1,   -1,  310,  311,   -1,
   -1,   -1,   -1,   -1,   -1,  318,   -1,   -1,  321,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,  337,  338,   -1,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,   -1,   -1,   -1,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  394,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  452,
  453,  454,  455,  456,  457,  458,  459,  460,  461,  462,
  265,  464,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  297,  298,   -1,  300,  301,  302,  303,  304,
  305,   -1,   -1,   -1,   -1,  310,  311,   -1,   -1,   -1,
   -1,   -1,   -1,  318,   -1,   -1,  321,  322,  323,  324,
   -1,   -1,   -1,  328,  329,  330,  331,   -1,   -1,  334,
   -1,  336,  337,  338,   -1,  340,  341,   -1,   -1,  344,
   -1,   -1,   -1,   -1,  349,  350,  351,   -1,  353,  354,
   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,   -1,   -1,
  365,   -1,   -1,   -1,  369,   -1,   -1,  372,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  450,  451,  452,  453,  454,
  455,  456,  457,  458,  459,  460,  461,  462,  267,  464,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  298,
   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,  308,
   -1,   -1,  311,  312,   -1,  314,  315,   -1,   -1,  318,
   -1,  320,   -1,  322,  323,  324,   -1,   -1,   -1,  328,
  329,  330,  331,   -1,   -1,  334,   -1,  336,   -1,  338,
  339,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,   -1,
  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,   -1,
  359,   -1,   -1,   -1,   -1,   -1,  365,  366,  367,  368,
  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  450,  451,  452,  453,  454,  455,  456,  457,  458,
  459,  460,  461,  462,  267,  464,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,  302,
  303,  304,  305,   -1,   -1,  308,   -1,   -1,  311,  312,
   -1,  314,  315,   -1,   -1,  318,   -1,  320,   -1,  322,
  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,   -1,
   -1,  334,   -1,  336,   -1,  338,  339,  340,  341,   -1,
   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,   -1,
  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,   -1,
   -1,   -1,  365,  366,  367,  368,  369,   -1,   -1,  372,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,  267,
   -1,   -1,   -1,   -1,  457,  458,  459,  460,  461,  462,
   -1,  464,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,
  298,   -1,  300,  301,  302,  303,  304,  305,   -1,   -1,
   -1,   -1,   -1,  311,   -1,   -1,   -1,   -1,   -1,   -1,
  318,   -1,   -1,   -1,  322,  323,  324,   -1,   -1,   -1,
  328,  329,  330,  331,   -1,   -1,  334,   -1,  336,  337,
  338,   -1,  340,  341,   -1,   -1,  344,   -1,   -1,   -1,
   -1,  349,  350,  351,   -1,  353,  354,   -1,  356,   -1,
   -1,  359,   -1,   -1,   -1,   -1,   -1,  365,   -1,   -1,
   -1,  369,   -1,   -1,  372,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  450,  451,  452,  453,  454,  455,  456,  457,
  458,  459,  460,  461,  462,  267,  464,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,   -1,   -1,   -1,   -1,   -1,  311,
   -1,   -1,   -1,   -1,   -1,   -1,  318,   -1,   -1,   -1,
  322,  323,  324,   -1,   -1,   -1,  328,  329,  330,  331,
   -1,   -1,  334,   -1,  336,  337,  338,   -1,  340,  341,
   -1,   -1,  344,   -1,   -1,   -1,   -1,  349,  350,  351,
   -1,  353,  354,   -1,  356,   -1,   -1,  359,   -1,   -1,
   -1,   -1,   -1,  365,   -1,   -1,   -1,  369,   -1,   -1,
  372,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  450,  451,
   -1,   -1,   -1,   -1,   -1,  457,  458,  459,  460,  461,
  462,   -1,  464,
};
#define YYFINAL 9
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 499
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"YYBEG_i0de","YYBEG_s0rtid",
"YYBEG_si0de","YYBEG_di0de","YYBEG_s0exp","YYBEG_d0exp","YYBEG_d0ecseq_sta",
"YYBEG_d0ecseq_dyn","TOKEN_eof","LITERAL_char","LITERAL_extcode",
"LITERAL_float","LITERAL_floatsp","LITERAL_int","LITERAL_intsp",
"LITERAL_string","IDENTIFIER_alp","IDENTIFIER_sym","IDENTIFIER_arr",
"IDENTIFIER_tmp","IDENTIFIER_ext","IDENTIFIER_dlr","IDENTIFIER_srp","ABSPROP",
"ABSTYPE","ABST0YPE","ABSVIEW","ABSVIEWTYPE","ABSVIEWT0YPE","AND","AS","ASSUME",
"ATLAM","ATLLAM","ATFIX","BEGIN","BREAK","CASE","CASEMINUS","CASEPLUS","CASTFN",
"CLASSDEC","CONTINUE","DATASORT","DATAPARASORT","DATAPROP","DATATYPE",
"DATAVIEW","DATAVIEWTYPE","DO","DYN","DYNLOAD","ELSE","END","EXCEPTION",
"EXTERN","FIX","FN","FNSTAR","FOR","FORSTAR","FUN","IF","IMPLEMENT","IN",
"INFIX","INFIXL","INFIXR","LAM","LET","LLAM","LOCAL","MACDEF","MACRODEF",
"NONFIX","OF","OP","OVERLOAD","PAR","POSTFIX","PRAXI","PREFIX","PRFN","PRFUN",
"PROPDEF","PROPMINUS","PROPPLUS","PRVAL","REC","R0EAD","SCASE","SIF","SORTDEF",
"STACST","STADEF","STAIF","STALOAD","STAVAR","SYMELIM","SYMINTR","THEN","TRY",
"TYPEDEF","TYPEMINUS","TYPEPLUS","T0YPE","T0YPEMINUS","T0YPEPLUS","VAL",
"VALMINUS","VALPLUS","VAR","VIEWDEF","VIEWMINUS","VIEWPLUS","VIEWTYPEDEF",
"VIEWTYPEMINUS","VIEWTYPEPLUS","VIEWT0YPE","VIEWT0YPEMINUS","VIEWT0YPEPLUS",
"WHEN","WHERE","WHILE","WHILESTAR","WITH","WITHPROP","WITHTYPE","WITHVIEW",
"WITHVIEWTYPE","AMPERSAND","BACKQUOTE","BACKSLASH","BANG","BAR","COMMA","COLON",
"SEMICOLON","DOT","EQ","LT","GT","DOLLAR","HASH","TILDE","DOTDOT","DOTDOTDOT",
"EQLT","EQGT","EQLTGT","EQGTGT","EQSLASHEQGT","EQSLASHEQGTGT","GTLT","DOTLT",
"GTDOT","DOTLTGTDOT","MINUSLT","MINUSGT","MINUSLTGT","COLONLT","COLONLTGT",
"BACKQUOTELPAREN","COMMALPAREN","PERCENTLPAREN","DLRARRSZ","DLRLST_T",
"DLRLST_VT","DLRREC_T","DLRREC_VT","DLRTUP_T","DLRTUP_VT","DLRDELAY",
"DLRLDELAY","DLRDYNLOAD","DLREFFMASK_ALL","DLREFFMASK_EXN","DLREFFMASK_NTM",
"DLREFFMASK_REF","DLRDECRYPT","DLRENCRYPT","DLREXTERN","DLREXTVAL","DLREXTYPE",
"DLREXTYPE_STRUCT","DLRFOLD","DLRUNFOLD","DLRRAISE","DLRTYPEOF","SRPFILENAME",
"SRPLOCATION","SRPCHARCOUNT","SRPLINECOUNT","SRPASSERT","SRPDEFINE","SRPELSE",
"SRPELIF","SRPELIFDEF","SRPELIFNDEF","SRPENDIF","SRPERROR","SRPIF","SRPIFDEF",
"SRPIFNDEF","SRPINCLUDE","SRPPRINT","SRPTHEN","SRPUNDEF","FOLDAT","FREEAT",
"VIEWAT","LPAREN","RPAREN","LBRACKET","RBRACKET","LBRACE","RBRACE","ATLPAREN",
"ATLBRACKET","ATLBRACE","QUOTELPAREN","QUOTELBRACKET","QUOTELBRACE",
"HASHLPAREN","HASHLBRACKET","HASHLBRACE","PATAS","PATFREE","SEXPLAM","DEXPLAM",
"DEXPFIX","CLAUS","DEXPCASE","DEXPIF","DEXPRAISE","DEXPTRY","DEXPFOR",
"DEXPWHILE","BARCLAUSSEQNONE","TMPSEXP","TMPSARG","SARRIND","SEXPDARGSEQEMPTY",
};
static const char *yyrule[] = {
"$accept : theStartEntry",
"theStartEntry : YYBEG_d0ecseq_sta d0ecseq_sta TOKEN_eof",
"theStartEntry : YYBEG_d0ecseq_dyn d0ecseq_dyn TOKEN_eof",
"theStartEntry : YYBEG_i0de i0de TOKEN_eof",
"theStartEntry : YYBEG_s0rtid s0rtid TOKEN_eof",
"theStartEntry : YYBEG_si0de si0de TOKEN_eof",
"theStartEntry : YYBEG_di0de di0de TOKEN_eof",
"theStartEntry : YYBEG_s0exp s0exp TOKEN_eof",
"theStartEntry : YYBEG_d0exp d0exp TOKEN_eof",
"abskind : ABSPROP",
"abskind : ABSTYPE",
"abskind : ABST0YPE",
"abskind : ABSVIEW",
"abskind : ABSVIEWTYPE",
"abskind : ABSVIEWT0YPE",
"dcstkind : FUN",
"dcstkind : VAL",
"dcstkind : CASTFN",
"dcstkind : PRAXI",
"dcstkind : PRFUN",
"dcstkind : PRVAL",
"datakind : DATAPROP",
"datakind : DATATYPE",
"datakind : DATAVIEW",
"datakind : DATAVIEWTYPE",
"stadefkind : STADEF",
"stadefkind : PROPDEF",
"stadefkind : TYPEDEF",
"stadefkind : VIEWDEF",
"stadefkind : VIEWTYPEDEF",
"valkind : VAL",
"valkind : VALMINUS",
"valkind : VALPLUS",
"valkind : PRVAL",
"funkind : FN",
"funkind : FNSTAR",
"funkind : FUN",
"funkind : CASTFN",
"funkind : PRFN",
"funkind : PRFUN",
"lamkind : LAM",
"lamkind : ATLAM",
"lamkind : LLAM",
"lamkind : ATLLAM",
"fixkind : FIX",
"fixkind : ATFIX",
"srpifkind : SRPIF",
"srpifkind : SRPIFDEF",
"srpifkind : SRPIFNDEF",
"srpelifkind : SRPELIF",
"srpelifkind : SRPELIFDEF",
"srpelifkind : SRPELIFNDEF",
"srpthenopt :",
"srpthenopt : SRPTHEN",
"i0de : IDENTIFIER_alp",
"i0de : IDENTIFIER_sym",
"i0de : AMPERSAND",
"i0de : BACKSLASH",
"i0de : BANG",
"i0de : EQ",
"i0de : GT",
"i0de : GTLT",
"i0de : LT",
"i0de : MINUSGT",
"i0de : MINUSLTGT",
"i0de : TILDE",
"i0de_dlr : IDENTIFIER_dlr",
"i0deseq :",
"i0deseq : i0de i0deseq",
"i0dext : IDENTIFIER_ext",
"i0dext : DO",
"i0dext : WHILE",
"l0ab : i0de",
"l0ab : LITERAL_int",
"l0ab : LPAREN l0ab RPAREN",
"stai0de : IDENTIFIER_alp",
"p0rec :",
"p0rec : LITERAL_int",
"p0rec : LPAREN i0de RPAREN",
"p0rec : LPAREN i0de IDENTIFIER_sym LITERAL_int RPAREN",
"e0xp : e0xp atme0xp",
"e0xp : atme0xp",
"atme0xp : LITERAL_char",
"atme0xp : LITERAL_float",
"atme0xp : LITERAL_int",
"atme0xp : LITERAL_string",
"atme0xp : i0de",
"atme0xp : LPAREN e0xpseq RPAREN",
"atme0xp : PERCENTLPAREN e0xp RPAREN",
"e0xpseq :",
"e0xpseq : e0xp commae0xpseq",
"commae0xpseq :",
"commae0xpseq : COMMA e0xp commae0xpseq",
"e0xpopt :",
"e0xpopt : e0xp",
"e0ffid : IDENTIFIER_alp",
"e0fftag : BANG e0ffid",
"e0fftag : TILDE e0ffid",
"e0fftag : e0ffid",
"e0fftag : FUN",
"e0fftag : LITERAL_int",
"e0fftagseq :",
"e0fftagseq : e0fftag commae0fftagseq",
"commae0fftagseq :",
"commae0fftagseq : COMMA e0fftag commae0fftagseq",
"colonwith : COLON",
"colonwith : COLONLTGT",
"colonwith : COLONLT e0fftagseq GT",
"s0rt : s0rt atms0rt",
"s0rt : atms0rt",
"s0rtq : i0de_dlr DOT",
"s0rtq : DOLLAR LITERAL_string DOT",
"s0rtid : IDENTIFIER_alp",
"s0rtid : IDENTIFIER_sym",
"s0rtid : T0YPE",
"s0rtid : VIEWT0YPE",
"s0rtid : BACKSLASH",
"s0rtid : MINUSGT",
"s0rtid : MINUSLTGT",
"atms0rt : s0rtid",
"atms0rt : s0rtq s0rtid",
"atms0rt : LPAREN s0rtseq RPAREN",
"atms0rt : ATLPAREN s0rtseq RPAREN",
"s0rtseq :",
"s0rtseq : s0rt commas0rtseq",
"commas0rtseq :",
"commas0rtseq : COMMA s0rt commas0rtseq",
"s0rtpol : s0rt",
"s0rtpol : PROPMINUS",
"s0rtpol : PROPPLUS",
"s0rtpol : TYPEMINUS",
"s0rtpol : TYPEPLUS",
"s0rtpol : T0YPEMINUS",
"s0rtpol : T0YPEPLUS",
"s0rtpol : VIEWMINUS",
"s0rtpol : VIEWPLUS",
"s0rtpol : VIEWTYPEMINUS",
"s0rtpol : VIEWTYPEPLUS",
"s0rtpol : VIEWT0YPEMINUS",
"s0rtpol : VIEWT0YPEPLUS",
"d0atsrtcon : i0de",
"d0atsrtcon : i0de OF s0rt",
"d0atsrtconseq : bard0atsrtconseq",
"d0atsrtconseq : d0atsrtcon bard0atsrtconseq",
"bard0atsrtconseq :",
"bard0atsrtconseq : BAR d0atsrtcon bard0atsrtconseq",
"d0atsrtdec : i0de EQ d0atsrtconseq",
"andd0atsrtdecseq :",
"andd0atsrtdecseq : AND d0atsrtdec andd0atsrtdecseq",
"s0taq : i0de_dlr DOT",
"s0taq : i0de_dlr COLON",
"s0taq : DOLLAR LITERAL_string DOT",
"d0ynq : i0de_dlr DOT",
"d0ynq : i0de_dlr COLON",
"d0ynq : i0de_dlr i0de_dlr COLON",
"d0ynq : DOLLAR LITERAL_string DOT",
"d0ynq : DOLLAR LITERAL_string i0de_dlr COLON",
"si0de : IDENTIFIER_alp",
"si0de : IDENTIFIER_sym",
"si0de : R0EAD",
"si0de : AMPERSAND",
"si0de : BACKSLASH",
"si0de : BANG",
"si0de : GT",
"si0de : LT",
"si0de : MINUSGT",
"si0de : TILDE",
"sqi0de : si0de",
"sqi0de : s0taq si0de",
"commasi0deseq :",
"commasi0deseq : COMMA si0de commasi0deseq",
"di0de : IDENTIFIER_alp",
"di0de : IDENTIFIER_sym",
"di0de : BACKSLASH",
"di0de : BANG",
"di0de : EQ",
"di0de : GT",
"di0de : GTLT",
"di0de : LT",
"di0de : TILDE",
"dqi0de : di0de",
"dqi0de : d0ynq di0de",
"pi0de : IDENTIFIER_alp",
"pi0de : IDENTIFIER_sym",
"fi0de : di0de",
"fi0de : OP di0de",
"arri0de : IDENTIFIER_arr",
"arrqi0de : arri0de",
"arrqi0de : d0ynq arri0de",
"tmpi0de : IDENTIFIER_tmp",
"tmpqi0de : tmpi0de",
"tmpqi0de : d0ynq tmpi0de",
"colons0rtopt :",
"colons0rtopt : COLON s0rt",
"s0arg : si0de colons0rtopt",
"s0argseq :",
"s0argseq : s0arg commas0argseq",
"commas0argseq :",
"commas0argseq : COMMA s0arg commas0argseq",
"s0argseqseq :",
"s0argseqseq : si0de s0argseqseq",
"s0argseqseq : LPAREN s0argseq RPAREN s0argseqseq",
"decs0argseq :",
"decs0argseq : s0arg commadecs0argseq",
"commadecs0argseq :",
"commadecs0argseq : COMMA s0arg commadecs0argseq",
"decs0argseqseq :",
"decs0argseqseq : LBRACE decs0argseq RBRACE decs0argseqseq",
"sp0at : sqi0de LPAREN s0argseq RPAREN",
"s0exp : apps0exp",
"s0exp : exts0exp",
"s0exp : s0exp COLON s0rt",
"s0exp : LAM s0argseqseq colons0rtopt EQGT s0exp",
"atms0exp : LITERAL_char",
"atms0exp : LITERAL_int",
"atms0exp : LITERAL_intsp",
"atms0exp : si0de",
"atms0exp : OP si0de",
"atms0exp : s0taq si0de",
"atms0exp : LPAREN s0expseq RPAREN",
"atms0exp : LPAREN s0expseq BAR s0expseq RPAREN",
"atms0exp : ATLPAREN s0expseq RPAREN",
"atms0exp : QUOTELPAREN s0expseq RPAREN",
"atms0exp : DLRTUP_T LPAREN s0expseq RPAREN",
"atms0exp : DLRTUP_VT LPAREN s0expseq RPAREN",
"atms0exp : ATLPAREN s0expseq BAR s0expseq RPAREN",
"atms0exp : QUOTELPAREN s0expseq BAR s0expseq RPAREN",
"atms0exp : DLRTUP_T LPAREN s0expseq BAR s0expseq RPAREN",
"atms0exp : DLRTUP_VT LPAREN s0expseq BAR s0expseq RPAREN",
"atms0exp : ATLBRACE labs0expseq RBRACE",
"atms0exp : QUOTELBRACE labs0expseq RBRACE",
"atms0exp : DLRREC_T LBRACE labs0expseq RBRACE",
"atms0exp : DLRREC_VT LBRACE labs0expseq RBRACE",
"atms0exp : DLREXTYPE_STRUCT LITERAL_string OF LBRACE labs0expseq RBRACE",
"atms0exp : ATLBRACKET s0exp RBRACKET LBRACKET s0arrind",
"atms0exp : MINUSLT e0fftagseq GT",
"atms0exp : MINUSLTGT",
"atms0exp : LBRACE s0quaseq RBRACE",
"atms0exp : LBRACKET s0quaseq RBRACKET",
"atms0exp : HASHLBRACKET s0quaseq RBRACKET",
"apps0exp : apps0exp atms0exp",
"apps0exp : atms0exp",
"exts0exp : DLREXTYPE LITERAL_string",
"exts0exp : exts0exp atms0exp",
"s0expelt :",
"s0expelt : LBRACE s0exp RBRACE",
"s0expelt : LBRACKET s0exp RBRACKET",
"s0arrind : s0expseq RBRACKET",
"s0arrind : s0expseq RBRACKET LBRACKET s0arrind",
"s0qua : apps0exp",
"s0qua : si0de commasi0deseq COLON s0rtext",
"s0quaseq :",
"s0quaseq : s0qua barsemis0quaseq",
"barsemis0quaseq :",
"barsemis0quaseq : BAR s0qua barsemis0quaseq",
"barsemis0quaseq : SEMICOLON s0qua barsemis0quaseq",
"s0rtext : s0rt",
"s0rtext : LBRACE si0de COLON s0rtext BAR s0exp barsemis0expseq RBRACE",
"s0expseq :",
"s0expseq : s0expseq1",
"barsemis0expseq :",
"barsemis0expseq : BAR s0exp barsemis0expseq",
"barsemis0expseq : SEMICOLON s0exp barsemis0expseq",
"commas0expseq :",
"commas0expseq : COMMA s0exp commas0expseq",
"s0expseq1 : s0exp commas0expseq",
"labs0expseq :",
"labs0expseq : l0ab EQ s0exp commalabs0expseq",
"commalabs0expseq :",
"commalabs0expseq : COMMA l0ab EQ s0exp commalabs0expseq",
"t0mps0exp : atms0exp",
"t0mps0exp : t0mps0exp atms0exp",
"t1mps0exp : t0mps0exp",
"t1mps0expseq :",
"t1mps0expseq : t1mps0exp commat1mps0expseq",
"commat1mps0expseq :",
"commat1mps0expseq : COMMA t1mps0exp commat1mps0expseq",
"gtlt_t1mps0expseqseq :",
"gtlt_t1mps0expseqseq : GTLT t1mps0expseq gtlt_t1mps0expseqseq",
"impqi0de : dqi0de",
"impqi0de : tmpqi0de t1mps0expseq gtlt_t1mps0expseqseq GT",
"s0rtdef : s0rtid EQ s0rtext",
"ands0rtdefseq :",
"ands0rtdefseq : AND s0rtdef ands0rtdefseq",
"d0atarg : s0rtpol",
"d0atarg : i0de COLON s0rtpol",
"d0atargseq :",
"d0atargseq : d0atarg commad0atargseq",
"commad0atargseq :",
"commad0atargseq : COMMA d0atarg commad0atargseq",
"s0tacon : si0de",
"s0tacon : si0de LPAREN d0atargseq RPAREN",
"s0tacon : si0de EQ s0exp",
"s0tacon : si0de LPAREN d0atargseq RPAREN EQ s0exp",
"ands0taconseq :",
"ands0taconseq : AND s0tacon ands0taconseq",
"s0tacst : si0de COLON s0rt",
"s0tacst : si0de LPAREN d0atargseq RPAREN COLON s0rt",
"ands0tacstseq :",
"ands0tacstseq : AND s0tacst ands0tacstseq",
"s0tavar : si0de COLON s0rt",
"ands0tavarseq :",
"ands0tavarseq : AND s0tavar ands0tavarseq",
"s0expdef : si0de s0argseqseq colons0rtopt EQ s0exp",
"ands0expdefseq :",
"ands0expdefseq : AND s0expdef ands0expdefseq",
"s0aspdec : sqi0de s0argseqseq colons0rtopt EQ s0exp",
"conq0uaseq :",
"conq0uaseq : LBRACE s0quaseq RBRACE conq0uaseq",
"coni0ndopt :",
"coni0ndopt : LPAREN s0expseq RPAREN",
"cona0rgopt :",
"cona0rgopt : OF s0exp",
"d0atcon : conq0uaseq di0de coni0ndopt cona0rgopt",
"d0atconseq : bard0atconseq",
"d0atconseq : d0atcon bard0atconseq",
"bard0atconseq :",
"bard0atconseq : BAR d0atcon bard0atconseq",
"d0atdec : si0de EQ d0atconseq",
"d0atdec : si0de LPAREN d0atargseq RPAREN EQ d0atconseq",
"andd0atdecseq :",
"andd0atdecseq : AND d0atdec andd0atdecseq",
"s0expdefseqopt :",
"s0expdefseqopt : WHERE s0expdef ands0expdefseq",
"e0xndec : conq0uaseq di0de cona0rgopt",
"ande0xndecseq :",
"ande0xndecseq : AND e0xndec ande0xndecseq",
"p0arg : pi0de",
"p0arg : pi0de COLON s0exp",
"p0argseq :",
"p0argseq : p0arg commap0argseq",
"commap0argseq :",
"commap0argseq : COMMA p0arg commap0argseq",
"d0arg : pi0de",
"d0arg : LPAREN p0argseq RPAREN",
"d0arg : LPAREN p0argseq BAR p0argseq RPAREN",
"d0arg : LBRACE s0quaseq RBRACE",
"d0argseq :",
"d0argseq : d0arg d0argseq",
"extnamopt :",
"extnamopt : EQ LITERAL_string",
"d0cstdec : di0de d0argseq colonwith s0exp extnamopt",
"andd0cstdecseq :",
"andd0cstdecseq : AND d0cstdec andd0cstdecseq",
"s0vararg : DOTDOT",
"s0vararg : DOTDOTDOT",
"s0vararg : s0argseq",
"s0exparg : DOTDOT",
"s0exparg : DOTDOTDOT",
"s0exparg : s0expseq1",
"s0elop : DOT",
"s0elop : MINUSGT",
"witht0ype :",
"witht0ype : WITHPROP s0exp",
"witht0ype : WITHTYPE s0exp",
"witht0ype : WITHVIEW s0exp",
"witht0ype : WITHVIEWTYPE s0exp",
"p0at : atmp0at argp0atseq",
"p0at : p0at COLON s0exp",
"p0at : pi0de AS p0at",
"p0at : BANG pi0de AS p0at",
"p0at : TILDE p0at",
"atmp0at : LITERAL_char",
"atmp0at : LITERAL_int",
"atmp0at : LITERAL_float",
"atmp0at : LITERAL_string",
"atmp0at : pi0de",
"atmp0at : BANG pi0de",
"atmp0at : OP pi0de",
"atmp0at : d0ynq pi0de",
"atmp0at : LPAREN p0atseq RPAREN",
"atmp0at : LPAREN p0atseq BAR p0atseq RPAREN",
"atmp0at : QUOTELBRACKET p0atseq RBRACKET",
"atmp0at : ATLPAREN p0atseq RPAREN",
"atmp0at : QUOTELPAREN p0atseq RPAREN",
"atmp0at : ATLPAREN p0atseq BAR p0atseq RPAREN",
"atmp0at : QUOTELPAREN p0atseq BAR p0atseq RPAREN",
"atmp0at : ATLBRACE labp0atseq RBRACE",
"atmp0at : QUOTELBRACE labp0atseq RBRACE",
"atmp0at : LBRACKET s0argseq RBRACKET",
"argp0at : atmp0at",
"argp0at : LBRACE s0vararg RBRACE",
"argp0atseq :",
"argp0atseq : argp0at argp0atseq",
"p0atseq :",
"p0atseq : p0at commap0atseq",
"commap0atseq :",
"commap0atseq : COMMA p0at commap0atseq",
"labp0atseq : DOTDOTDOT",
"labp0atseq : l0ab EQ p0at commalabp0atseq",
"commalabp0atseq :",
"commalabp0atseq : COMMA DOTDOTDOT",
"commalabp0atseq : COMMA l0ab EQ p0at commalabp0atseq",
"f0arg1 : LBRACE s0quaseq RBRACE",
"f0arg1 : atmp0at",
"f0arg1 : DOTLT s0expseq GTDOT",
"f0arg1 : DOTLTGTDOT",
"f0arg1seq :",
"f0arg1seq : f0arg1 f0arg1seq",
"f0arg2 : LBRACE s0argseq RBRACE",
"f0arg2 : atmp0at",
"f0arg2seq :",
"f0arg2seq : f0arg2 f0arg2seq",
"d0exp : atmd0exp argd0expseq",
"d0exp : d0exp COLON s0exp",
"d0exp : ifhead d0exp THEN d0exp",
"d0exp : ifhead d0exp THEN d0exp ELSE d0exp",
"d0exp : sifhead s0exp THEN d0exp ELSE d0exp",
"d0exp : casehead d0exp OF c0lauseq",
"d0exp : scasehead s0exp OF sc0lauseq",
"d0exp : lamkind f0arg1seq colons0expopt funarrow d0exp",
"d0exp : fixkind di0de f0arg1seq colons0expopt funarrow d0exp",
"d0exp : forhead initestpost d0exp",
"d0exp : whilehead atmd0exp d0exp",
"d0exp : DLRRAISE d0exp",
"d0exp : tryhead d0expsemiseq0 WITH c0lauseq",
"d0exp : d0exp WHERE LBRACE d0ecseq_dyn RBRACE",
"atmd0exp : LITERAL_char",
"atmd0exp : LITERAL_float",
"atmd0exp : LITERAL_floatsp",
"atmd0exp : LITERAL_int",
"atmd0exp : LITERAL_intsp",
"atmd0exp : LITERAL_string",
"atmd0exp : SRPFILENAME",
"atmd0exp : SRPLOCATION",
"atmd0exp : di0de",
"atmd0exp : OP di0de",
"atmd0exp : d0ynq i0de",
"atmd0exp : i0dext",
"atmd0exp : AMPERSAND",
"atmd0exp : BREAK",
"atmd0exp : CONTINUE",
"atmd0exp : FOLDAT s0expdargseq",
"atmd0exp : FREEAT s0expdargseq",
"atmd0exp : VIEWAT",
"atmd0exp : DLRDECRYPT",
"atmd0exp : DLRENCRYPT",
"atmd0exp : DLRDELAY",
"atmd0exp : DLRLDELAY",
"atmd0exp : DLRDYNLOAD",
"atmd0exp : DLREFFMASK_ALL",
"atmd0exp : DLREFFMASK_EXN",
"atmd0exp : DLREFFMASK_NTM",
"atmd0exp : DLREFFMASK_REF",
"atmd0exp : ATLBRACKET s0exp RBRACKET LPAREN d0expcommaseq RPAREN",
"atmd0exp : ATLBRACKET s0exp RBRACKET LBRACKET d0exp RBRACKET LPAREN d0expcommaseq RPAREN",
"atmd0exp : DLRARRSZ s0expelt LPAREN d0expcommaseq RPAREN",
"atmd0exp : arrqi0de d0arrind",
"atmd0exp : s0elop l0ab",
"atmd0exp : s0elop LBRACKET d0arrind",
"atmd0exp : tmpqi0de t1mps0expseq gtlt_t1mps0expseqseq GT",
"atmd0exp : HASHLBRACKET s0exparg BAR d0exp RBRACKET",
"atmd0exp : LPAREN d0expcommaseq RPAREN",
"atmd0exp : LPAREN d0expcommaseq BAR d0expcommaseq RPAREN",
"atmd0exp : DLRLST_T s0expelt LPAREN d0expcommaseq RPAREN",
"atmd0exp : DLRLST_VT s0expelt LPAREN d0expcommaseq RPAREN",
"atmd0exp : QUOTELBRACKET d0expcommaseq RBRACKET",
"atmd0exp : BEGIN d0expsemiseq0 END",
"atmd0exp : LPAREN d0expsemiseq1 RPAREN",
"atmd0exp : ATLPAREN d0expcommaseq RPAREN",
"atmd0exp : QUOTELPAREN d0expcommaseq RPAREN",
"atmd0exp : DLRTUP_T LPAREN d0expcommaseq RPAREN",
"atmd0exp : DLRTUP_VT LPAREN d0expcommaseq RPAREN",
"atmd0exp : ATLPAREN d0expcommaseq BAR d0expcommaseq RPAREN",
"atmd0exp : QUOTELPAREN d0expcommaseq BAR d0expcommaseq RPAREN",
"atmd0exp : ATLBRACE labd0expseq RBRACE",
"atmd0exp : QUOTELBRACE labd0expseq RBRACE",
"atmd0exp : DLRREC_T LBRACE labd0expseq RBRACE",
"atmd0exp : DLRREC_VT LBRACE labd0expseq RBRACE",
"atmd0exp : DLREXTVAL LPAREN s0exp COMMA LITERAL_string RPAREN",
"atmd0exp : PERCENTLPAREN d0exp RPAREN",
"atmd0exp : COMMALPAREN d0exp RPAREN",
"atmd0exp : BACKQUOTELPAREN d0expsemiseq0 RPAREN",
"atmd0exp : LET d0ecseq_dyn IN d0expsemiseq0 END",
"atmd0exp : LBRACE d0ecseq_dyn RBRACE",
"s0expdarg : LBRACE s0exparg RBRACE",
"s0expdargseq :",
"s0expdargseq : s0expdarg s0expdargseq",
"argd0exp : atmd0exp",
"argd0exp : s0expdarg",
"argd0expseq :",
"argd0expseq : argd0exp argd0expseq",
"d0arrind : d0expcommaseq RBRACKET",
"d0arrind : d0expcommaseq RBRACKET LBRACKET d0arrind",
"colons0expopt :",
"colons0expopt : COLON s0exp",
"funarrow : EQGT",
"funarrow : EQLTGT",
"funarrow : EQLT e0fftagseq GT",
"caseinv :",
"caseinv : i0nvresstate EQGT",
"ifhead : IF caseinv",
"sifhead : SIF caseinv",
"casehead : CASE caseinv",
"casehead : CASEMINUS caseinv",
"casehead : CASEPLUS caseinv",
"scasehead : SCASE caseinv",
"forhead : FOR",
"forhead : FORSTAR loopi0nv EQGT",
"whilehead : WHILESTAR loopi0nv EQGT",
"tryhead : TRY",
"d0expcommaseq :",
"d0expcommaseq : d0exp commad0expseq",
"commad0expseq :",
"commad0expseq : COMMA d0exp commad0expseq",
"d0expsemiseq0 :",
"d0expsemiseq0 : d0exp",
"d0expsemiseq0 : d0exp SEMICOLON d0expsemiseq0",
"d0expsemiseq1 : d0exp SEMICOLON d0expsemiseq0",
"labd0expseq :",
"labd0expseq : l0ab EQ d0exp commalabd0expseq",
"commalabd0expseq :",
"commalabd0expseq : COMMA l0ab EQ d0exp commalabd0expseq",
"m0atch : d0exp",
"m0atch : d0exp AS p0at",
"m0atchseq : m0atch andm0atchseq",
"andm0atchseq :",
"andm0atchseq : AND m0atch andm0atchseq",
"guap0at : p0at",
"guap0at : p0at WHEN m0atchseq",
"c0lau : guap0at EQGT d0exp",
"c0lau : guap0at EQGTGT d0exp",
"c0lau : guap0at EQSLASHEQGT d0exp",
"c0lau : guap0at EQSLASHEQGTGT d0exp",
"c0lauseq : barc0lauseq",
"c0lauseq : c0lau barc0lauseq",
"barc0lauseq :",
"barc0lauseq : BAR c0lau barc0lauseq",
"sc0lau : sp0at EQGT d0exp",
"sc0lauseq : barsc0lauseq",
"sc0lauseq : sc0lau barsc0lauseq",
"barsc0lauseq :",
"barsc0lauseq : BAR sc0lau barsc0lauseq",
"i0nvqua :",
"i0nvqua : LBRACE s0quaseq RBRACE",
"i0nvmet :",
"i0nvmet : DOTLT s0expseq GTDOT",
"i0nvmet : DOTLTGTDOT",
"i0nvarg : di0de COLON",
"i0nvarg : di0de COLON s0exp",
"i0nvargseq :",
"i0nvargseq : i0nvarg commai0nvargseq",
"commai0nvargseq :",
"commai0nvargseq : COMMA i0nvarg commai0nvargseq",
"i0nvargstate : LPAREN i0nvargseq RPAREN",
"i0nvresqua :",
"i0nvresqua : LBRACKET s0quaseq RBRACKET",
"i0nvresstate :",
"i0nvresstate : COLON i0nvresqua LPAREN i0nvargseq RPAREN",
"loopi0nv : i0nvqua i0nvmet i0nvargstate i0nvresstate",
"initestpost : LPAREN d0expcommaseq SEMICOLON d0expcommaseq SEMICOLON d0expcommaseq RPAREN",
"m0arg : pi0de",
"m0argseq :",
"m0argseq : m0arg commam0argseq",
"commam0argseq :",
"commam0argseq : COMMA m0arg commam0argseq",
"m0acarg : m0arg",
"m0acarg : LPAREN m0argseq RPAREN",
"m0acargseq :",
"m0acargseq : m0acarg m0acargseq",
"m0acdef : di0de m0acargseq EQ d0exp",
"andm0acdefseq :",
"andm0acdefseq : AND m0acdef andm0acdefseq",
"v0aldec : p0at EQ d0exp witht0ype",
"andv0aldecseq :",
"andv0aldecseq : AND v0aldec andv0aldecseq",
"f0undec : fi0de f0arg1seq EQ d0exp witht0ype",
"f0undec : fi0de f0arg1seq colonwith s0exp EQ d0exp witht0ype",
"andf0undecseq :",
"andf0undecseq : AND f0undec andf0undecseq",
"v0arwth :",
"v0arwth : WITH pi0de",
"v0ardec : pi0de v0arwth EQ d0exp",
"v0ardec : BANG pi0de v0arwth EQ d0exp",
"v0ardec : pi0de COLON s0exp v0arwth",
"v0ardec : pi0de COLON s0exp v0arwth EQ d0exp",
"andv0ardecseq :",
"andv0ardecseq : AND v0ardec andv0ardecseq",
"i0mpdec : impqi0de f0arg2seq colons0expopt EQ d0exp",
"d0ec : INFIX p0rec i0deseq",
"d0ec : INFIXL p0rec i0deseq",
"d0ec : INFIXR p0rec i0deseq",
"d0ec : PREFIX p0rec i0deseq",
"d0ec : POSTFIX p0rec i0deseq",
"d0ec : NONFIX i0deseq",
"d0ec : SYMINTR i0deseq",
"d0ec : SRPUNDEF i0de",
"d0ec : SRPDEFINE i0de e0xpopt",
"d0ec : SRPASSERT e0xp",
"d0ec : SRPERROR e0xp",
"d0ec : SRPPRINT e0xp",
"d0ec : SORTDEF s0rtdef ands0rtdefseq",
"d0ec : DATASORT d0atsrtdec andd0atsrtdecseq",
"d0ec : DATAPARASORT d0atsrtdec andd0atsrtdecseq",
"d0ec : abskind s0tacon ands0taconseq",
"d0ec : STACST s0tacst ands0tacstseq",
"d0ec : STAVAR s0tavar ands0tavarseq",
"d0ec : stadefkind s0expdef ands0expdefseq",
"d0ec : ASSUME s0aspdec",
"d0ec : datakind d0atdec andd0atdecseq s0expdefseqopt",
"d0ec : EXCEPTION e0xndec ande0xndecseq",
"d0ec : CLASSDEC si0de",
"d0ec : CLASSDEC si0de COLON s0exp",
"d0ec : OVERLOAD di0de WITH dqi0de",
"d0ec : OVERLOAD LBRACKET RBRACKET WITH dqi0de",
"d0ec : MACDEF m0acdef andm0acdefseq",
"d0ec : MACDEF REC m0acdef andm0acdefseq",
"d0ec : MACRODEF m0acdef andm0acdefseq",
"d0ec : MACRODEF REC m0acdef andm0acdefseq",
"d0ec : STALOAD LITERAL_string",
"d0ec : STALOAD stai0de EQ LITERAL_string",
"d0ecarg : LBRACE s0quaseq RBRACE",
"d0ecargseq :",
"d0ecargseq : d0ecarg d0ecargseq",
"semicolonseq :",
"semicolonseq : semicolonseq SEMICOLON",
"d0ec_sta : d0ec",
"d0ec_sta : dcstkind d0ecargseq d0cstdec andd0cstdecseq",
"d0ec_sta : LITERAL_extcode",
"d0ec_sta : srpifkind guad0ec_sta",
"d0ec_sta : SRPINCLUDE LITERAL_string",
"d0ec_sta : LOCAL d0ecseq_sta IN d0ecseq_sta END",
"guad0ec_sta : e0xp srpthenopt d0ecseq_sta SRPENDIF",
"guad0ec_sta : e0xp srpthenopt d0ecseq_sta SRPELSE d0ecseq_sta SRPENDIF",
"guad0ec_sta : e0xp srpthenopt d0ecseq_sta srpelifkind guad0ec_sta",
"d0ecseq_sta : d0ecseq_sta_rev",
"d0ecseq_sta_rev :",
"d0ecseq_sta_rev : d0ecseq_sta_rev d0ec_sta semicolonseq",
"d0ec_dyn : d0ec",
"d0ec_dyn : EXTERN dcstkind d0ecargseq d0cstdec andd0cstdecseq",
"d0ec_dyn : EXTERN TYPEDEF LITERAL_string EQ s0exp",
"d0ec_dyn : EXTERN VAL LITERAL_string EQ d0exp",
"d0ec_dyn : valkind v0aldec andv0aldecseq",
"d0ec_dyn : VAL PAR v0aldec andv0aldecseq",
"d0ec_dyn : VAL REC v0aldec andv0aldecseq",
"d0ec_dyn : funkind d0ecargseq f0undec andf0undecseq",
"d0ec_dyn : VAR v0ardec andv0ardecseq",
"d0ec_dyn : IMPLEMENT decs0argseqseq i0mpdec",
"d0ec_dyn : LOCAL d0ecseq_dyn IN d0ecseq_dyn END",
"d0ec_dyn : LITERAL_extcode",
"d0ec_dyn : srpifkind guad0ec_dyn",
"d0ec_dyn : SRPINCLUDE LITERAL_string",
"d0ec_dyn : DYNLOAD LITERAL_string",
"guad0ec_dyn : e0xp srpthenopt d0ecseq_dyn SRPENDIF",
"guad0ec_dyn : e0xp srpthenopt d0ecseq_dyn SRPELSE d0ecseq_dyn SRPENDIF",
"guad0ec_dyn : e0xp srpthenopt d0ecseq_dyn srpelifkind guad0ec_dyn",
"d0ecseq_dyn : d0ecseq_dyn_rev",
"d0ecseq_dyn_rev :",
"d0ecseq_dyn_rev : d0ecseq_dyn_rev d0ec_dyn semicolonseq",

};
#endif
/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 2816 "ats_grammar.yats"

/* ****** ****** */

int
yylex_tok0 = -1 ;

int
yylex() {
//
  int tok ;
//
  if (yylex_tok0 >= 0) {
    tok = yylex_tok0 ; yylex_tok0 = -1 ;
  } else {
    tok = atsopt_lexer_token_get () ;
  } // end of [if]
/*
** fprintf (stdout, "tok = %i\n", tok) ;
*/
  return tok ;
//
} /* end of [yylex_tok0] */

//
// HX: needed in [ats_lexer.lats]
//
ats_void_type
yylval_char_set(c0har_t val)
  { yylval.c0har = val ; return ; }

ats_void_type
yylval_extcode_set(e0xtcode_t val)
  { yylval.e0xtcode = val ; return ; }

ats_void_type
yylval_float_set(f0loat_t val)
  { yylval.f0loat = val ; return ; }

ats_void_type
yylval_floatsp_set(f0loatsp_t val)
  { yylval.f0loatsp = val ; return ; }

ats_void_type
yylval_ide_set(i0de_t val)
  { yylval.i0de = val ; return ; }

ats_void_type
yylval_int_set(i0nt_t val)
  { yylval.i0nt = val ; return ; }

ats_void_type
yylval_intsp_set(i0ntsp_t val)
  { yylval.i0ntsp = val ; return ; }

ats_void_type
yylval_string_set(s0tring_t val)
  { yylval.s0tring = val ; return ; }

ats_void_type
yylval_token_set(t0kn_t val)
  { yylval.t0kn = val ; return ; }

// HX: see [stdlib.h]
extern void exit (int) ;
//
// HX: implemented in [ats_filename.dats]
extern ats_void_type atsopt_filename_prerr () ;
//
extern ats_ptr_type lexing_fstpos_get () ;
extern ats_void_type lexing_prerr_position (ats_ptr_type) ;
//
void
yyerror (char *s) {
  fprintf (stderr, "%s: ", s) ;
  atsopt_filename_prerr () ;
  fprintf (stderr, ": [") ;
  lexing_prerr_position (lexing_fstpos_get ()) ;
  fprintf (stderr, "]\n") ;
  exit (1) ; // HX: no error recovery yet; maybe in future
  return ;
} /* end of [yyerror] */

yyres_t
yyparse_main (
  ats_int_type tok0
) {
/*
** HX: we must take care of garbage collection!
*/
  // fprintf (stderr, "yyparse_main: &yyss = %p\n", &yyss) ;
  // ATS_GC_MARKROOT (&yyss, sizeof(short*)) ; // [ats_malloc_ngc] is used
  // fprintf (stderr, "yyparse_main: &yyvs = %p\n", &yyvs) ;
  // ATS_GC_MARKROOT (&yyvs, sizeof(YYSTYPE*)) ;  // [ats_malloc_ngc] is used
/*
** HX-2010-02-25:
** if BISON is used then [yyval] is a stack variable and
** thus there is no need to treat it as a GC root explicitly
*/
//
#ifndef _ATS_YYVALISLOCAL
  extern YYSTYPE yyval;
  // fprintf (stderr, "yyparse_main: &yyval = %p\n", &yyval) ;
  ATS_GC_MARKROOT (&yyval, sizeof(YYSTYPE)) ;
#endif // end of [_ATS_YYVALISLOCAL]
//
  extern YYSTYPE yylval;
  // fprintf (stderr, "yyparse_main: &yylval = %p\n", &yylval) ;
  ATS_GC_MARKROOT (&yylval, sizeof(YYSTYPE)) ;
//
#ifdef YYPATCH
#if (YYPATCH >= 20101229)
  // fprintf (stderr, "yyparse_main: &yystack = %p\n", &yystack) ;
  ATS_GC_MARKROOT (&yystack, sizeof(YYSTACKDATA)) ;
#endif
#endif
//
  yylex_tok0 = tok0 ;
//
  yyparse () ;
//
  return theYYVALyyres ;
} /* end of [yyparse_main] */

/* ****** ****** */

// end of [ats_grammar.yats]
#line 6970 "ats_grammar_yats.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 1553 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_d0eclst(yystack.l_mark[-1].d0eclst) ; return 0 ; }
break;
case 2:
#line 1554 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_d0eclst(yystack.l_mark[-1].d0eclst) ; return 0 ; }
break;
case 3:
#line 1555 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_i0de(yystack.l_mark[-1].i0de) ; return 0 ; }
break;
case 4:
#line 1556 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_i0de(yystack.l_mark[-1].i0de) ; return 0 ; }
break;
case 5:
#line 1557 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_i0de(yystack.l_mark[-1].i0de) ; return 0 ; }
break;
case 6:
#line 1558 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_i0de(yystack.l_mark[-1].i0de) ; return 0 ; }
break;
case 7:
#line 1559 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_s0exp(yystack.l_mark[-1].s0exp) ; return 0 ; }
break;
case 8:
#line 1560 "ats_grammar.yats"
	{ theYYVALyyres = atsopt_yyres_d0exp(yystack.l_mark[-1].d0exp) ; return 0 ; }
break;
case 9:
#line 1564 "ats_grammar.yats"
	{ yyval.abskind = abskind_prop () ; }
break;
case 10:
#line 1565 "ats_grammar.yats"
	{ yyval.abskind = abskind_type () ; }
break;
case 11:
#line 1566 "ats_grammar.yats"
	{ yyval.abskind = abskind_t0ype () ; }
break;
case 12:
#line 1567 "ats_grammar.yats"
	{ yyval.abskind = abskind_view () ; }
break;
case 13:
#line 1568 "ats_grammar.yats"
	{ yyval.abskind = abskind_viewtype () ; }
break;
case 14:
#line 1569 "ats_grammar.yats"
	{ yyval.abskind = abskind_viewt0ype () ; }
break;
case 15:
#line 1573 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_fun () ; }
break;
case 16:
#line 1574 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_val () ; }
break;
case 17:
#line 1575 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_castfn () ; }
break;
case 18:
#line 1576 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_praxi () ; }
break;
case 19:
#line 1577 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_prfun () ; }
break;
case 20:
#line 1578 "ats_grammar.yats"
	{ yyval.dcstkind = dcstkind_prval () ; }
break;
case 21:
#line 1582 "ats_grammar.yats"
	{ yyval.datakind = datakind_prop () ; }
break;
case 22:
#line 1583 "ats_grammar.yats"
	{ yyval.datakind = datakind_type () ; }
break;
case 23:
#line 1584 "ats_grammar.yats"
	{ yyval.datakind = datakind_view () ; }
break;
case 24:
#line 1585 "ats_grammar.yats"
	{ yyval.datakind = datakind_viewtype () ; }
break;
case 25:
#line 1589 "ats_grammar.yats"
	{ yyval.stadefkind = stadefkind_generic () ; }
break;
case 26:
#line 1590 "ats_grammar.yats"
	{ yyval.stadefkind = stadefkind_prop (yystack.l_mark[0].t0kn) ; }
break;
case 27:
#line 1591 "ats_grammar.yats"
	{ yyval.stadefkind = stadefkind_type (yystack.l_mark[0].t0kn) ; }
break;
case 28:
#line 1592 "ats_grammar.yats"
	{ yyval.stadefkind = stadefkind_view (yystack.l_mark[0].t0kn) ; }
break;
case 29:
#line 1593 "ats_grammar.yats"
	{ yyval.stadefkind = stadefkind_viewtype (yystack.l_mark[0].t0kn) ; }
break;
case 30:
#line 1597 "ats_grammar.yats"
	{ yyval.valkind = valkind_val () ; }
break;
case 31:
#line 1598 "ats_grammar.yats"
	{ yyval.valkind = valkind_valminus () ; }
break;
case 32:
#line 1599 "ats_grammar.yats"
	{ yyval.valkind = valkind_valplus () ; }
break;
case 33:
#line 1600 "ats_grammar.yats"
	{ yyval.valkind = valkind_prval () ; }
break;
case 34:
#line 1604 "ats_grammar.yats"
	{ yyval.funkind = funkind_fn () ; }
break;
case 35:
#line 1605 "ats_grammar.yats"
	{ yyval.funkind = funkind_fnstar () ; }
break;
case 36:
#line 1606 "ats_grammar.yats"
	{ yyval.funkind = funkind_fun () ; }
break;
case 37:
#line 1607 "ats_grammar.yats"
	{ yyval.funkind = funkind_castfn () ; }
break;
case 38:
#line 1608 "ats_grammar.yats"
	{ yyval.funkind = funkind_prfn () ; }
break;
case 39:
#line 1609 "ats_grammar.yats"
	{ yyval.funkind = funkind_prfun () ; }
break;
case 40:
#line 1613 "ats_grammar.yats"
	{ yyval.lamkind = lamkind_lam (yystack.l_mark[0].t0kn) ; }
break;
case 41:
#line 1614 "ats_grammar.yats"
	{ yyval.lamkind = lamkind_atlam (yystack.l_mark[0].t0kn) ; }
break;
case 42:
#line 1615 "ats_grammar.yats"
	{ yyval.lamkind = lamkind_llam (yystack.l_mark[0].t0kn) ; }
break;
case 43:
#line 1616 "ats_grammar.yats"
	{ yyval.lamkind = lamkind_atllam (yystack.l_mark[0].t0kn) ; }
break;
case 44:
#line 1620 "ats_grammar.yats"
	{ yyval.fixkind = fixkind_fix (yystack.l_mark[0].t0kn) ; }
break;
case 45:
#line 1621 "ats_grammar.yats"
	{ yyval.fixkind = fixkind_atfix (yystack.l_mark[0].t0kn) ; }
break;
case 46:
#line 1625 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_if (yystack.l_mark[0].t0kn) ; }
break;
case 47:
#line 1626 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_ifdef (yystack.l_mark[0].t0kn) ; }
break;
case 48:
#line 1627 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_ifndef (yystack.l_mark[0].t0kn) ; }
break;
case 49:
#line 1631 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_if (yystack.l_mark[0].t0kn) ; }
break;
case 50:
#line 1632 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_ifdef (yystack.l_mark[0].t0kn) ; }
break;
case 51:
#line 1633 "ats_grammar.yats"
	{ yyval.srpifkindtok = srpifkindtok_ifndef (yystack.l_mark[0].t0kn) ; }
break;
case 52:
#line 1637 "ats_grammar.yats"
	{ ; }
break;
case 53:
#line 1638 "ats_grammar.yats"
	{ ; }
break;
case 54:
#line 1642 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 55:
#line 1643 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 56:
#line 1644 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_ampersand(yystack.l_mark[0].t0kn) ; }
break;
case 57:
#line 1645 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_backslash(yystack.l_mark[0].t0kn) ; }
break;
case 58:
#line 1646 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_bang(yystack.l_mark[0].t0kn) ; }
break;
case 59:
#line 1647 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_eq(yystack.l_mark[0].t0kn) ; }
break;
case 60:
#line 1648 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_gt(yystack.l_mark[0].t0kn) ; }
break;
case 61:
#line 1649 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_gtlt(yystack.l_mark[0].t0kn) ; }
break;
case 62:
#line 1650 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_lt(yystack.l_mark[0].t0kn) ; }
break;
case 63:
#line 1651 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_minusgt(yystack.l_mark[0].t0kn) ; }
break;
case 64:
#line 1652 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_minusltgt(yystack.l_mark[0].t0kn) ; }
break;
case 65:
#line 1653 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_tilde(yystack.l_mark[0].t0kn) ; }
break;
case 66:
#line 1657 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 67:
#line 1661 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_nil() ; }
break;
case 68:
#line 1662 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_cons(yystack.l_mark[-1].i0de, yystack.l_mark[0].i0delst) ; }
break;
case 69:
#line 1666 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 70:
#line 1667 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_DO(yystack.l_mark[0].t0kn) ; }
break;
case 71:
#line 1668 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_WHILE(yystack.l_mark[0].t0kn) ; }
break;
case 72:
#line 1672 "ats_grammar.yats"
	{ yyval.l0ab = l0ab_ide(yystack.l_mark[0].i0de) ; }
break;
case 73:
#line 1673 "ats_grammar.yats"
	{ yyval.l0ab = l0ab_int(yystack.l_mark[0].i0nt) ; }
break;
case 74:
#line 1674 "ats_grammar.yats"
	{ yyval.l0ab = yystack.l_mark[-1].l0ab ; }
break;
case 75:
#line 1678 "ats_grammar.yats"
	{ yyval.i0de = stai0de_make(yystack.l_mark[0].i0de) ; }
break;
case 76:
#line 1682 "ats_grammar.yats"
	{ yyval.p0rec = p0rec_emp() ; }
break;
case 77:
#line 1683 "ats_grammar.yats"
	{ yyval.p0rec = p0rec_int(yystack.l_mark[0].i0nt) ; }
break;
case 78:
#line 1684 "ats_grammar.yats"
	{ yyval.p0rec = p0rec_ide(yystack.l_mark[-1].i0de) ; }
break;
case 79:
#line 1685 "ats_grammar.yats"
	{ yyval.p0rec = p0rec_opr(yystack.l_mark[-3].i0de, yystack.l_mark[-2].i0de, yystack.l_mark[-1].i0nt) ; }
break;
case 80:
#line 1689 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_app(yystack.l_mark[-1].e0xp, yystack.l_mark[0].e0xp) ; }
break;
case 81:
#line 1690 "ats_grammar.yats"
	{ yyval.e0xp = yystack.l_mark[0].e0xp ; }
break;
case 82:
#line 1694 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_char(yystack.l_mark[0].c0har) ; }
break;
case 83:
#line 1695 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_float(yystack.l_mark[0].f0loat) ; }
break;
case 84:
#line 1696 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_int(yystack.l_mark[0].i0nt) ; }
break;
case 85:
#line 1697 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_string(yystack.l_mark[0].s0tring) ; }
break;
case 86:
#line 1698 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_ide(yystack.l_mark[0].i0de) ; }
break;
case 87:
#line 1699 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_list(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].e0xplst, yystack.l_mark[0].t0kn) ; }
break;
case 88:
#line 1700 "ats_grammar.yats"
	{ yyval.e0xp = e0xp_eval(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].e0xp, yystack.l_mark[0].t0kn) ; }
break;
case 89:
#line 1704 "ats_grammar.yats"
	{ yyval.e0xplst = e0xplst_nil() ; }
break;
case 90:
#line 1705 "ats_grammar.yats"
	{ yyval.e0xplst = e0xplst_cons(yystack.l_mark[-1].e0xp, yystack.l_mark[0].e0xplst) ; }
break;
case 91:
#line 1709 "ats_grammar.yats"
	{ yyval.e0xplst = e0xplst_nil() ; }
break;
case 92:
#line 1710 "ats_grammar.yats"
	{ yyval.e0xplst = e0xplst_cons(yystack.l_mark[-1].e0xp, yystack.l_mark[0].e0xplst) ; }
break;
case 93:
#line 1714 "ats_grammar.yats"
	{ yyval.e0xpopt = e0xpopt_none() ; }
break;
case 94:
#line 1715 "ats_grammar.yats"
	{ yyval.e0xpopt = e0xpopt_some(yystack.l_mark[0].e0xp) ; }
break;
case 95:
#line 1719 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 96:
#line 1723 "ats_grammar.yats"
	{ yyval.e0fftag = e0fftag_cst (0, yystack.l_mark[0].i0de) ; }
break;
case 97:
#line 1724 "ats_grammar.yats"
	{ yyval.e0fftag = e0fftag_cst (1, yystack.l_mark[0].i0de) ; }
break;
case 98:
#line 1725 "ats_grammar.yats"
	{ yyval.e0fftag = e0fftag_var(yystack.l_mark[0].i0de) ; }
break;
case 99:
#line 1726 "ats_grammar.yats"
	{ yyval.e0fftag = e0fftag_var_fun(yystack.l_mark[0].t0kn) ; }
break;
case 100:
#line 1727 "ats_grammar.yats"
	{ yyval.e0fftag = e0fftag_int(yystack.l_mark[0].i0nt) ; }
break;
case 101:
#line 1731 "ats_grammar.yats"
	{ yyval.e0fftaglst = e0fftaglst_nil() ; }
break;
case 102:
#line 1732 "ats_grammar.yats"
	{ yyval.e0fftaglst = e0fftaglst_cons(yystack.l_mark[-1].e0fftag, yystack.l_mark[0].e0fftaglst) ; }
break;
case 103:
#line 1736 "ats_grammar.yats"
	{ yyval.e0fftaglst = e0fftaglst_nil() ; }
break;
case 104:
#line 1737 "ats_grammar.yats"
	{ yyval.e0fftaglst = e0fftaglst_cons(yystack.l_mark[-1].e0fftag, yystack.l_mark[0].e0fftaglst) ; }
break;
case 105:
#line 1741 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_none() ; }
break;
case 106:
#line 1742 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_some(e0fftaglst_nil()) ; }
break;
case 107:
#line 1743 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_some(yystack.l_mark[-1].e0fftaglst) ; }
break;
case 108:
#line 1747 "ats_grammar.yats"
	{ yyval.s0rt = s0rt_app(yystack.l_mark[-1].s0rt, yystack.l_mark[0].s0rt) ; }
break;
case 109:
#line 1748 "ats_grammar.yats"
	{ yyval.s0rt = yystack.l_mark[0].s0rt ; }
break;
case 110:
#line 1752 "ats_grammar.yats"
	{ yyval.s0rtq = s0rtq_sym(yystack.l_mark[-1].i0de) ; }
break;
case 111:
#line 1753 "ats_grammar.yats"
	{ yyval.s0rtq = s0rtq_str(yystack.l_mark[-1].s0tring) ; }
break;
case 112:
#line 1757 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 113:
#line 1758 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 114:
#line 1759 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_t0ype(yystack.l_mark[0].t0kn) ; }
break;
case 115:
#line 1760 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_viewt0ype(yystack.l_mark[0].t0kn) ; }
break;
case 116:
#line 1761 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_backslash(yystack.l_mark[0].t0kn) ; }
break;
case 117:
#line 1762 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_minusgt(yystack.l_mark[0].t0kn) ; }
break;
case 118:
#line 1763 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_minusltgt(yystack.l_mark[0].t0kn) ; }
break;
case 119:
#line 1767 "ats_grammar.yats"
	{ yyval.s0rt = s0rt_ide(yystack.l_mark[0].i0de) ; }
break;
case 120:
#line 1768 "ats_grammar.yats"
	{ yyval.s0rt = s0rt_qid(yystack.l_mark[-1].s0rtq, yystack.l_mark[0].i0de) ; }
break;
case 121:
#line 1769 "ats_grammar.yats"
	{ yyval.s0rt = s0rt_list(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0rtlst, yystack.l_mark[0].t0kn) ; }
break;
case 122:
#line 1770 "ats_grammar.yats"
	{ yyval.s0rt = s0rt_tup(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0rtlst, yystack.l_mark[0].t0kn) ; }
break;
case 123:
#line 1774 "ats_grammar.yats"
	{ yyval.s0rtlst = s0rtlst_nil() ; }
break;
case 124:
#line 1775 "ats_grammar.yats"
	{ yyval.s0rtlst = s0rtlst_cons(yystack.l_mark[-1].s0rt, yystack.l_mark[0].s0rtlst) ; }
break;
case 125:
#line 1779 "ats_grammar.yats"
	{ yyval.s0rtlst = s0rtlst_nil() ; }
break;
case 126:
#line 1780 "ats_grammar.yats"
	{ yyval.s0rtlst = s0rtlst_cons(yystack.l_mark[-1].s0rt, yystack.l_mark[0].s0rtlst) ; }
break;
case 127:
#line 1784 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(yystack.l_mark[0].s0rt, 0) ; }
break;
case 128:
#line 1785 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_prop(yystack.l_mark[0].t0kn), -1) ; }
break;
case 129:
#line 1786 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_prop(yystack.l_mark[0].t0kn),  1) ; }
break;
case 130:
#line 1787 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_type(yystack.l_mark[0].t0kn), -1) ; }
break;
case 131:
#line 1788 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_type(yystack.l_mark[0].t0kn),  1) ; }
break;
case 132:
#line 1789 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_t0ype(yystack.l_mark[0].t0kn), -1) ; }
break;
case 133:
#line 1790 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_t0ype(yystack.l_mark[0].t0kn),  1) ; }
break;
case 134:
#line 1791 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_view(yystack.l_mark[0].t0kn), -1) ; }
break;
case 135:
#line 1792 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_view(yystack.l_mark[0].t0kn),  1) ; }
break;
case 136:
#line 1793 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_viewtype(yystack.l_mark[0].t0kn), -1) ; }
break;
case 137:
#line 1794 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_viewtype(yystack.l_mark[0].t0kn),  1) ; }
break;
case 138:
#line 1795 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_viewt0ype(yystack.l_mark[0].t0kn), -1) ; }
break;
case 139:
#line 1796 "ats_grammar.yats"
	{ yyval.s0rtpol = s0rtpol_make(s0rt_viewt0ype(yystack.l_mark[0].t0kn),  1) ; }
break;
case 140:
#line 1800 "ats_grammar.yats"
	{ yyval.d0atsrtcon = d0atsrtcon_make_none(yystack.l_mark[0].i0de) ; }
break;
case 141:
#line 1801 "ats_grammar.yats"
	{ yyval.d0atsrtcon = d0atsrtcon_make_some(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0rt) ; }
break;
case 142:
#line 1805 "ats_grammar.yats"
	{ yyval.d0atsrtconlst = yystack.l_mark[0].d0atsrtconlst ; }
break;
case 143:
#line 1806 "ats_grammar.yats"
	{ yyval.d0atsrtconlst = d0atsrtconlst_cons(yystack.l_mark[-1].d0atsrtcon, yystack.l_mark[0].d0atsrtconlst) ; }
break;
case 144:
#line 1810 "ats_grammar.yats"
	{ yyval.d0atsrtconlst = d0atsrtconlst_nil() ; }
break;
case 145:
#line 1811 "ats_grammar.yats"
	{ yyval.d0atsrtconlst = d0atsrtconlst_cons(yystack.l_mark[-1].d0atsrtcon, yystack.l_mark[0].d0atsrtconlst) ; }
break;
case 146:
#line 1815 "ats_grammar.yats"
	{ yyval.d0atsrtdec = d0atsrtdec_make(yystack.l_mark[-2].i0de, yystack.l_mark[0].d0atsrtconlst) ; }
break;
case 147:
#line 1819 "ats_grammar.yats"
	{ yyval.d0atsrtdeclst = d0atsrtdeclst_nil() ; }
break;
case 148:
#line 1820 "ats_grammar.yats"
	{ yyval.d0atsrtdeclst = d0atsrtdeclst_cons(yystack.l_mark[-1].d0atsrtdec, yystack.l_mark[0].d0atsrtdeclst) ; }
break;
case 149:
#line 1824 "ats_grammar.yats"
	{ yyval.s0taq = s0taq_symdot(yystack.l_mark[-1].i0de) ; }
break;
case 150:
#line 1825 "ats_grammar.yats"
	{ yyval.s0taq = s0taq_symcolon(yystack.l_mark[-1].i0de) ; }
break;
case 151:
#line 1826 "ats_grammar.yats"
	{ yyval.s0taq = s0taq_fildot(yystack.l_mark[-1].s0tring) ; }
break;
case 152:
#line 1830 "ats_grammar.yats"
	{ yyval.d0ynq = d0ynq_symdot(yystack.l_mark[-1].i0de) ; }
break;
case 153:
#line 1831 "ats_grammar.yats"
	{ yyval.d0ynq = d0ynq_symcolon(yystack.l_mark[-1].i0de) ; }
break;
case 154:
#line 1832 "ats_grammar.yats"
	{ yyval.d0ynq = d0ynq_symdot_symcolon (yystack.l_mark[-2].i0de, yystack.l_mark[-1].i0de) ; }
break;
case 155:
#line 1833 "ats_grammar.yats"
	{ yyval.d0ynq = d0ynq_fildot(yystack.l_mark[-1].s0tring) ; }
break;
case 156:
#line 1834 "ats_grammar.yats"
	{ yyval.d0ynq = d0ynq_fildot_symcolon(yystack.l_mark[-2].s0tring, yystack.l_mark[-1].i0de) ; }
break;
case 157:
#line 1838 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 158:
#line 1839 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 159:
#line 1840 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_r0ead(yystack.l_mark[0].t0kn) ; }
break;
case 160:
#line 1841 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_ampersand(yystack.l_mark[0].t0kn) ; }
break;
case 161:
#line 1842 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_backslash(yystack.l_mark[0].t0kn) ; }
break;
case 162:
#line 1843 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_bang(yystack.l_mark[0].t0kn) ; }
break;
case 163:
#line 1844 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_gt(yystack.l_mark[0].t0kn) ; }
break;
case 164:
#line 1845 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_lt(yystack.l_mark[0].t0kn) ; }
break;
case 165:
#line 1846 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_minusgt(yystack.l_mark[0].t0kn) ; }
break;
case 166:
#line 1847 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_tilde(yystack.l_mark[0].t0kn) ; }
break;
case 167:
#line 1851 "ats_grammar.yats"
	{ yyval.sqi0de = sqi0de_make_none(yystack.l_mark[0].i0de) ; }
break;
case 168:
#line 1852 "ats_grammar.yats"
	{ yyval.sqi0de = sqi0de_make_some(yystack.l_mark[-1].s0taq, yystack.l_mark[0].i0de) ; }
break;
case 169:
#line 1856 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_nil() ; }
break;
case 170:
#line 1857 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_cons(yystack.l_mark[-1].i0de, yystack.l_mark[0].i0delst) ; }
break;
case 171:
#line 1861 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 172:
#line 1862 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 173:
#line 1863 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_backslash(yystack.l_mark[0].t0kn) ; }
break;
case 174:
#line 1864 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_bang(yystack.l_mark[0].t0kn) ; }
break;
case 175:
#line 1865 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_eq(yystack.l_mark[0].t0kn) ; }
break;
case 176:
#line 1866 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_gt(yystack.l_mark[0].t0kn) ; }
break;
case 177:
#line 1867 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_gtlt(yystack.l_mark[0].t0kn) ; }
break;
case 178:
#line 1868 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_lt(yystack.l_mark[0].t0kn) ; }
break;
case 179:
#line 1869 "ats_grammar.yats"
	{ yyval.i0de = i0de_make_tilde(yystack.l_mark[0].t0kn) ; }
break;
case 180:
#line 1873 "ats_grammar.yats"
	{ yyval.dqi0de = dqi0de_make_none(yystack.l_mark[0].i0de) ; }
break;
case 181:
#line 1874 "ats_grammar.yats"
	{ yyval.dqi0de = dqi0de_make_some(yystack.l_mark[-1].d0ynq, yystack.l_mark[0].i0de) ; }
break;
case 182:
#line 1878 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 183:
#line 1879 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 184:
#line 1883 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 185:
#line 1884 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 186:
#line 1888 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 187:
#line 1892 "ats_grammar.yats"
	{ yyval.arrqi0de = arrqi0de_make_none(yystack.l_mark[0].i0de) ; }
break;
case 188:
#line 1893 "ats_grammar.yats"
	{ yyval.arrqi0de = arrqi0de_make_some(yystack.l_mark[-1].d0ynq, yystack.l_mark[0].i0de) ; }
break;
case 189:
#line 1897 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 190:
#line 1901 "ats_grammar.yats"
	{ yyval.tmpqi0de = tmpqi0de_make_none(yystack.l_mark[0].i0de) ; }
break;
case 191:
#line 1902 "ats_grammar.yats"
	{ yyval.tmpqi0de = tmpqi0de_make_some(yystack.l_mark[-1].d0ynq, yystack.l_mark[0].i0de) ; }
break;
case 192:
#line 1906 "ats_grammar.yats"
	{ yyval.s0rtopt = s0rtopt_none() ; }
break;
case 193:
#line 1907 "ats_grammar.yats"
	{ yyval.s0rtopt = s0rtopt_some(yystack.l_mark[0].s0rt) ; }
break;
case 194:
#line 1911 "ats_grammar.yats"
	{ yyval.s0arg = s0arg_make(yystack.l_mark[-1].i0de, yystack.l_mark[0].s0rtopt) ; }
break;
case 195:
#line 1915 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_nil() ; }
break;
case 196:
#line 1916 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_cons(yystack.l_mark[-1].s0arg, yystack.l_mark[0].s0arglst) ; }
break;
case 197:
#line 1920 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_nil() ; }
break;
case 198:
#line 1921 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_cons(yystack.l_mark[-1].s0arg, yystack.l_mark[0].s0arglst) ; }
break;
case 199:
#line 1925 "ats_grammar.yats"
	{ yyval.s0arglstlst = s0arglstlst_nil() ; }
break;
case 200:
#line 1926 "ats_grammar.yats"
	{ yyval.s0arglstlst = s0arglstlst_cons_ide(yystack.l_mark[-1].i0de, yystack.l_mark[0].s0arglstlst) ; }
break;
case 201:
#line 1927 "ats_grammar.yats"
	{ yyval.s0arglstlst = s0arglstlst_cons(yystack.l_mark[-2].s0arglst, yystack.l_mark[0].s0arglstlst); }
break;
case 202:
#line 1931 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_nil() ; }
break;
case 203:
#line 1932 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_cons(yystack.l_mark[-1].s0arg, yystack.l_mark[0].s0arglst) ; }
break;
case 204:
#line 1936 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_nil() ; }
break;
case 205:
#line 1937 "ats_grammar.yats"
	{ yyval.s0arglst = s0arglst_cons(yystack.l_mark[-1].s0arg, yystack.l_mark[0].s0arglst) ; }
break;
case 206:
#line 1941 "ats_grammar.yats"
	{ yyval.s0arglstlst = s0arglstlst_nil() ; }
break;
case 207:
#line 1942 "ats_grammar.yats"
	{ yyval.s0arglstlst = s0arglstlst_cons(yystack.l_mark[-2].s0arglst, yystack.l_mark[0].s0arglstlst) ; }
break;
case 208:
#line 1946 "ats_grammar.yats"
	{ yyval.sp0at = sp0at_con(yystack.l_mark[-3].sqi0de, yystack.l_mark[-1].s0arglst, yystack.l_mark[0].t0kn) ; }
break;
case 209:
#line 1950 "ats_grammar.yats"
	{ yyval.s0exp = yystack.l_mark[0].s0exp ; }
break;
case 210:
#line 1951 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_extern(yystack.l_mark[0].s0expext) ; }
break;
case 211:
#line 1952 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_ann(yystack.l_mark[-2].s0exp, yystack.l_mark[0].s0rt) ; }
break;
case 212:
#line 1953 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_lams(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0arglstlst, yystack.l_mark[-2].s0rtopt, yystack.l_mark[0].s0exp) ; }
break;
case 213:
#line 1957 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_char(yystack.l_mark[0].c0har) ; }
break;
case 214:
#line 1958 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_int(yystack.l_mark[0].i0nt) ; }
break;
case 215:
#line 1959 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_intsp_err(yystack.l_mark[0].i0ntsp) ; }
break;
case 216:
#line 1960 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_ide(yystack.l_mark[0].i0de) ; }
break;
case 217:
#line 1961 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_opide(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0de) ; }
break;
case 218:
#line 1962 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_qid(yystack.l_mark[-1].s0taq, yystack.l_mark[0].i0de) ; }
break;
case 219:
#line 1963 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_list(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 220:
#line 1964 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_list2(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0explst, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 221:
#line 1965 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup(0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 222:
#line 1966 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup(1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 223:
#line 1967 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup(2, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 224:
#line 1968 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup(3, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 225:
#line 1969 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup2(0, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0explst, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 226:
#line 1970 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup2(1, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0explst, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 227:
#line 1971 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup2(2, yystack.l_mark[-5].t0kn, yystack.l_mark[-3].s0explst, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 228:
#line 1972 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tytup2(3, yystack.l_mark[-5].t0kn, yystack.l_mark[-3].s0explst, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 229:
#line 1973 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyrec(0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labs0explst, yystack.l_mark[0].t0kn) ; }
break;
case 230:
#line 1974 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyrec(1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labs0explst, yystack.l_mark[0].t0kn) ; }
break;
case 231:
#line 1975 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyrec(2, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].labs0explst, yystack.l_mark[0].t0kn) ; }
break;
case 232:
#line 1976 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyrec(3, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].labs0explst, yystack.l_mark[0].t0kn) ; }
break;
case 233:
#line 1977 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyrec_ext(yystack.l_mark[-5].t0kn, yystack.l_mark[-4].s0tring, yystack.l_mark[-1].labs0explst, yystack.l_mark[0].t0kn) ; }
break;
case 234:
#line 1978 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_tyarr(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0exp, yystack.l_mark[0].s0arrind) ; }
break;
case 235:
#line 1979 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_imp(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].e0fftaglst, yystack.l_mark[0].t0kn) ; }
break;
case 236:
#line 1980 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_imp_emp(yystack.l_mark[0].t0kn) ; }
break;
case 237:
#line 1981 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_uni(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0qualst, yystack.l_mark[0].t0kn) ; }
break;
case 238:
#line 1982 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_exi(yystack.l_mark[-2].t0kn, 0/*funres*/, yystack.l_mark[-1].s0qualst, yystack.l_mark[0].t0kn) ; }
break;
case 239:
#line 1983 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_exi(yystack.l_mark[-2].t0kn, 1/*funres*/, yystack.l_mark[-1].s0qualst, yystack.l_mark[0].t0kn) ; }
break;
case 240:
#line 1987 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_app(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0exp) ; }
break;
case 241:
#line 1988 "ats_grammar.yats"
	{ yyval.s0exp = yystack.l_mark[0].s0exp ; }
break;
case 242:
#line 1992 "ats_grammar.yats"
	{ yyval.s0expext = s0expext_nam(yystack.l_mark[-1].t0kn, yystack.l_mark[0].s0tring) ; }
break;
case 243:
#line 1993 "ats_grammar.yats"
	{ yyval.s0expext = s0expext_app(yystack.l_mark[-1].s0expext, yystack.l_mark[0].s0exp) ; }
break;
case 244:
#line 1997 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_none () ; }
break;
case 245:
#line 1998 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_some (yystack.l_mark[-1].s0exp) ; }
break;
case 246:
#line 1999 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_some (yystack.l_mark[-1].s0exp) ; }
break;
case 247:
#line 2003 "ats_grammar.yats"
	{ yyval.s0arrind = s0arrind_make_sing(yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 248:
#line 2004 "ats_grammar.yats"
	{ yyval.s0arrind = s0arrind_make_cons(yystack.l_mark[-3].s0explst, yystack.l_mark[0].s0arrind) ; }
break;
case 249:
#line 2008 "ats_grammar.yats"
	{ yyval.s0qua = s0qua_prop(yystack.l_mark[0].s0exp) ; }
break;
case 250:
#line 2009 "ats_grammar.yats"
	{ yyval.s0qua = s0qua_vars(yystack.l_mark[-3].i0de, yystack.l_mark[-2].i0delst, yystack.l_mark[0].s0rtext) ; }
break;
case 251:
#line 2013 "ats_grammar.yats"
	{ yyval.s0qualst = s0qualst_nil() ; }
break;
case 252:
#line 2014 "ats_grammar.yats"
	{ yyval.s0qualst = s0qualst_cons(yystack.l_mark[-1].s0qua, yystack.l_mark[0].s0qualst) ; }
break;
case 253:
#line 2018 "ats_grammar.yats"
	{ yyval.s0qualst = s0qualst_nil() ; }
break;
case 254:
#line 2019 "ats_grammar.yats"
	{ yyval.s0qualst = s0qualst_cons(yystack.l_mark[-1].s0qua, yystack.l_mark[0].s0qualst) ; }
break;
case 255:
#line 2020 "ats_grammar.yats"
	{ yyval.s0qualst = s0qualst_cons(yystack.l_mark[-1].s0qua, yystack.l_mark[0].s0qualst) ; }
break;
case 256:
#line 2024 "ats_grammar.yats"
	{ yyval.s0rtext = s0rtext_srt(yystack.l_mark[0].s0rt) ; }
break;
case 257:
#line 2025 "ats_grammar.yats"
	{ yyval.s0rtext = s0rtext_sub(yystack.l_mark[-7].t0kn, yystack.l_mark[-6].i0de, yystack.l_mark[-4].s0rtext, yystack.l_mark[-2].s0exp, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 258:
#line 2029 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_nil() ; }
break;
case 259:
#line 2030 "ats_grammar.yats"
	{ yyval.s0explst = yystack.l_mark[0].s0explst ; }
break;
case 260:
#line 2034 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_nil() ; }
break;
case 261:
#line 2035 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 262:
#line 2036 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 263:
#line 2040 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_nil() ; }
break;
case 264:
#line 2041 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 265:
#line 2045 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 266:
#line 2049 "ats_grammar.yats"
	{ yyval.labs0explst = labs0explst_nil() ; }
break;
case 267:
#line 2050 "ats_grammar.yats"
	{ yyval.labs0explst = labs0explst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].s0exp, yystack.l_mark[0].labs0explst) ; }
break;
case 268:
#line 2054 "ats_grammar.yats"
	{ yyval.labs0explst = labs0explst_nil() ; }
break;
case 269:
#line 2055 "ats_grammar.yats"
	{ yyval.labs0explst = labs0explst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].s0exp, yystack.l_mark[0].labs0explst) ; }
break;
case 270:
#line 2059 "ats_grammar.yats"
	{ yyval.s0exp = yystack.l_mark[0].s0exp ; }
break;
case 271:
#line 2060 "ats_grammar.yats"
	{ yyval.s0exp = s0exp_app(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0exp) ; }
break;
case 272:
#line 2064 "ats_grammar.yats"
	{ yyval.s0exp = yystack.l_mark[0].s0exp ; }
break;
case 273:
#line 2068 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_nil() ; }
break;
case 274:
#line 2069 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 275:
#line 2073 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_nil() ; }
break;
case 276:
#line 2074 "ats_grammar.yats"
	{ yyval.s0explst = s0explst_cons(yystack.l_mark[-1].s0exp, yystack.l_mark[0].s0explst) ; }
break;
case 277:
#line 2078 "ats_grammar.yats"
	{ yyval.t1mps0explstlst = gtlt_t1mps0expseqseq_nil() ; }
break;
case 278:
#line 2079 "ats_grammar.yats"
	{ yyval.t1mps0explstlst = gtlt_t1mps0expseqseq_cons_tok(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t1mps0explstlst) ; }
break;
case 279:
#line 2083 "ats_grammar.yats"
	{ yyval.impqi0de = impqi0de_make_none(yystack.l_mark[0].dqi0de) ; }
break;
case 280:
#line 2084 "ats_grammar.yats"
	{ yyval.impqi0de = impqi0de_make_some(yystack.l_mark[-3].tmpqi0de, yystack.l_mark[-2].s0explst, yystack.l_mark[-1].t1mps0explstlst, yystack.l_mark[0].t0kn) ; }
break;
case 281:
#line 2088 "ats_grammar.yats"
	{ yyval.s0rtdef = s0rtdef_make(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0rtext) ; }
break;
case 282:
#line 2092 "ats_grammar.yats"
	{ yyval.s0rtdeflst = s0rtdeflst_nil() ; }
break;
case 283:
#line 2093 "ats_grammar.yats"
	{ yyval.s0rtdeflst = s0rtdeflst_cons(yystack.l_mark[-1].s0rtdef, yystack.l_mark[0].s0rtdeflst) ; }
break;
case 284:
#line 2097 "ats_grammar.yats"
	{ yyval.d0atarg = d0atarg_srt(yystack.l_mark[0].s0rtpol) ; }
break;
case 285:
#line 2098 "ats_grammar.yats"
	{ yyval.d0atarg = d0atarg_id_srt(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0rtpol) ; }
break;
case 286:
#line 2102 "ats_grammar.yats"
	{ yyval.d0atarglst = d0atarglst_nil() ; }
break;
case 287:
#line 2103 "ats_grammar.yats"
	{ yyval.d0atarglst = d0atarglst_cons(yystack.l_mark[-1].d0atarg, yystack.l_mark[0].d0atarglst) ; }
break;
case 288:
#line 2107 "ats_grammar.yats"
	{ yyval.d0atarglst = d0atarglst_nil() ; }
break;
case 289:
#line 2108 "ats_grammar.yats"
	{ yyval.d0atarglst = d0atarglst_cons(yystack.l_mark[-1].d0atarg, yystack.l_mark[0].d0atarglst) ; }
break;
case 290:
#line 2112 "ats_grammar.yats"
	{ yyval.s0tacon = s0tacon_make_none_none(yystack.l_mark[0].i0de) ; }
break;
case 291:
#line 2113 "ats_grammar.yats"
	{ yyval.s0tacon = s0tacon_make_some_none(yystack.l_mark[-3].i0de, yystack.l_mark[-1].d0atarglst, yystack.l_mark[0].t0kn) ; }
break;
case 292:
#line 2114 "ats_grammar.yats"
	{ yyval.s0tacon = s0tacon_make_none_some(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0exp) ; }
break;
case 293:
#line 2115 "ats_grammar.yats"
	{ yyval.s0tacon = s0tacon_make_some_some(yystack.l_mark[-5].i0de, yystack.l_mark[-3].d0atarglst, yystack.l_mark[0].s0exp) ; }
break;
case 294:
#line 2119 "ats_grammar.yats"
	{ yyval.s0taconlst = s0taconlst_nil() ; }
break;
case 295:
#line 2120 "ats_grammar.yats"
	{ yyval.s0taconlst = s0taconlst_cons(yystack.l_mark[-1].s0tacon, yystack.l_mark[0].s0taconlst) ; }
break;
case 296:
#line 2124 "ats_grammar.yats"
	{ yyval.s0tacst = s0tacst_make_none(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0rt) ; }
break;
case 297:
#line 2125 "ats_grammar.yats"
	{ yyval.s0tacst = s0tacst_make_some(yystack.l_mark[-5].i0de, yystack.l_mark[-3].d0atarglst, yystack.l_mark[0].s0rt) ; }
break;
case 298:
#line 2129 "ats_grammar.yats"
	{ yyval.s0tacstlst = s0tacstlst_nil() ; }
break;
case 299:
#line 2130 "ats_grammar.yats"
	{ yyval.s0tacstlst = s0tacstlst_cons(yystack.l_mark[-1].s0tacst, yystack.l_mark[0].s0tacstlst) ; }
break;
case 300:
#line 2134 "ats_grammar.yats"
	{ yyval.s0tavar = s0tavar_make(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0rt) ; }
break;
case 301:
#line 2138 "ats_grammar.yats"
	{ yyval.s0tavarlst = s0tavarlst_nil() ; }
break;
case 302:
#line 2139 "ats_grammar.yats"
	{ yyval.s0tavarlst = s0tavarlst_cons(yystack.l_mark[-1].s0tavar, yystack.l_mark[0].s0tavarlst) ; }
break;
case 303:
#line 2143 "ats_grammar.yats"
	{ yyval.s0expdef = s0expdef_make (yystack.l_mark[-4].i0de, yystack.l_mark[-3].s0arglstlst, yystack.l_mark[-2].s0rtopt, yystack.l_mark[0].s0exp) ; }
break;
case 304:
#line 2147 "ats_grammar.yats"
	{ yyval.s0expdeflst = s0expdeflst_nil() ; }
break;
case 305:
#line 2148 "ats_grammar.yats"
	{ yyval.s0expdeflst = s0expdeflst_cons(yystack.l_mark[-1].s0expdef, yystack.l_mark[0].s0expdeflst) ; }
break;
case 306:
#line 2152 "ats_grammar.yats"
	{ yyval.s0aspdec = s0aspdec_make(yystack.l_mark[-4].sqi0de, yystack.l_mark[-3].s0arglstlst, yystack.l_mark[-2].s0rtopt, yystack.l_mark[0].s0exp) ; }
break;
case 307:
#line 2156 "ats_grammar.yats"
	{ yyval.s0qualstlst = s0qualstlst_nil() ; }
break;
case 308:
#line 2157 "ats_grammar.yats"
	{ yyval.s0qualstlst = s0qualstlst_cons(yystack.l_mark[-2].s0qualst, yystack.l_mark[0].s0qualstlst) ; }
break;
case 309:
#line 2161 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_none() ; }
break;
case 310:
#line 2162 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_some(s0exp_list(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn)) ; }
break;
case 311:
#line 2166 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_none() ; }
break;
case 312:
#line 2167 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_some(yystack.l_mark[0].s0exp) ; }
break;
case 313:
#line 2171 "ats_grammar.yats"
	{ yyval.d0atcon = d0atcon_make(yystack.l_mark[-3].s0qualstlst, yystack.l_mark[-2].i0de, yystack.l_mark[-1].s0expopt, yystack.l_mark[0].s0expopt) ; }
break;
case 314:
#line 2175 "ats_grammar.yats"
	{ yyval.d0atconlst = yystack.l_mark[0].d0atconlst ; }
break;
case 315:
#line 2176 "ats_grammar.yats"
	{ yyval.d0atconlst = d0atconlst_cons(yystack.l_mark[-1].d0atcon, yystack.l_mark[0].d0atconlst) ; }
break;
case 316:
#line 2180 "ats_grammar.yats"
	{ yyval.d0atconlst = d0atconlst_nil() ; }
break;
case 317:
#line 2181 "ats_grammar.yats"
	{ yyval.d0atconlst = d0atconlst_cons(yystack.l_mark[-1].d0atcon, yystack.l_mark[0].d0atconlst) ; }
break;
case 318:
#line 2185 "ats_grammar.yats"
	{ yyval.d0atdec = d0atdec_make_none(yystack.l_mark[-2].i0de, yystack.l_mark[0].d0atconlst) ; }
break;
case 319:
#line 2186 "ats_grammar.yats"
	{ yyval.d0atdec = d0atdec_make_some(yystack.l_mark[-5].i0de, yystack.l_mark[-3].d0atarglst, yystack.l_mark[-2].t0kn, yystack.l_mark[0].d0atconlst) ; }
break;
case 320:
#line 2190 "ats_grammar.yats"
	{ yyval.d0atdeclst = d0atdeclst_nil() ; }
break;
case 321:
#line 2191 "ats_grammar.yats"
	{ yyval.d0atdeclst = d0atdeclst_cons(yystack.l_mark[-1].d0atdec, yystack.l_mark[0].d0atdeclst) ; }
break;
case 322:
#line 2195 "ats_grammar.yats"
	{ yyval.s0expdeflst = s0expdeflst_nil() ; }
break;
case 323:
#line 2196 "ats_grammar.yats"
	{ yyval.s0expdeflst = s0expdeflst_cons(yystack.l_mark[-1].s0expdef, yystack.l_mark[0].s0expdeflst) ; }
break;
case 324:
#line 2200 "ats_grammar.yats"
	{ yyval.e0xndec = e0xndec_make(yystack.l_mark[-2].s0qualstlst, yystack.l_mark[-1].i0de, yystack.l_mark[0].s0expopt) ; }
break;
case 325:
#line 2204 "ats_grammar.yats"
	{ yyval.e0xndeclst = e0xndeclst_nil() ; }
break;
case 326:
#line 2205 "ats_grammar.yats"
	{ yyval.e0xndeclst = e0xndeclst_cons(yystack.l_mark[-1].e0xndec, yystack.l_mark[0].e0xndeclst) ; }
break;
case 327:
#line 2209 "ats_grammar.yats"
	{ yyval.p0arg = p0arg_make_none(yystack.l_mark[0].i0de) ; }
break;
case 328:
#line 2210 "ats_grammar.yats"
	{ yyval.p0arg = p0arg_make_some(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0exp) ; }
break;
case 329:
#line 2214 "ats_grammar.yats"
	{ yyval.p0arglst = p0arglst_nil() ; }
break;
case 330:
#line 2215 "ats_grammar.yats"
	{ yyval.p0arglst = p0arglst_cons(yystack.l_mark[-1].p0arg, yystack.l_mark[0].p0arglst) ; }
break;
case 331:
#line 2219 "ats_grammar.yats"
	{ yyval.p0arglst = p0arglst_nil() ; }
break;
case 332:
#line 2220 "ats_grammar.yats"
	{ yyval.p0arglst = p0arglst_cons(yystack.l_mark[-1].p0arg, yystack.l_mark[0].p0arglst) ; }
break;
case 333:
#line 2224 "ats_grammar.yats"
	{ yyval.d0arg = d0arg_var(yystack.l_mark[0].i0de) ; }
break;
case 334:
#line 2225 "ats_grammar.yats"
	{ yyval.d0arg = d0arg_dyn(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0arglst, yystack.l_mark[0].t0kn) ; }
break;
case 335:
#line 2226 "ats_grammar.yats"
	{ yyval.d0arg = d0arg_dyn2(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].p0arglst, yystack.l_mark[-1].p0arglst, yystack.l_mark[0].t0kn) ; }
break;
case 336:
#line 2227 "ats_grammar.yats"
	{ yyval.d0arg = d0arg_sta(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0qualst, yystack.l_mark[0].t0kn) ; }
break;
case 337:
#line 2231 "ats_grammar.yats"
	{ yyval.d0arglst = d0arglst_nil() ; }
break;
case 338:
#line 2232 "ats_grammar.yats"
	{ yyval.d0arglst = d0arglst_cons(yystack.l_mark[-1].d0arg, yystack.l_mark[0].d0arglst) ; }
break;
case 339:
#line 2236 "ats_grammar.yats"
	{ yyval.extnamopt = extnamopt_none() ; }
break;
case 340:
#line 2237 "ats_grammar.yats"
	{ yyval.extnamopt = extnamopt_some(yystack.l_mark[0].s0tring) ; }
break;
case 341:
#line 2241 "ats_grammar.yats"
	{ yyval.d0cstdec = d0cstdec_make(yystack.l_mark[-4].i0de, yystack.l_mark[-3].d0arglst, yystack.l_mark[-2].e0fftaglstopt, yystack.l_mark[-1].s0exp, yystack.l_mark[0].extnamopt) ; }
break;
case 342:
#line 2245 "ats_grammar.yats"
	{ yyval.d0cstdeclst = d0cstdeclst_nil() ; }
break;
case 343:
#line 2246 "ats_grammar.yats"
	{ yyval.d0cstdeclst = d0cstdeclst_cons(yystack.l_mark[-1].d0cstdec, yystack.l_mark[0].d0cstdeclst) ; }
break;
case 344:
#line 2250 "ats_grammar.yats"
	{ yyval.s0vararg = s0vararg_one() ; }
break;
case 345:
#line 2251 "ats_grammar.yats"
	{ yyval.s0vararg = s0vararg_all() ; }
break;
case 346:
#line 2252 "ats_grammar.yats"
	{ yyval.s0vararg = s0vararg_seq(yystack.l_mark[0].s0arglst) ; }
break;
case 347:
#line 2256 "ats_grammar.yats"
	{ yyval.s0exparg = s0exparg_one() ; }
break;
case 348:
#line 2257 "ats_grammar.yats"
	{ yyval.s0exparg = s0exparg_all() ; }
break;
case 349:
#line 2258 "ats_grammar.yats"
	{ yyval.s0exparg = s0exparg_seq(yystack.l_mark[0].s0explst) ; }
break;
case 350:
#line 2262 "ats_grammar.yats"
	{ yyval.s0elop = s0elop_make (0, yystack.l_mark[0].t0kn) ; }
break;
case 351:
#line 2263 "ats_grammar.yats"
	{ yyval.s0elop = s0elop_make (1, yystack.l_mark[0].t0kn) ; }
break;
case 352:
#line 2267 "ats_grammar.yats"
	{ yyval.witht0ype = witht0ype_none() ; }
break;
case 353:
#line 2268 "ats_grammar.yats"
	{ yyval.witht0ype = witht0ype_prop(yystack.l_mark[0].s0exp) ; }
break;
case 354:
#line 2269 "ats_grammar.yats"
	{ yyval.witht0ype = witht0ype_type(yystack.l_mark[0].s0exp) ; }
break;
case 355:
#line 2270 "ats_grammar.yats"
	{ yyval.witht0ype = witht0ype_view(yystack.l_mark[0].s0exp) ; }
break;
case 356:
#line 2271 "ats_grammar.yats"
	{ yyval.witht0ype = witht0ype_viewtype(yystack.l_mark[0].s0exp) ; }
break;
case 357:
#line 2275 "ats_grammar.yats"
	{ yyval.p0at = p0at_apps(yystack.l_mark[-1].p0at, yystack.l_mark[0].p0atlst) ; }
break;
case 358:
#line 2276 "ats_grammar.yats"
	{ yyval.p0at = p0at_ann(yystack.l_mark[-2].p0at, yystack.l_mark[0].s0exp) ; }
break;
case 359:
#line 2277 "ats_grammar.yats"
	{ yyval.p0at = p0at_as(yystack.l_mark[-2].i0de, yystack.l_mark[0].p0at) ; }
break;
case 360:
#line 2278 "ats_grammar.yats"
	{ yyval.p0at = p0at_refas(yystack.l_mark[-3].t0kn, yystack.l_mark[-2].i0de, yystack.l_mark[0].p0at) ; }
break;
case 361:
#line 2279 "ats_grammar.yats"
	{ yyval.p0at = p0at_free(yystack.l_mark[-1].t0kn, yystack.l_mark[0].p0at) ; }
break;
case 362:
#line 2283 "ats_grammar.yats"
	{ yyval.p0at = p0at_char(yystack.l_mark[0].c0har) ; }
break;
case 363:
#line 2284 "ats_grammar.yats"
	{ yyval.p0at = p0at_int(yystack.l_mark[0].i0nt) ; }
break;
case 364:
#line 2285 "ats_grammar.yats"
	{ yyval.p0at = p0at_float(yystack.l_mark[0].f0loat) ; }
break;
case 365:
#line 2286 "ats_grammar.yats"
	{ yyval.p0at = p0at_string(yystack.l_mark[0].s0tring) ; }
break;
case 366:
#line 2287 "ats_grammar.yats"
	{ yyval.p0at = p0at_ide(yystack.l_mark[0].i0de) ; }
break;
case 367:
#line 2288 "ats_grammar.yats"
	{ yyval.p0at = p0at_ref(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0de) ; }
break;
case 368:
#line 2289 "ats_grammar.yats"
	{ yyval.p0at = p0at_opide(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0de) ; }
break;
case 369:
#line 2290 "ats_grammar.yats"
	{ yyval.p0at = p0at_qid(yystack.l_mark[-1].d0ynq, yystack.l_mark[0].i0de) ; }
break;
case 370:
#line 2291 "ats_grammar.yats"
	{ yyval.p0at = p0at_list(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 371:
#line 2292 "ats_grammar.yats"
	{ yyval.p0at = p0at_list2(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].p0atlst, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 372:
#line 2293 "ats_grammar.yats"
	{ yyval.p0at = p0at_lst(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 373:
#line 2294 "ats_grammar.yats"
	{ yyval.p0at = p0at_tup(0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 374:
#line 2295 "ats_grammar.yats"
	{ yyval.p0at = p0at_tup(1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 375:
#line 2296 "ats_grammar.yats"
	{ yyval.p0at = p0at_tup2(0, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].p0atlst, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 376:
#line 2297 "ats_grammar.yats"
	{ yyval.p0at = p0at_tup2(1, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].p0atlst, yystack.l_mark[-1].p0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 377:
#line 2298 "ats_grammar.yats"
	{ yyval.p0at = p0at_rec(0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labp0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 378:
#line 2299 "ats_grammar.yats"
	{ yyval.p0at = p0at_rec(1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labp0atlst, yystack.l_mark[0].t0kn) ; }
break;
case 379:
#line 2300 "ats_grammar.yats"
	{ yyval.p0at = p0at_exist(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0arglst, yystack.l_mark[0].t0kn) ; }
break;
case 380:
#line 2304 "ats_grammar.yats"
	{ yyval.p0at = yystack.l_mark[0].p0at ; }
break;
case 381:
#line 2305 "ats_grammar.yats"
	{ yyval.p0at = p0at_svararg(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0vararg, yystack.l_mark[0].t0kn) ; }
break;
case 382:
#line 2309 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_nil() ; }
break;
case 383:
#line 2310 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_cons(yystack.l_mark[-1].p0at, yystack.l_mark[0].p0atlst) ; }
break;
case 384:
#line 2314 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_nil() ; }
break;
case 385:
#line 2315 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_cons(yystack.l_mark[-1].p0at, yystack.l_mark[0].p0atlst) ; }
break;
case 386:
#line 2319 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_nil() ; }
break;
case 387:
#line 2320 "ats_grammar.yats"
	{ yyval.p0atlst = p0atlst_cons(yystack.l_mark[-1].p0at, yystack.l_mark[0].p0atlst) ; }
break;
case 388:
#line 2324 "ats_grammar.yats"
	{ yyval.labp0atlst = labp0atlst_dot() ; }
break;
case 389:
#line 2325 "ats_grammar.yats"
	{ yyval.labp0atlst = labp0atlst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].p0at, yystack.l_mark[0].labp0atlst) ; }
break;
case 390:
#line 2329 "ats_grammar.yats"
	{ yyval.labp0atlst = labp0atlst_nil() ; }
break;
case 391:
#line 2330 "ats_grammar.yats"
	{ yyval.labp0atlst = labp0atlst_dot() ; }
break;
case 392:
#line 2331 "ats_grammar.yats"
	{ yyval.labp0atlst = labp0atlst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].p0at, yystack.l_mark[0].labp0atlst) ; }
break;
case 393:
#line 2335 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_sta1(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0qualst, yystack.l_mark[0].t0kn) ; }
break;
case 394:
#line 2336 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_dyn(yystack.l_mark[0].p0at) ; }
break;
case 395:
#line 2337 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_met_some(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0explst, yystack.l_mark[0].t0kn) ; }
break;
case 396:
#line 2338 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_met_none(yystack.l_mark[0].t0kn) ; }
break;
case 397:
#line 2342 "ats_grammar.yats"
	{ yyval.f0arglst = f0arglst_nil() ; }
break;
case 398:
#line 2343 "ats_grammar.yats"
	{ yyval.f0arglst = f0arglst_cons(yystack.l_mark[-1].f0arg, yystack.l_mark[0].f0arglst) ; }
break;
case 399:
#line 2347 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_sta2(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0arglst, yystack.l_mark[0].t0kn) ; }
break;
case 400:
#line 2348 "ats_grammar.yats"
	{ yyval.f0arg = f0arg_dyn(yystack.l_mark[0].p0at) ; }
break;
case 401:
#line 2352 "ats_grammar.yats"
	{ yyval.f0arglst = f0arglst_nil() ; }
break;
case 402:
#line 2353 "ats_grammar.yats"
	{ yyval.f0arglst = f0arglst_cons(yystack.l_mark[-1].f0arg, yystack.l_mark[0].f0arglst) ; }
break;
case 403:
#line 2357 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_apps(yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 404:
#line 2358 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_ann(yystack.l_mark[-2].d0exp, yystack.l_mark[0].s0exp) ; }
break;
case 405:
#line 2359 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_if_none(yystack.l_mark[-3].ifhead, yystack.l_mark[-2].d0exp, yystack.l_mark[0].d0exp) ; }
break;
case 406:
#line 2360 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_if_some(yystack.l_mark[-5].ifhead, yystack.l_mark[-4].d0exp, yystack.l_mark[-2].d0exp, yystack.l_mark[0].d0exp) ; }
break;
case 407:
#line 2361 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_sif(yystack.l_mark[-5].ifhead, yystack.l_mark[-4].s0exp, yystack.l_mark[-2].d0exp, yystack.l_mark[0].d0exp) ; }
break;
case 408:
#line 2362 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_caseof(yystack.l_mark[-3].casehead, yystack.l_mark[-2].d0exp, yystack.l_mark[-1].t0kn, yystack.l_mark[0].c0laulst) ; }
break;
case 409:
#line 2363 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_scaseof(yystack.l_mark[-3].casehead, yystack.l_mark[-2].s0exp, yystack.l_mark[-1].t0kn, yystack.l_mark[0].sc0laulst) ; }
break;
case 410:
#line 2364 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_lam(yystack.l_mark[-4].lamkind, yystack.l_mark[-3].f0arglst, yystack.l_mark[-2].s0expopt, yystack.l_mark[-1].e0fftaglstopt, yystack.l_mark[0].d0exp ) ; }
break;
case 411:
#line 2365 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_fix(yystack.l_mark[-5].fixkind, yystack.l_mark[-4].i0de, yystack.l_mark[-3].f0arglst, yystack.l_mark[-2].s0expopt, yystack.l_mark[-1].e0fftaglstopt, yystack.l_mark[0].d0exp) ; }
break;
case 412:
#line 2366 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_for_itp (yystack.l_mark[-2].loophead, yystack.l_mark[-1].initestpost, yystack.l_mark[0].d0exp) ; }
break;
case 413:
#line 2367 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_while (yystack.l_mark[-2].loophead, yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0exp) ; }
break;
case 414:
#line 2368 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_raise(yystack.l_mark[-1].t0kn, yystack.l_mark[0].d0exp) ; }
break;
case 415:
#line 2369 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_trywith_seq(yystack.l_mark[-3].tryhead, yystack.l_mark[-2].d0explst, yystack.l_mark[-1].t0kn, yystack.l_mark[0].c0laulst) ; }
break;
case 416:
#line 2370 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_where (yystack.l_mark[-4].d0exp, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 417:
#line 2374 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_char(yystack.l_mark[0].c0har) ; }
break;
case 418:
#line 2375 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_float(yystack.l_mark[0].f0loat) ; }
break;
case 419:
#line 2376 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_floatsp(yystack.l_mark[0].f0loatsp) ; }
break;
case 420:
#line 2377 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_int(yystack.l_mark[0].i0nt) ; }
break;
case 421:
#line 2378 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_intsp(yystack.l_mark[0].i0ntsp) ; }
break;
case 422:
#line 2379 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_string(yystack.l_mark[0].s0tring) ; }
break;
case 423:
#line 2380 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_FILENAME(yystack.l_mark[0].t0kn) ; }
break;
case 424:
#line 2381 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_LOCATION(yystack.l_mark[0].t0kn) ; }
break;
case 425:
#line 2382 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_ide(yystack.l_mark[0].i0de) ; }
break;
case 426:
#line 2383 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_opide(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0de) ; }
break;
case 427:
#line 2384 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_qid(yystack.l_mark[-1].d0ynq, yystack.l_mark[0].i0de) ; }
break;
case 428:
#line 2385 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_idext(yystack.l_mark[0].i0de) ; }
break;
case 429:
#line 2386 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_ptrof(yystack.l_mark[0].t0kn) ; }
break;
case 430:
#line 2387 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_loopexn(0, yystack.l_mark[0].t0kn) ; }
break;
case 431:
#line 2388 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_loopexn(1, yystack.l_mark[0].t0kn) ; }
break;
case 432:
#line 2389 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_foldat(yystack.l_mark[-1].t0kn, yystack.l_mark[0].d0explst) ; }
break;
case 433:
#line 2390 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_freeat(yystack.l_mark[-1].t0kn, yystack.l_mark[0].d0explst) ; }
break;
case 434:
#line 2391 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_viewat(yystack.l_mark[0].t0kn) ; }
break;
case 435:
#line 2392 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_crypt (-1, yystack.l_mark[0].t0kn) ; }
break;
case 436:
#line 2393 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_crypt ( 1, yystack.l_mark[0].t0kn) ; }
break;
case 437:
#line 2394 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_delay(0, yystack.l_mark[0].t0kn) ; }
break;
case 438:
#line 2395 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_delay(1, yystack.l_mark[0].t0kn) ; }
break;
case 439:
#line 2396 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_dynload(yystack.l_mark[0].t0kn) ; }
break;
case 440:
#line 2397 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_effmask_all(yystack.l_mark[0].t0kn) ; }
break;
case 441:
#line 2398 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_effmask_exn(yystack.l_mark[0].t0kn) ; }
break;
case 442:
#line 2399 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_effmask_ntm(yystack.l_mark[0].t0kn) ; }
break;
case 443:
#line 2400 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_effmask_ref(yystack.l_mark[0].t0kn) ; }
break;
case 444:
#line 2401 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_arrinit_none (yystack.l_mark[-5].t0kn, yystack.l_mark[-4].s0exp, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 445:
#line 2402 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_arrinit_some (yystack.l_mark[-8].t0kn, yystack.l_mark[-7].s0exp, yystack.l_mark[-4].d0exp, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 446:
#line 2403 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_arrsize (yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0expopt, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 447:
#line 2404 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_arrsub (yystack.l_mark[-1].arrqi0de, yystack.l_mark[0].d0arrind) ; }
break;
case 448:
#line 2405 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_sel_lab (yystack.l_mark[-1].s0elop, yystack.l_mark[0].l0ab) ; }
break;
case 449:
#line 2406 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_sel_ind (yystack.l_mark[-2].s0elop, yystack.l_mark[0].d0arrind) ; }
break;
case 450:
#line 2407 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tmpid (yystack.l_mark[-3].tmpqi0de, yystack.l_mark[-2].s0explst, yystack.l_mark[-1].t1mps0explstlst, yystack.l_mark[0].t0kn) ; }
break;
case 451:
#line 2408 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_exist (yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0exparg, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0exp, yystack.l_mark[0].t0kn) ; }
break;
case 452:
#line 2409 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_list (yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 453:
#line 2410 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_list2 (yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0explst, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 454:
#line 2411 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_lst (0, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0expopt, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 455:
#line 2412 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_lst (1, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].s0expopt, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 456:
#line 2413 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_lst_quote (yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 457:
#line 2414 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_seq (yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 458:
#line 2415 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_seq (yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 459:
#line 2416 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup (0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 460:
#line 2417 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup (1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 461:
#line 2418 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup (2, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 462:
#line 2419 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup (3, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 463:
#line 2420 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup2 (0, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0explst, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 464:
#line 2421 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_tup2 (1, yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0explst, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 465:
#line 2422 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_rec (0, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labd0explst, yystack.l_mark[0].t0kn) ; }
break;
case 466:
#line 2423 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_rec (1, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].labd0explst, yystack.l_mark[0].t0kn) ; }
break;
case 467:
#line 2424 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_rec (2, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].labd0explst, yystack.l_mark[0].t0kn) ; }
break;
case 468:
#line 2425 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_rec (3, yystack.l_mark[-3].t0kn, yystack.l_mark[-1].labd0explst, yystack.l_mark[0].t0kn) ; }
break;
case 469:
#line 2426 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_extval(yystack.l_mark[-5].t0kn, yystack.l_mark[-3].s0exp, yystack.l_mark[-1].s0tring, yystack.l_mark[0].t0kn) ; }
break;
case 470:
#line 2427 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_macsyn_cross(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0exp, yystack.l_mark[0].t0kn) ; }
break;
case 471:
#line 2428 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_macsyn_decode(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0exp, yystack.l_mark[0].t0kn) ; }
break;
case 472:
#line 2429 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_macsyn_encode_seq(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 473:
#line 2430 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_let_seq(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0eclst, yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 474:
#line 2431 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_decseq(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 475:
#line 2435 "ats_grammar.yats"
	{ yyval.d0exp = d0exp_sexparg(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0exparg, yystack.l_mark[0].t0kn) ; }
break;
case 476:
#line 2439 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_nil() ; }
break;
case 477:
#line 2440 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0explst) ;  }
break;
case 478:
#line 2444 "ats_grammar.yats"
	{ yyval.d0exp = yystack.l_mark[0].d0exp ; }
break;
case 479:
#line 2445 "ats_grammar.yats"
	{ yyval.d0exp = yystack.l_mark[0].d0exp ; }
break;
case 480:
#line 2449 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_nil() ; }
break;
case 481:
#line 2450 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 482:
#line 2454 "ats_grammar.yats"
	{ yyval.d0arrind = d0arrind_make_sing(yystack.l_mark[-1].d0explst, yystack.l_mark[0].t0kn) ; }
break;
case 483:
#line 2455 "ats_grammar.yats"
	{ yyval.d0arrind = d0arrind_make_cons(yystack.l_mark[-3].d0explst, yystack.l_mark[0].d0arrind) ; }
break;
case 484:
#line 2459 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_none() ; }
break;
case 485:
#line 2460 "ats_grammar.yats"
	{ yyval.s0expopt = s0expopt_some(yystack.l_mark[0].s0exp) ; }
break;
case 486:
#line 2464 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_none() ; }
break;
case 487:
#line 2465 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_some(e0fftaglst_nil()) ; }
break;
case 488:
#line 2466 "ats_grammar.yats"
	{ yyval.e0fftaglstopt = e0fftaglstopt_some(yystack.l_mark[-1].e0fftaglst) ; }
break;
case 489:
#line 2470 "ats_grammar.yats"
	{ yyval.i0nvresstate = i0nvresstate_none() ; }
break;
case 490:
#line 2471 "ats_grammar.yats"
	{ yyval.i0nvresstate = yystack.l_mark[-1].i0nvresstate ; }
break;
case 491:
#line 2475 "ats_grammar.yats"
	{ yyval.ifhead = ifhead_make(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 492:
#line 2479 "ats_grammar.yats"
	{ yyval.ifhead = ifhead_make(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 493:
#line 2483 "ats_grammar.yats"
	{ yyval.casehead = casehead_make(0, yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 494:
#line 2484 "ats_grammar.yats"
	{ yyval.casehead = casehead_make(-1, yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 495:
#line 2485 "ats_grammar.yats"
	{ yyval.casehead = casehead_make(1, yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 496:
#line 2489 "ats_grammar.yats"
	{ yyval.casehead = casehead_make(0, yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0nvresstate) ; }
break;
case 497:
#line 2493 "ats_grammar.yats"
	{ yyval.loophead = loophead_make_none(yystack.l_mark[0].t0kn) ; }
break;
case 498:
#line 2494 "ats_grammar.yats"
	{ yyval.loophead = loophead_make_some(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].loopi0nv, yystack.l_mark[0].t0kn) ; }
break;
case 499:
#line 2498 "ats_grammar.yats"
	{ yyval.loophead = loophead_make_some(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].loopi0nv, yystack.l_mark[0].t0kn) ; }
break;
case 500:
#line 2502 "ats_grammar.yats"
	{ yyval.tryhead = tryhead_make(yystack.l_mark[0].t0kn) ; }
break;
case 501:
#line 2506 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_nil() ; }
break;
case 502:
#line 2507 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 503:
#line 2511 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_nil() ; }
break;
case 504:
#line 2512 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-1].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 505:
#line 2516 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_nil() ; }
break;
case 506:
#line 2517 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_sing(yystack.l_mark[0].d0exp) ; }
break;
case 507:
#line 2518 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-2].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 508:
#line 2522 "ats_grammar.yats"
	{ yyval.d0explst = d0explst_cons(yystack.l_mark[-2].d0exp, yystack.l_mark[0].d0explst) ; }
break;
case 509:
#line 2526 "ats_grammar.yats"
	{ yyval.labd0explst = labd0explst_nil() ; }
break;
case 510:
#line 2527 "ats_grammar.yats"
	{ yyval.labd0explst = labd0explst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].d0exp, yystack.l_mark[0].labd0explst) ; }
break;
case 511:
#line 2531 "ats_grammar.yats"
	{ yyval.labd0explst = labd0explst_nil() ; }
break;
case 512:
#line 2532 "ats_grammar.yats"
	{ yyval.labd0explst = labd0explst_cons(yystack.l_mark[-3].l0ab, yystack.l_mark[-1].d0exp, yystack.l_mark[0].labd0explst) ; }
break;
case 513:
#line 2536 "ats_grammar.yats"
	{ yyval.m0atch = m0atch_make_none (yystack.l_mark[0].d0exp) ; }
break;
case 514:
#line 2537 "ats_grammar.yats"
	{ yyval.m0atch = m0atch_make_some (yystack.l_mark[-2].d0exp, yystack.l_mark[0].p0at) ; }
break;
case 515:
#line 2541 "ats_grammar.yats"
	{ yyval.m0atchlst = m0atchlst_cons (yystack.l_mark[-1].m0atch, yystack.l_mark[0].m0atchlst ) ; }
break;
case 516:
#line 2545 "ats_grammar.yats"
	{ yyval.m0atchlst = m0atchlst_nil () ; }
break;
case 517:
#line 2546 "ats_grammar.yats"
	{ yyval.m0atchlst = m0atchlst_cons (yystack.l_mark[-1].m0atch, yystack.l_mark[0].m0atchlst ) ; }
break;
case 518:
#line 2550 "ats_grammar.yats"
	{ yyval.guap0at = guap0at_make_none(yystack.l_mark[0].p0at) ; }
break;
case 519:
#line 2551 "ats_grammar.yats"
	{ yyval.guap0at = guap0at_make_some(yystack.l_mark[-2].p0at, yystack.l_mark[0].m0atchlst) ; }
break;
case 520:
#line 2555 "ats_grammar.yats"
	{ yyval.c0lau = c0lau_make (yystack.l_mark[-2].guap0at, 0, 0, yystack.l_mark[0].d0exp) ; }
break;
case 521:
#line 2556 "ats_grammar.yats"
	{ yyval.c0lau = c0lau_make (yystack.l_mark[-2].guap0at, 1, 0, yystack.l_mark[0].d0exp) ; }
break;
case 522:
#line 2557 "ats_grammar.yats"
	{ yyval.c0lau = c0lau_make (yystack.l_mark[-2].guap0at, 0, 1, yystack.l_mark[0].d0exp) ; }
break;
case 523:
#line 2558 "ats_grammar.yats"
	{ yyval.c0lau = c0lau_make (yystack.l_mark[-2].guap0at, 1, 1, yystack.l_mark[0].d0exp) ; }
break;
case 524:
#line 2562 "ats_grammar.yats"
	{ yyval.c0laulst = yystack.l_mark[0].c0laulst ; }
break;
case 525:
#line 2563 "ats_grammar.yats"
	{ yyval.c0laulst = c0laulst_cons(yystack.l_mark[-1].c0lau, yystack.l_mark[0].c0laulst) ; }
break;
case 526:
#line 2567 "ats_grammar.yats"
	{ yyval.c0laulst = c0laulst_nil() ; }
break;
case 527:
#line 2568 "ats_grammar.yats"
	{ yyval.c0laulst = c0laulst_cons(yystack.l_mark[-1].c0lau, yystack.l_mark[0].c0laulst) ; }
break;
case 528:
#line 2572 "ats_grammar.yats"
	{ yyval.sc0lau = sc0lau_make(yystack.l_mark[-2].sp0at, yystack.l_mark[0].d0exp) ; }
break;
case 529:
#line 2576 "ats_grammar.yats"
	{ yyval.sc0laulst = yystack.l_mark[0].sc0laulst ; }
break;
case 530:
#line 2577 "ats_grammar.yats"
	{ yyval.sc0laulst = sc0laulst_cons(yystack.l_mark[-1].sc0lau, yystack.l_mark[0].sc0laulst) ; }
break;
case 531:
#line 2581 "ats_grammar.yats"
	{ yyval.sc0laulst = sc0laulst_nil() ; }
break;
case 532:
#line 2582 "ats_grammar.yats"
	{ yyval.sc0laulst = sc0laulst_cons(yystack.l_mark[-1].sc0lau, yystack.l_mark[0].sc0laulst) ; }
break;
case 533:
#line 2586 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0qualstopt_none() ; }
break;
case 534:
#line 2587 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0qualstopt_some(yystack.l_mark[-1].s0qualst) ; }
break;
case 535:
#line 2591 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0explstopt_none() ; }
break;
case 536:
#line 2592 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0explstopt_some(yystack.l_mark[-1].s0explst) ; }
break;
case 537:
#line 2593 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0explstopt_some(s0explst_nil()) ; }
break;
case 538:
#line 2597 "ats_grammar.yats"
	{ yyval.i0nvarg = i0nvarg_make_none(yystack.l_mark[-1].i0de) ; }
break;
case 539:
#line 2598 "ats_grammar.yats"
	{ yyval.i0nvarg = i0nvarg_make_some(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0exp) ; }
break;
case 540:
#line 2602 "ats_grammar.yats"
	{ yyval.i0nvarglst = i0nvarglst_nil() ; }
break;
case 541:
#line 2603 "ats_grammar.yats"
	{ yyval.i0nvarglst = i0nvarglst_cons(yystack.l_mark[-1].i0nvarg, yystack.l_mark[0].i0nvarglst) ; }
break;
case 542:
#line 2607 "ats_grammar.yats"
	{ yyval.i0nvarglst = i0nvarglst_nil() ; }
break;
case 543:
#line 2608 "ats_grammar.yats"
	{ yyval.i0nvarglst = i0nvarglst_cons(yystack.l_mark[-1].i0nvarg, yystack.l_mark[0].i0nvarglst) ; }
break;
case 544:
#line 2612 "ats_grammar.yats"
	{ yyval.i0nvarglst = yystack.l_mark[-1].i0nvarglst ; }
break;
case 545:
#line 2616 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0qualstopt_none() ; }
break;
case 546:
#line 2617 "ats_grammar.yats"
	{ yyval.s0qualstopt = s0qualstopt_some(yystack.l_mark[-1].s0qualst) ; }
break;
case 547:
#line 2621 "ats_grammar.yats"
	{ yyval.i0nvresstate = i0nvresstate_none() ; }
break;
case 548:
#line 2622 "ats_grammar.yats"
	{ yyval.i0nvresstate = i0nvresstate_some(yystack.l_mark[-3].s0qualstopt, yystack.l_mark[-1].i0nvarglst) ; }
break;
case 549:
#line 2626 "ats_grammar.yats"
	{ yyval.loopi0nv = loopi0nv_make(yystack.l_mark[-3].s0qualstopt, yystack.l_mark[-2].s0qualstopt, yystack.l_mark[-1].i0nvarglst, yystack.l_mark[0].i0nvresstate) ; }
break;
case 550:
#line 2630 "ats_grammar.yats"
	{ yyval.initestpost = initestpost_make (yystack.l_mark[-6].t0kn,yystack.l_mark[-5].d0explst,yystack.l_mark[-4].t0kn,yystack.l_mark[-3].d0explst,yystack.l_mark[-2].t0kn,yystack.l_mark[-1].d0explst,yystack.l_mark[0].t0kn) ; }
break;
case 551:
#line 2634 "ats_grammar.yats"
	{ yyval.i0de = yystack.l_mark[0].i0de ; }
break;
case 552:
#line 2638 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_nil() ; }
break;
case 553:
#line 2639 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_cons(yystack.l_mark[-1].i0de, yystack.l_mark[0].i0delst) ; }
break;
case 554:
#line 2643 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_nil() ; }
break;
case 555:
#line 2644 "ats_grammar.yats"
	{ yyval.i0delst = i0delst_cons(yystack.l_mark[-1].i0de, yystack.l_mark[0].i0delst) ; }
break;
case 556:
#line 2648 "ats_grammar.yats"
	{ yyval.m0acarg = m0acarg_one (yystack.l_mark[0].i0de) ; }
break;
case 557:
#line 2649 "ats_grammar.yats"
	{ yyval.m0acarg = m0acarg_lst (yystack.l_mark[-2].t0kn, yystack.l_mark[-1].i0delst, yystack.l_mark[0].t0kn) ; }
break;
case 558:
#line 2653 "ats_grammar.yats"
	{ yyval.m0acarglst = m0acarglst_nil () ; }
break;
case 559:
#line 2654 "ats_grammar.yats"
	{ yyval.m0acarglst = m0acarglst_cons (yystack.l_mark[-1].m0acarg, yystack.l_mark[0].m0acarglst) ; }
break;
case 560:
#line 2658 "ats_grammar.yats"
	{ yyval.m0acdef = m0acdef_make(yystack.l_mark[-3].i0de, yystack.l_mark[-2].m0acarglst, yystack.l_mark[0].d0exp) ; }
break;
case 561:
#line 2662 "ats_grammar.yats"
	{ yyval.m0acdeflst = m0acdeflst_nil() ; }
break;
case 562:
#line 2663 "ats_grammar.yats"
	{ yyval.m0acdeflst = m0acdeflst_cons(yystack.l_mark[-1].m0acdef, yystack.l_mark[0].m0acdeflst) ; }
break;
case 563:
#line 2667 "ats_grammar.yats"
	{ yyval.v0aldec = v0aldec_make (yystack.l_mark[-3].p0at, yystack.l_mark[-1].d0exp, yystack.l_mark[0].witht0ype) ; }
break;
case 564:
#line 2671 "ats_grammar.yats"
	{ yyval.v0aldeclst = v0aldeclst_nil() ; }
break;
case 565:
#line 2672 "ats_grammar.yats"
	{ yyval.v0aldeclst = v0aldeclst_cons(yystack.l_mark[-1].v0aldec, yystack.l_mark[0].v0aldeclst) ; }
break;
case 566:
#line 2676 "ats_grammar.yats"
	{ yyval.f0undec = f0undec_make_none(yystack.l_mark[-4].i0de, yystack.l_mark[-3].f0arglst, yystack.l_mark[-1].d0exp, yystack.l_mark[0].witht0ype) ; }
break;
case 567:
#line 2677 "ats_grammar.yats"
	{ yyval.f0undec = f0undec_make_some(yystack.l_mark[-6].i0de, yystack.l_mark[-5].f0arglst, yystack.l_mark[-4].e0fftaglstopt, yystack.l_mark[-3].s0exp, yystack.l_mark[-1].d0exp, yystack.l_mark[0].witht0ype) ; }
break;
case 568:
#line 2681 "ats_grammar.yats"
	{ yyval.f0undeclst = f0undeclst_nil() ; }
break;
case 569:
#line 2682 "ats_grammar.yats"
	{ yyval.f0undeclst = f0undeclst_cons(yystack.l_mark[-1].f0undec, yystack.l_mark[0].f0undeclst) ; }
break;
case 570:
#line 2686 "ats_grammar.yats"
	{ yyval.v0arwth = v0arwth_none () ; }
break;
case 571:
#line 2687 "ats_grammar.yats"
	{ yyval.v0arwth = v0arwth_some (yystack.l_mark[0].i0de) ; }
break;
case 572:
#line 2691 "ats_grammar.yats"
	{ yyval.v0ardec = v0ardec_make_none_some(0, yystack.l_mark[-3].i0de, yystack.l_mark[-2].v0arwth, yystack.l_mark[0].d0exp) ; }
break;
case 573:
#line 2692 "ats_grammar.yats"
	{ yyval.v0ardec = v0ardec_make_none_some(1, yystack.l_mark[-3].i0de, yystack.l_mark[-2].v0arwth, yystack.l_mark[0].d0exp) ; }
break;
case 574:
#line 2693 "ats_grammar.yats"
	{ yyval.v0ardec = v0ardec_make_some_none(0, yystack.l_mark[-3].i0de, yystack.l_mark[-1].s0exp, yystack.l_mark[0].v0arwth) ; }
break;
case 575:
#line 2694 "ats_grammar.yats"
	{ yyval.v0ardec = v0ardec_make_some_some(0, yystack.l_mark[-5].i0de, yystack.l_mark[-3].s0exp, yystack.l_mark[-2].v0arwth, yystack.l_mark[0].d0exp) ; }
break;
case 576:
#line 2698 "ats_grammar.yats"
	{ yyval.v0ardeclst = v0ardeclst_nil() ; }
break;
case 577:
#line 2699 "ats_grammar.yats"
	{ yyval.v0ardeclst = v0ardeclst_cons(yystack.l_mark[-1].v0ardec, yystack.l_mark[0].v0ardeclst) ; }
break;
case 578:
#line 2703 "ats_grammar.yats"
	{ yyval.i0mpdec = i0mpdec_make(yystack.l_mark[-4].impqi0de, yystack.l_mark[-3].f0arglst, yystack.l_mark[-2].s0expopt, yystack.l_mark[0].d0exp) ; }
break;
case 579:
#line 2707 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_infix(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0rec,  0, yystack.l_mark[0].i0delst) ; }
break;
case 580:
#line 2708 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_infix(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0rec, -1, yystack.l_mark[0].i0delst) ; }
break;
case 581:
#line 2709 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_infix(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0rec,  1, yystack.l_mark[0].i0delst) ; }
break;
case 582:
#line 2710 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_prefix(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0rec, yystack.l_mark[0].i0delst) ; }
break;
case 583:
#line 2711 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_postfix(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].p0rec, yystack.l_mark[0].i0delst) ; }
break;
case 584:
#line 2712 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_nonfix(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0delst) ; }
break;
case 585:
#line 2713 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_symintr(yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0delst) ; }
break;
case 586:
#line 2714 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_e0xpundef(yystack.l_mark[0].i0de) ; }
break;
case 587:
#line 2715 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_e0xpdef(yystack.l_mark[-1].i0de, yystack.l_mark[0].e0xpopt) ; }
break;
case 588:
#line 2716 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_e0xpact_assert(yystack.l_mark[0].e0xp) ; }
break;
case 589:
#line 2717 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_e0xpact_error(yystack.l_mark[0].e0xp) ; }
break;
case 590:
#line 2718 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_e0xpact_print(yystack.l_mark[0].e0xp) ; }
break;
case 591:
#line 2719 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_srtdefs(yystack.l_mark[-1].s0rtdef, yystack.l_mark[0].s0rtdeflst) ; }
break;
case 592:
#line 2720 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_datsrts(0, yystack.l_mark[-1].d0atsrtdec, yystack.l_mark[0].d0atsrtdeclst) ; }
break;
case 593:
#line 2721 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_datsrts(1, yystack.l_mark[-1].d0atsrtdec, yystack.l_mark[0].d0atsrtdeclst) ; }
break;
case 594:
#line 2722 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_stacons(yystack.l_mark[-2].abskind, yystack.l_mark[-1].s0tacon, yystack.l_mark[0].s0taconlst) ; }
break;
case 595:
#line 2723 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_stacsts(yystack.l_mark[-1].s0tacst, yystack.l_mark[0].s0tacstlst) ; }
break;
case 596:
#line 2724 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_stavars(yystack.l_mark[-1].s0tavar, yystack.l_mark[0].s0tavarlst) ; }
break;
case 597:
#line 2725 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_sexpdefs(yystack.l_mark[-2].stadefkind, yystack.l_mark[-1].s0expdef, yystack.l_mark[0].s0expdeflst) ; }
break;
case 598:
#line 2726 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_saspdec(yystack.l_mark[0].s0aspdec) ; }
break;
case 599:
#line 2727 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_datdecs(yystack.l_mark[-3].datakind, yystack.l_mark[-2].d0atdec, yystack.l_mark[-1].d0atdeclst, yystack.l_mark[0].s0expdeflst) ; }
break;
case 600:
#line 2728 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_exndecs(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].e0xndec, yystack.l_mark[0].e0xndeclst) ; }
break;
case 601:
#line 2729 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_classdec_none (yystack.l_mark[-1].t0kn, yystack.l_mark[0].i0de) ; }
break;
case 602:
#line 2730 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_classdec_some (yystack.l_mark[-3].t0kn, yystack.l_mark[-2].i0de, yystack.l_mark[0].s0exp) ; }
break;
case 603:
#line 2731 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_overload(yystack.l_mark[-3].t0kn, yystack.l_mark[-2].i0de, yystack.l_mark[0].dqi0de) ; }
break;
case 604:
#line 2732 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_overload_lrbrackets(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].t0kn, yystack.l_mark[-2].t0kn, yystack.l_mark[0].dqi0de) ; }
break;
case 605:
#line 2733 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_macdefs(0, yystack.l_mark[-1].m0acdef, yystack.l_mark[0].m0acdeflst) ; }
break;
case 606:
#line 2734 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_macdefs(-1/*error*/, yystack.l_mark[-1].m0acdef, yystack.l_mark[0].m0acdeflst) ; }
break;
case 607:
#line 2735 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_macdefs(1, yystack.l_mark[-1].m0acdef, yystack.l_mark[0].m0acdeflst) ; }
break;
case 608:
#line 2736 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_macdefs(2, yystack.l_mark[-1].m0acdef, yystack.l_mark[0].m0acdeflst) ; }
break;
case 609:
#line 2737 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_staload_none(yystack.l_mark[0].s0tring) ; }
break;
case 610:
#line 2738 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_staload_some(yystack.l_mark[-2].i0de, yystack.l_mark[0].s0tring) ; }
break;
case 611:
#line 2742 "ats_grammar.yats"
	{ yyval.s0qualst = yystack.l_mark[-1].s0qualst ; }
break;
case 612:
#line 2746 "ats_grammar.yats"
	{ yyval.s0qualstlst = s0qualstlst_nil() ; }
break;
case 613:
#line 2747 "ats_grammar.yats"
	{ yyval.s0qualstlst = s0qualstlst_cons(yystack.l_mark[-1].s0qualst, yystack.l_mark[0].s0qualstlst) ; }
break;
case 614:
#line 2751 "ats_grammar.yats"
	{ ; }
break;
case 615:
#line 2752 "ats_grammar.yats"
	{ ; }
break;
case 616:
#line 2756 "ats_grammar.yats"
	{ yyval.d0ec = yystack.l_mark[0].d0ec ; }
break;
case 617:
#line 2757 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_dcstdecs(yystack.l_mark[-3].dcstkind, yystack.l_mark[-2].s0qualstlst, yystack.l_mark[-1].d0cstdec, yystack.l_mark[0].d0cstdeclst) ; }
break;
case 618:
#line 2758 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_extcode_sta(yystack.l_mark[0].e0xtcode) ; }
break;
case 619:
#line 2759 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_guadec(yystack.l_mark[-1].srpifkindtok, yystack.l_mark[0].d0eclst) ; }
break;
case 620:
#line 2760 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_include(0/*sta*/, yystack.l_mark[0].s0tring) ; }
break;
case 621:
#line 2761 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_local(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0eclst, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 622:
#line 2765 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_one(yystack.l_mark[-3].e0xp, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 623:
#line 2766 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_two(yystack.l_mark[-5].e0xp, yystack.l_mark[-3].d0eclst, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 624:
#line 2767 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_cons(yystack.l_mark[-4].e0xp, yystack.l_mark[-2].d0eclst, yystack.l_mark[-1].srpifkindtok, yystack.l_mark[0].d0eclst) ; }
break;
case 625:
#line 2771 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_reverse(yystack.l_mark[0].d0eclst) ; }
break;
case 626:
#line 2775 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_nil() ; }
break;
case 627:
#line 2776 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_cons(yystack.l_mark[-2].d0eclst, yystack.l_mark[-1].d0ec) ; }
break;
case 628:
#line 2780 "ats_grammar.yats"
	{ yyval.d0ec = yystack.l_mark[0].d0ec ; }
break;
case 629:
#line 2781 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_dcstdecs(yystack.l_mark[-3].dcstkind, yystack.l_mark[-2].s0qualstlst, yystack.l_mark[-1].d0cstdec, yystack.l_mark[0].d0cstdeclst) ; }
break;
case 630:
#line 2782 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_extype(yystack.l_mark[-2].s0tring, yystack.l_mark[0].s0exp) ; }
break;
case 631:
#line 2783 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_extval(yystack.l_mark[-2].s0tring, yystack.l_mark[0].d0exp) ; }
break;
case 632:
#line 2784 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_valdecs(yystack.l_mark[-2].valkind, yystack.l_mark[-1].v0aldec, yystack.l_mark[0].v0aldeclst) ; }
break;
case 633:
#line 2785 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_valdecs_par(yystack.l_mark[-1].v0aldec, yystack.l_mark[0].v0aldeclst) ; }
break;
case 634:
#line 2786 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_valdecs_rec(yystack.l_mark[-1].v0aldec, yystack.l_mark[0].v0aldeclst) ; }
break;
case 635:
#line 2787 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_fundecs(yystack.l_mark[-3].funkind, yystack.l_mark[-2].s0qualstlst, yystack.l_mark[-1].f0undec, yystack.l_mark[0].f0undeclst) ; }
break;
case 636:
#line 2788 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_vardecs(yystack.l_mark[-1].v0ardec, yystack.l_mark[0].v0ardeclst) ; }
break;
case 637:
#line 2789 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_impdec(yystack.l_mark[-2].t0kn, yystack.l_mark[-1].s0arglstlst, yystack.l_mark[0].i0mpdec) ; }
break;
case 638:
#line 2790 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_local(yystack.l_mark[-4].t0kn, yystack.l_mark[-3].d0eclst, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 639:
#line 2791 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_extcode_dyn(yystack.l_mark[0].e0xtcode) ; }
break;
case 640:
#line 2792 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_guadec(yystack.l_mark[-1].srpifkindtok, yystack.l_mark[0].d0eclst) ; }
break;
case 641:
#line 2793 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_include(1/*dyn*/, yystack.l_mark[0].s0tring) ; }
break;
case 642:
#line 2794 "ats_grammar.yats"
	{ yyval.d0ec = d0ec_dynload(yystack.l_mark[0].s0tring) ; }
break;
case 643:
#line 2798 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_one(yystack.l_mark[-3].e0xp, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 644:
#line 2799 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_two(yystack.l_mark[-5].e0xp, yystack.l_mark[-3].d0eclst, yystack.l_mark[-1].d0eclst, yystack.l_mark[0].t0kn) ; }
break;
case 645:
#line 2800 "ats_grammar.yats"
	{ yyval.d0eclst = guad0ec_cons(yystack.l_mark[-4].e0xp, yystack.l_mark[-2].d0eclst, yystack.l_mark[-1].srpifkindtok, yystack.l_mark[0].d0eclst) ; }
break;
case 646:
#line 2804 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_reverse(yystack.l_mark[0].d0eclst) ; }
break;
case 647:
#line 2808 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_nil() ; }
break;
case 648:
#line 2809 "ats_grammar.yats"
	{ yyval.d0eclst = d0ecllst_cons(yystack.l_mark[-2].d0eclst, yystack.l_mark[-1].d0ec) ; }
break;
#line 9768 "ats_grammar_yats.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
