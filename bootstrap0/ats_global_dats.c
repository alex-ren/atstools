/*
 *
 * This C code is generated by ATS/Geizella
 * The compilation time is: 2011-9-10: 10:17
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

/* external dynamic constructor declarations */

/* external dynamic constant declarations */

extern ats_void_type atsopt_global_initialize() ;

/* internal function declarations */

/* sum constructor declarations */

/* exception constructor declarations */

/* global dynamic constant declarations */

/* static temporary variable declarations */

ATSstatic_void(tmp0) ;

/* function implementations */

/* static load function */

static int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__staload_flag = 0 ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__staload () {
if (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__staload_flag) return ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__staload_flag = 1 ;
}

/* dynamic load function */

extern int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__dynload_flag ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__dynload () {
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__dynload_flag = 1 ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fats_global_2edats__staload () ;
/* tmp0 = */ atsopt_global_initialize () ;
}

/* external types */

/* external codes at mid */

/* external codes at bot */



static
ats_int_type the_dynloadflag = 0 ;

ats_int_type
atsopt_dynloadflag_get
  () { return the_dynloadflag ; }
// end of [atsopt_dynloadflag_get]

ats_void_type
atsopt_dynloadflag_set
  (ats_int_type flag) {
  the_dynloadflag = flag ; return ;
} // end of [atsopt_dynloadflag_set]

/* ****** ****** */

static
ats_ptr_type
the_dynloadfun_name = (ats_ptr_type)0 ;

ats_ptr_type
atsopt_dynloadfun_name_get
  () { return the_dynloadfun_name ; }
// end of ...

ats_void_type
atsopt_dynloadfun_name_set
  (ats_ptr_type name) {
  the_dynloadfun_name = name ; return ;
} // end of [atsopt_dynloadfun_name_set]




static
ats_ptr_type
the_atsopt_namespace = (ats_ptr_type)0 ;

ats_ptr_type
atsopt_namespace_get
  () { return the_atsopt_namespace ; }
// end of [atsopt_namespace_get]

ats_void_type
atsopt_namespace_set
  (ats_ptr_type prfx) {
  the_atsopt_namespace = prfx ; return ;
} // end of [atsopt_namespace_set]




ats_void_type
atsopt_global_initialize () {
  ATS_GC_MARKROOT (&the_dynloadfun_name, sizeof(ats_ptr_type)) ;
  ATS_GC_MARKROOT (&the_atsopt_namespace, sizeof(ats_ptr_type)) ;
  return ;
} // end of [atsopt_global_initialize]


