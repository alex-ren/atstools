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
ats_ptr_type atslab_ptr ;
ats_int_type atslab_size ;
ats_int_type atslab_nitm ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
} _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_sum_1 ;

/* external dynamic constructor declarations */

ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__None) ;
ATSextern(ats_sum_type, _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fprelude_2fGEIZELLA_2fbasics_sta_2esats__Some) ;

/* external dynamic constant declarations */

extern ats_void_type atspre_vbox_make_view_ptr(ats_ptr_type) ;
extern ats_int_type atspre_iadd(ats_int_type, ats_int_type) ;
extern ats_int_type atspre_isub(ats_int_type, ats_int_type) ;
extern ats_int_type atspre_imul(ats_int_type, ats_int_type) ;
extern ats_bool_type atspre_ilt(ats_int_type, ats_int_type) ;
extern ats_bool_type atspre_igt(ats_int_type, ats_int_type) ;
extern ats_int_type atspre_imax(ats_int_type, ats_int_type) ;
extern ats_int_type atspre_uimod(ats_uint_type, ats_int_type) ;
extern ats_uint_type atspre_uint_of_ulint(ats_ulint_type) ;
extern ats_ptr_type atspre_padd_size(ats_ptr_type, ats_size_type) ;
extern ats_ptr_type atspre_ptr_alloc_tsz(ats_size_type) ;
extern ats_bool_type atspre_eq_string_string(ats_ptr_type, ats_ptr_type) ;
extern ats_ulint_type atspre_string_hash_33(ats_ptr_type) ;
extern ats_ptr_type ats_array_ptr_alloc_tsz(ats_int_type, ats_size_type) ;
extern ats_void_type ats_array_ptr_free(ats_ptr_type) ;
extern ats_ptr_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__symbol_name(ats_ptr_type) ;

/* internal function declarations */

static ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__array_ptr_initialize_elt__ats_ptr_type (ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;

static ats_void_type aux_2 (ats_ptr_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;

static ats_ptr_type symtbl_search_probe_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) ;

static ats_void_type symtbl_insert_probe_5 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) ;

static ats_void_type symtbl_resize_move_6 (ats_ptr_type arg0, ats_ptr_type arg1, ats_int_type arg2, ats_int_type arg3) ;

static ats_void_type symtbl_resize_7 (ats_ptr_type arg0) ;

static ats_void_type symtbl_resize_if_8 (ats_ptr_type arg0) ;

/* sum constructor declarations */

/* exception constructor declarations */

/* global dynamic constant declarations */

/* static temporary variable declarations */

/* function implementations */

ats_ptr_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_make (ats_int_type arg0) {
ATSlocal(ats_ptr_type, tmp0) ;
ATSlocal(ats_ptr_type, tmp1) ;
ATSlocal(ats_ptr_type, tmp2) ;
ATSlocal(ats_int_type, tmp3) ;
ATSlocal(ats_ptr_type, tmp4) ;
ATSlocal(ats_ptr_type, tmp5) ;
ATSlocal_void(tmp6) ;
ATSlocal(ats_ptr_type, tmp7) ;
ATSlocal_void(tmp19) ;
ATSlocal_void(tmp20) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_make:
tmp1 = atspre_ptr_alloc_tsz (sizeof(_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0)) ;
tmp2 = (tmp1) ;
tmp3 = atspre_imax (arg0, 1) ;
tmp4 = ats_array_ptr_alloc_tsz (tmp3, sizeof(ats_ptr_type)) ;
tmp5 = (tmp4) ;
tmp7 = (ats_sum_ptr_type)0 ;

/* tmp6 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__array_ptr_initialize_elt__ats_ptr_type (tmp5, tmp3, tmp7) ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp2)->atslab_ptr) = tmp5 ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp2)->atslab_size) = tmp3 ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp2)->atslab_nitm) = 0 ;
/* tmp19 = */ atspre_vbox_make_view_ptr (tmp2) ;
/* tmp20 = (tmp19) */;
tmp0 = tmp2 ;
return tmp0 ;
} /* fun */

ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__array_ptr_initialize_elt__ats_ptr_type (ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
ATSlocal_void(tmp8) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__array_ptr_initialize_elt__ats_ptr_type:
/* tmp8 = */ aux_2 (arg0, arg1, arg2) ;
return ;
} /* fun */

ats_void_type
aux_2 (ats_ptr_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
ATSlocal_void(tmp9) ;
ATSlocal(ats_bool_type, tmp10) ;
ATSlocal(ats_ptr_type, tmp12) ;
ATSlocal(ats_int_type, tmp13) ;
ATSlocal(ats_ptr_type, tmp14) ;
__ats_lab_aux_2:
tmp10 = atspre_igt (arg1, 0) ;
if (tmp10) {
*((ats_ptr_type*)arg0) = arg2 ;
tmp12 = atspre_padd_size (arg0, sizeof(ats_ptr_type)) ;
tmp13 = atspre_isub (arg1, 1) ;
tmp14 = arg2 ;
arg0 = tmp12 ;
arg1 = tmp13 ;
arg2 = tmp14 ;
goto __ats_lab_aux_2 ;
} else {
/* tmp9 = ?void */ ;
} /* if */
return ;
} /* fun */

ats_ptr_type
symtbl_search_probe_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) {
ATSlocal(ats_ptr_type, tmp21) ;
ATSlocal(ats_ptr_type, tmp22) ;
ATSlocal(ats_ptr_type, tmp24) ;
ATSlocal(ats_bool_type, tmp25) ;
ATSlocal(ats_ptr_type, tmp26) ;
ATSlocal(ats_int_type, tmp29) ;
ATSlocal(ats_int_type, tmp30) ;
ATSlocal(ats_bool_type, tmp31) ;
ATSlocal(ats_ptr_type, tmp34) ;
ATSlocal(ats_int_type, tmp35) ;
ATSlocal(ats_int_type, tmp36) ;
ATSlocal(ats_ptr_type, tmp37) ;
__ats_lab_symtbl_search_probe_3:
tmp22 = (((ats_ptr_type*)arg0)[arg2]) ;
do {
__ats_lab_0:
if (tmp22 == (ats_sum_ptr_type)0) { goto __ats_lab_1 ; }
tmp24 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_sum_1*)tmp22)->atslab_0 ;
tmp26 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__symbol_name (tmp24) ;
tmp25 = atspre_eq_string_string (tmp26, arg3) ;
if (tmp25) {
tmp21 = tmp22 ;
} else {
tmp29 = atspre_iadd (arg2, 1) ;
tmp31 = atspre_ilt (tmp29, arg1) ;
if (tmp31) {
tmp30 = tmp29 ;
} else {
tmp30 = 0 ;
} /* if */
tmp34 = arg0 ;
tmp35 = arg1 ;
tmp36 = tmp30 ;
tmp37 = arg3 ;
arg0 = tmp34 ;
arg1 = tmp35 ;
arg2 = tmp36 ;
arg3 = tmp37 ;
goto __ats_lab_symtbl_search_probe_3 ;
} /* if */
break ;

__ats_lab_1:
tmp21 = (ats_sum_ptr_type)0 ;

break ;

} while (0) ;
return tmp21 ;
} /* fun */

ats_ptr_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_search (ats_ptr_type arg0, ats_ptr_type arg1) {
ATSlocal(ats_ptr_type, tmp39) ;
ATSlocal(ats_ulint_type, tmp40) ;
ATSlocal(ats_uint_type, tmp41) ;
ATSlocal(ats_ptr_type, tmp42) ;
ATSlocal(ats_int_type, tmp43) ;
ATSlocal(ats_int_type, tmp44) ;
ATSlocal(ats_ptr_type, tmp45) ;
ATSlocal(ats_int_type, tmp46) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_search:
tmp40 = atspre_string_hash_33 (arg1) ;
tmp41 = atspre_uint_of_ulint (tmp40) ;
tmp42 = (arg0) ;
tmp44 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp42)->atslab_size) ;
tmp43 = atspre_uimod (tmp41, tmp44) ;
tmp45 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp42)->atslab_ptr) ;
tmp46 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp42)->atslab_size) ;
tmp39 = symtbl_search_probe_3 (tmp45, tmp46, tmp43, arg1) ;
return tmp39 ;
} /* fun */

ats_void_type
symtbl_insert_probe_5 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) {
ATSlocal_void(tmp47) ;
ATSlocal(ats_ptr_type, tmp48) ;
ATSlocal(ats_int_type, tmp50) ;
ATSlocal(ats_int_type, tmp51) ;
ATSlocal(ats_bool_type, tmp52) ;
ATSlocal(ats_ptr_type, tmp55) ;
ATSlocal(ats_int_type, tmp56) ;
ATSlocal(ats_int_type, tmp57) ;
ATSlocal(ats_ptr_type, tmp58) ;
ATSlocal(ats_ptr_type, tmp60) ;
__ats_lab_symtbl_insert_probe_5:
tmp48 = (((ats_ptr_type*)arg0)[arg2]) ;
do {
__ats_lab_2:
if (tmp48 == (ats_sum_ptr_type)0) { goto __ats_lab_3 ; }
tmp50 = atspre_iadd (arg2, 1) ;
tmp52 = atspre_ilt (tmp50, arg1) ;
if (tmp52) {
tmp51 = tmp50 ;
} else {
tmp51 = 0 ;
} /* if */
tmp55 = arg0 ;
tmp56 = arg1 ;
tmp57 = tmp51 ;
tmp58 = arg3 ;
arg0 = tmp55 ;
arg1 = tmp56 ;
arg2 = tmp57 ;
arg3 = tmp58 ;
goto __ats_lab_symtbl_insert_probe_5 ;
break ;

__ats_lab_3:
tmp60 = ATS_MALLOC(sizeof(_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_sum_1)) ;
((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_sum_1*)tmp60)->atslab_0 = arg3 ;

(((ats_ptr_type*)arg0)[arg2]) = tmp60 ;
break ;

} while (0) ;
return ;
} /* fun */

ats_void_type
symtbl_resize_move_6 (ats_ptr_type arg0, ats_ptr_type arg1, ats_int_type arg2, ats_int_type arg3) {
ATSlocal_void(tmp61) ;
ATSlocal(ats_bool_type, tmp62) ;
ATSlocal(ats_ptr_type, tmp65) ;
ATSlocal(ats_ptr_type, tmp67) ;
ATSlocal(ats_int_type, tmp68) ;
ATSlocal(ats_ulint_type, tmp69) ;
ATSlocal(ats_ptr_type, tmp70) ;
ATSlocal(ats_uint_type, tmp71) ;
ATSlocal(ats_int_type, tmp72) ;
ATSlocal_void(tmp73) ;
ATSlocal(ats_ptr_type, tmp75) ;
ATSlocal(ats_ptr_type, tmp76) ;
ATSlocal(ats_int_type, tmp77) ;
ATSlocal(ats_int_type, tmp78) ;
__ats_lab_symtbl_resize_move_6:
tmp62 = atspre_ilt (arg3, arg2) ;
if (tmp62) {
tmp65 = (((ats_ptr_type*)arg0)[arg3]) ;
do {
__ats_lab_4:
if (tmp65 == (ats_sum_ptr_type)0) { goto __ats_lab_5 ; }
tmp67 = ((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_sum_1*)tmp65)->atslab_0 ;
tmp68 = atspre_iadd (arg2, arg2) ;
tmp70 = _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__symbol_name (tmp67) ;
tmp69 = atspre_string_hash_33 (tmp70) ;
tmp71 = atspre_uint_of_ulint (tmp69) ;
tmp72 = atspre_uimod (tmp71, tmp68) ;
/* tmp73 = */ symtbl_insert_probe_5 (arg1, tmp68, tmp72, tmp67) ;
break ;

__ats_lab_5:
break ;

} while (0) ;
tmp75 = arg0 ;
tmp76 = arg1 ;
tmp77 = arg2 ;
tmp78 = atspre_iadd (arg3, 1) ;
arg0 = tmp75 ;
arg1 = tmp76 ;
arg2 = tmp77 ;
arg3 = tmp78 ;
goto __ats_lab_symtbl_resize_move_6 ;
} else {
} /* if */
return ;
} /* fun */

ats_void_type
symtbl_resize_7 (ats_ptr_type arg0) {
ATSlocal_void(tmp80) ;
ATSlocal(ats_ptr_type, tmp81) ;
ATSlocal(ats_ptr_type, tmp82) ;
ATSlocal(ats_int_type, tmp83) ;
ATSlocal(ats_int_type, tmp84) ;
ATSlocal(ats_ptr_type, tmp85) ;
ATSlocal(ats_ptr_type, tmp86) ;
ATSlocal_void(tmp87) ;
ATSlocal(ats_ptr_type, tmp88) ;
ATSlocal_void(tmp89) ;
ATSlocal_void(tmp90) ;
ATSlocal(ats_int_type, tmp93) ;
__ats_lab_symtbl_resize_7:
tmp81 = (arg0) ;
tmp82 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp81)->atslab_ptr) ;
tmp83 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp81)->atslab_size) ;
tmp84 = atspre_iadd (tmp83, tmp83) ;
tmp85 = ats_array_ptr_alloc_tsz (tmp84, sizeof(ats_ptr_type)) ;
tmp86 = (tmp85) ;
tmp88 = (ats_sum_ptr_type)0 ;

/* tmp87 = */ _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__array_ptr_initialize_elt__ats_ptr_type (tmp86, tmp84, tmp88) ;
/* tmp89 = */ symtbl_resize_move_6 (tmp82, tmp86, tmp83, 0) ;
/* tmp90 = */ ats_array_ptr_free (tmp82) ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp81)->atslab_ptr) = tmp86 ;
tmp93 = atspre_iadd (tmp83, tmp83) ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp81)->atslab_size) = tmp93 ;
return ;
} /* fun */

ats_void_type
symtbl_resize_if_8 (ats_ptr_type arg0) {
ATSlocal_void(tmp94) ;
ATSlocal(ats_int_type, tmp95) ;
ATSlocal(ats_ptr_type, tmp96) ;
ATSlocal(ats_int_type, tmp97) ;
ATSlocal(ats_ptr_type, tmp98) ;
ATSlocal(ats_bool_type, tmp99) ;
ATSlocal(ats_int_type, tmp100) ;
__ats_lab_symtbl_resize_if_8:
tmp96 = (arg0) ;
tmp95 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp96)->atslab_nitm) ;
tmp98 = (arg0) ;
tmp97 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp98)->atslab_size) ;
tmp100 = atspre_imul (2, tmp95) ;
tmp99 = atspre_igt (tmp100, tmp97) ;
if (tmp99) {
/* tmp94 = */ symtbl_resize_7 (arg0) ;
} else {
} /* if */
return ;
} /* fun */

ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_insert (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2) {
ATSlocal_void(tmp103) ;
ATSlocal_void(tmp104) ;
ATSlocal(ats_ulint_type, tmp105) ;
ATSlocal(ats_uint_type, tmp106) ;
ATSlocal(ats_ptr_type, tmp107) ;
ATSlocal(ats_int_type, tmp108) ;
ATSlocal(ats_int_type, tmp109) ;
ATSlocal_void(tmp110) ;
ATSlocal(ats_ptr_type, tmp111) ;
ATSlocal(ats_int_type, tmp112) ;
ATSlocal(ats_int_type, tmp113) ;
ATSlocal(ats_int_type, tmp114) ;
__ats_lab__2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__symtbl_insert:
/* tmp104 = */ symtbl_resize_if_8 (arg0) ;
tmp105 = atspre_string_hash_33 (arg1) ;
tmp106 = atspre_uint_of_ulint (tmp105) ;
tmp107 = (arg0) ;
tmp109 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp107)->atslab_size) ;
tmp108 = atspre_uimod (tmp106, tmp109) ;
tmp111 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp107)->atslab_ptr) ;
tmp112 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp107)->atslab_size) ;
/* tmp110 = */ symtbl_insert_probe_5 (tmp111, tmp112, tmp108, arg2) ;
tmp114 = (((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp107)->atslab_nitm) ;
tmp113 = atspre_iadd (1, tmp114) ;
(((_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats_rec_0*)tmp107)->atslab_nitm) = tmp113 ;
return ;
} /* fun */

/* static load function */

extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2edats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_counter_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__staload () ;
extern ats_void_type
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__staload () ;
static int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__staload_flag = 0 ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__staload () {
if (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__staload_flag) return ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__staload_flag = 1 ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_array_2edats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_counter_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symbol_2esats__staload () ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2esats__staload () ;
}

/* dynamic load function */

extern int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__dynload_flag ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__dynload () {
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__dynload_flag = 1 ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_symtbl_2edats__staload () ;
}

/* external types */

/* external codes at mid */

/* external codes at bot */

