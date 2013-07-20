/*
 *
 * This C code is generated by ATS/Geizella
 * The compilation time is: 2011-9-10: 10:18
 *
 */

#define _ATS_GEIZELLA 1

#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"

/* include some .cats files */

#include "prelude/CATS/array.cats"
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/string.cats"

/* external codes at top */

/* type definitions */

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0 ;

typedef struct {
ats_ptr_type atslab_d2exp_loc ;
ats_ptr_type atslab_d2exp_node ;
ats_ptr_type atslab_d2exp_typ ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_1 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_2 ;

typedef struct {
ats_ptr_type atslab_0 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_3 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_4 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_int_type atslab_2 ;
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_5 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
ats_ptr_type atslab_3 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_6 ;

typedef struct {
ats_ptr_type atslab_c2lau_loc ;
ats_ptr_type atslab_c2lau_pat ;
ats_ptr_type atslab_c2lau_gua ;
ats_int_type atslab_c2lau_seq ;
ats_int_type atslab_c2lau_neg ;
ats_ptr_type atslab_c2lau_exp ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_7 ;

/* external dynamic constructor declarations */

ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__list_cons) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__list_nil) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__None) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__Some) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eann_seff) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eann_type) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Ecaseof) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Echar) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Ecst) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eif) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eint) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Elam_dyn) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Elet) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eloopexn) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eraise) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Eseq) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Estring) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Etop) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Evar) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Ewhere) ;

/* external dynamic constant declarations */

extern ats_void_type atspre_prerr_newline() ;
extern ats_bool_type atspre_gt_int_int(ats_int_type, ats_int_type) ;
extern ats_void_type atspre_prerr_string(ats_ptr_type) ;
extern ats_var_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__abort() ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_location_2esats__prerr_location(ats_ptr_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2expopt_readize(ats_ptr_type, ats_ptr_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2exp_whnf(ats_ptr_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2cst_get_typ(ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_lin(ats_ptr_type, ats_int_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_get_typ(ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_typ(ats_ptr_type, ats_ptr_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_get_mastyp(ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_mastyp(ats_ptr_type, ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_readize(ats_ptr_type, ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2varlst_readize(ats_ptr_type, ats_ptr_type) ;
extern ats_bool_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised(ats_ptr_type) ;
extern ats_bool_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__c2lau_is_raised(ats_ptr_type) ;
extern ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__prerr_d2exp(ats_ptr_type) ;
extern ats_bool_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__s2cstref_equ_exp(ats_ptr_type, ats_ptr_type) ;
ATSextern(ats_ptr_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__Ptr_addr_type) ;

/* internal function declarations */

static ats_void_type prerr_loc_error2_0 (ats_ptr_type arg0) ;

static ats_void_type prerr_interror_1 () ;

static ats_bool_type d2exp_seq_is_raised_6 (ats_ptr_type arg0) ;

static ats_bool_type loop_7 (ats_ptr_type arg0, ats_ptr_type arg1) ;

static ats_bool_type c2laulst_is_raised_8 (ats_ptr_type arg0) ;

/* sum constructor declarations */

/* exception constructor declarations */

ATSglobal(ats_exn_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__FatalErrorException) ;
ATSglobal(ats_exn_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__DeadCodeException) ;
ATSglobal(ats_exn_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2flibats_lex_lexing_2esats__LexingErrorException) ;

/* global dynamic constant declarations */

/* static temporary variable declarations */

/* function implementations */

ats_void_type
prerr_loc_error2_0 (ats_ptr_type arg0) {
ATSlocal_void(tmp0) ;
ATSlocal_void(tmp1) ;
__ats_lab_prerr_loc_error2_0:
/* tmp1 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_location_2esats__prerr_location (arg0) ;
/* tmp0 = */ atspre_prerr_string (": error(2)") ;
return ;
} /* fun */

ats_void_type
prerr_interror_1 () {
ATSlocal_void(tmp2) ;
__ats_lab_prerr_interror_1:
/* tmp2 = */ atspre_prerr_string (": INTERNAL ERROR (ats_dynexp2_util)") ;
return ;
} /* fun */

ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_readize (ats_ptr_type arg0, ats_ptr_type arg1) {
ATSlocal_void(tmp3) ;
ATSlocal_void(tmp4) ;
ATSlocal_void(tmp5) ;
ATSlocal(ats_ptr_type, tmp6) ;
ATSlocal(ats_ptr_type, tmp7) ;
ATSlocal(ats_ptr_type, tmp8) ;
ATSlocal(ats_ptr_type, tmp9) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_readize:
/* tmp4 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_lin (arg1, -1) ;
tmp7 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_get_mastyp (arg1) ;
tmp6 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2expopt_readize (arg0, tmp7) ;
/* tmp5 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_mastyp (arg1, tmp6) ;
tmp9 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_get_typ (arg1) ;
tmp8 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2expopt_readize (arg0, tmp9) ;
/* tmp3 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_set_typ (arg1, tmp8) ;
return ;
} /* fun */

ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2varlst_readize (ats_ptr_type arg0, ats_ptr_type arg1) {
ATSlocal_void(tmp10) ;
ATSlocal(ats_ptr_type, tmp12) ;
ATSlocal(ats_ptr_type, tmp13) ;
ATSlocal_void(tmp14) ;
ATSlocal(ats_ptr_type, tmp15) ;
ATSlocal(ats_ptr_type, tmp16) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2varlst_readize:
do {
__ats_lab_0:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_1 ; }
tmp12 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg1)->atslab_0 ;
tmp13 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg1)->atslab_1 ;
/* tmp14 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_readize (arg0, tmp12) ;
tmp15 = arg0 ;
tmp16 = tmp13 ;
arg0 = tmp15 ;
arg1 = tmp16 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2varlst_readize ;
break ;

__ats_lab_1:
break ;

} while (0) ;
return ;
} /* fun */

ats_bool_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_varlamcst (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp18) ;
ATSlocal(ats_ptr_type, tmp19) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_varlamcst:
tmp19 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_1*)arg0)->atslab_d2exp_node ;
do {
__ats_lab_2:
if (((ats_sum_ptr_type)tmp19)->tag != 54) { goto __ats_lab_3 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_3:
if (((ats_sum_ptr_type)tmp19)->tag != 30) { goto __ats_lab_4 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_4:
if (((ats_sum_ptr_type)tmp19)->tag != 10) { goto __ats_lab_5 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_5:
if (((ats_sum_ptr_type)tmp19)->tag != 28) { goto __ats_lab_6 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_6:
if (((ats_sum_ptr_type)tmp19)->tag != 49) { goto __ats_lab_7 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_7:
if (tmp19 != &_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__D2Etop) { goto __ats_lab_8 ; }
tmp18 = ats_true_bool ;
break ;

__ats_lab_8:
tmp18 = ats_false_bool ;
break ;

} while (0) ;
return tmp18 ;
} /* fun */

ats_bool_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_var_cst_is_ptr (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp27) ;
ATSlocal(ats_ptr_type, tmp28) ;
ATSlocal(ats_ptr_type, tmp30) ;
ATSlocal(ats_ptr_type, tmp31) ;
ATSlocal(ats_ptr_type, tmp33) ;
ATSlocal(ats_ptr_type, tmp34) ;
ATSlocal(ats_ptr_type, tmp37) ;
ATSlocal(ats_ptr_type, tmp38) ;
ATSlocal(ats_ptr_type, tmp39) ;
ATSlocal_void(tmp41) ;
ATSlocal(ats_ptr_type, tmp42) ;
ATSlocal_void(tmp43) ;
ATSlocal_void(tmp44) ;
ATSlocal_void(tmp45) ;
ATSlocal_void(tmp46) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_var_cst_is_ptr:
tmp28 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_1*)arg0)->atslab_d2exp_node ;
do {
__ats_lab_9:
if (((ats_sum_ptr_type)tmp28)->tag != 54) { goto __ats_lab_10 ; }
tmp30 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_2*)tmp28)->atslab_0 ;
tmp31 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2var_get_typ (tmp30) ;
do {
__ats_lab_11:
if (tmp31 == (ats_sum_ptr_type)0) { goto __ats_lab_12 ; }
tmp33 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_3*)tmp31)->atslab_0 ;
tmp34 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2exp_whnf (tmp33) ;
tmp27 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__s2cstref_equ_exp (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__Ptr_addr_type, tmp34) ;
break ;

__ats_lab_12:
tmp27 = ats_false_bool ;
break ;

} while (0) ;
break ;

__ats_lab_10:
if (((ats_sum_ptr_type)tmp28)->tag != 12) { goto __ats_lab_13 ; }
tmp37 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_2*)tmp28)->atslab_0 ;
tmp38 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2cst_get_typ (tmp37) ;
tmp39 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__s2exp_whnf (tmp38) ;
tmp27 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__s2cstref_equ_exp (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__Ptr_addr_type, tmp39) ;
break ;

__ats_lab_13:
tmp42 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_1*)arg0)->atslab_d2exp_loc ;
/* tmp41 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_location_2esats__prerr_location (tmp42) ;
/* tmp43 = */ prerr_interror_1 () ;
/* tmp44 = */ atspre_prerr_string (": d2exp_var_cst_is_ptr: d2e = ") ;
/* tmp45 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__prerr_d2exp (arg0) ;
/* tmp46 = */ atspre_prerr_newline () ;
/* tmp27 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__abort () ;
break ;

} while (0) ;
return tmp27 ;
} /* fun */

ats_bool_type
d2exp_seq_is_raised_6 (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp47) ;
ATSlocal(ats_ptr_type, tmp56) ;
ATSlocal(ats_ptr_type, tmp57) ;
__ats_lab_d2exp_seq_is_raised_6:
do {
__ats_lab_16:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_17 ; }
tmp56 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg0)->atslab_0 ;
tmp57 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg0)->atslab_1 ;
tmp47 = loop_7 (tmp56, tmp57) ;
break ;

__ats_lab_17:
tmp47 = ats_false_bool ;
break ;

} while (0) ;
return tmp47 ;
} /* fun */

ats_bool_type
loop_7 (ats_ptr_type arg0, ats_ptr_type arg1) {
ATSlocal(ats_bool_type, tmp48) ;
ATSlocal(ats_ptr_type, tmp50) ;
ATSlocal(ats_ptr_type, tmp51) ;
ATSlocal(ats_ptr_type, tmp52) ;
ATSlocal(ats_ptr_type, tmp53) ;
__ats_lab_loop_7:
do {
__ats_lab_14:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_15 ; }
tmp50 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg1)->atslab_0 ;
tmp51 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg1)->atslab_1 ;
tmp52 = tmp50 ;
tmp53 = tmp51 ;
arg0 = tmp52 ;
arg1 = tmp53 ;
goto __ats_lab_loop_7 ;
break ;

__ats_lab_15:
tmp48 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised (arg0) ;
break ;

} while (0) ;
return tmp48 ;
} /* fun */

ats_bool_type
c2laulst_is_raised_8 (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp59) ;
ATSlocal(ats_ptr_type, tmp61) ;
ATSlocal(ats_ptr_type, tmp62) ;
ATSlocal(ats_bool_type, tmp63) ;
ATSlocal(ats_ptr_type, tmp65) ;
__ats_lab_c2laulst_is_raised_8:
do {
__ats_lab_18:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_19 ; }
tmp61 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg0)->atslab_0 ;
tmp62 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_0*)arg0)->atslab_1 ;
tmp63 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__c2lau_is_raised (tmp61) ;
if (tmp63) {
tmp65 = tmp62 ;
arg0 = tmp65 ;
goto __ats_lab_c2laulst_is_raised_8 ;
} else {
tmp59 = ats_false_bool ;
} /* if */
break ;

__ats_lab_19:
tmp59 = ats_true_bool ;
break ;

} while (0) ;
return tmp59 ;
} /* fun */

ats_bool_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp68) ;
ATSlocal(ats_ptr_type, tmp69) ;
ATSlocal(ats_ptr_type, tmp71) ;
ATSlocal(ats_ptr_type, tmp72) ;
ATSlocal(ats_ptr_type, tmp74) ;
ATSlocal(ats_ptr_type, tmp75) ;
ATSlocal(ats_ptr_type, tmp77) ;
ATSlocal(ats_ptr_type, tmp79) ;
ATSlocal(ats_ptr_type, tmp80) ;
ATSlocal(ats_ptr_type, tmp82) ;
ATSlocal(ats_bool_type, tmp83) ;
ATSlocal(ats_ptr_type, tmp85) ;
ATSlocal(ats_ptr_type, tmp89) ;
ATSlocal(ats_ptr_type, tmp90) ;
ATSlocal(ats_ptr_type, tmp94) ;
ATSlocal(ats_ptr_type, tmp96) ;
ATSlocal(ats_ptr_type, tmp97) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised:
tmp69 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_1*)arg0)->atslab_d2exp_node ;
do {
__ats_lab_20:
if (((ats_sum_ptr_type)tmp69)->tag != 2) { goto __ats_lab_21 ; }
tmp71 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_4*)tmp69)->atslab_0 ;
tmp72 = tmp71 ;
arg0 = tmp72 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised ;
break ;

__ats_lab_21:
if (((ats_sum_ptr_type)tmp69)->tag != 1) { goto __ats_lab_22 ; }
tmp74 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_4*)tmp69)->atslab_0 ;
tmp75 = tmp74 ;
arg0 = tmp75 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised ;
break ;

__ats_lab_22:
if (((ats_sum_ptr_type)tmp69)->tag != 9) { goto __ats_lab_23 ; }
tmp77 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_5*)tmp69)->atslab_4 ;
tmp68 = c2laulst_is_raised_8 (tmp77) ;
break ;

__ats_lab_23:
if (((ats_sum_ptr_type)tmp69)->tag != 27) { goto __ats_lab_24 ; }
tmp79 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_6*)tmp69)->atslab_2 ;
tmp80 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_6*)tmp69)->atslab_3 ;
do {
__ats_lab_25:
if (tmp80 == (ats_sum_ptr_type)0) { goto __ats_lab_26 ; }
tmp82 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_3*)tmp80)->atslab_0 ;
tmp83 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised (tmp79) ;
if (tmp83) {
tmp85 = tmp82 ;
arg0 = tmp85 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised ;
} else {
tmp68 = ats_false_bool ;
} /* if */
break ;

__ats_lab_26:
tmp68 = ats_false_bool ;
break ;

} while (0) ;
break ;

__ats_lab_24:
if (((ats_sum_ptr_type)tmp69)->tag != 36) { goto __ats_lab_27 ; }
tmp89 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_4*)tmp69)->atslab_1 ;
tmp90 = tmp89 ;
arg0 = tmp90 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised ;
break ;

__ats_lab_27:
if (((ats_sum_ptr_type)tmp69)->tag != 37) { goto __ats_lab_28 ; }
tmp68 = ats_true_bool ;
break ;

__ats_lab_28:
if (((ats_sum_ptr_type)tmp69)->tag != 42) { goto __ats_lab_29 ; }
tmp68 = ats_true_bool ;
break ;

__ats_lab_29:
if (((ats_sum_ptr_type)tmp69)->tag != 46) { goto __ats_lab_30 ; }
tmp94 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_2*)tmp69)->atslab_0 ;
tmp68 = d2exp_seq_is_raised_6 (tmp94) ;
break ;

__ats_lab_30:
if (((ats_sum_ptr_type)tmp69)->tag != 56) { goto __ats_lab_31 ; }
tmp96 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_sum_4*)tmp69)->atslab_0 ;
tmp97 = tmp96 ;
arg0 = tmp97 ;
goto __ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised ;
break ;

__ats_lab_31:
tmp68 = ats_false_bool ;
break ;

} while (0) ;
return tmp68 ;
} /* fun */

ats_bool_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__c2lau_is_raised (ats_ptr_type arg0) {
ATSlocal(ats_bool_type, tmp99) ;
ATSlocal(ats_bool_type, tmp100) ;
ATSlocal(ats_int_type, tmp101) ;
ATSlocal(ats_ptr_type, tmp104) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__c2lau_is_raised:
tmp101 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_7*)arg0)->atslab_c2lau_neg ;
tmp100 = atspre_gt_int_int (tmp101, 0) ;
if (tmp100) {
tmp99 = ats_true_bool ;
} else {
tmp104 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats_rec_7*)arg0)->atslab_c2lau_exp ;
tmp99 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__d2exp_is_raised (tmp104) ;
} /* if */
return tmp99 ;
} /* fun */

/* static load function */

extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_label_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symenv_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_map_lin_2edats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symenv_2edats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__staload () ;
static int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__staload_flag = 0 ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__staload () {
if (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__staload_flag) return ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__staload_flag = 1 ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_label_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symenv_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_map_lin_2edats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symenv_2edats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_staexp2_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_stadyncst2_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__FatalErrorException.tag = ats_exception_con_tag_new () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__FatalErrorException.name = "_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__FatalErrorException" ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__DeadCodeException.tag = ats_exception_con_tag_new () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__DeadCodeException.name = "_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_error_2esats__DeadCodeException" ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2flibats_lex_lexing_2esats__LexingErrorException.tag = ats_exception_con_tag_new () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2flibats_lex_lexing_2esats__LexingErrorException.name = "_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2flibats_lex_lexing_2esats__LexingErrorException" ;
}

/* dynamic load function */

extern int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__dynload_flag ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__dynload () {
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__dynload_flag = 1 ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_dynexp2_util_2edats__staload () ;
}

/* external types */

/* external codes at mid */

/* external codes at bot */

