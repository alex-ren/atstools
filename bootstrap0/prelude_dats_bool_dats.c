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

/* internal function declarations */

/* sum constructor declarations */

/* exception constructor declarations */

/* global dynamic constant declarations */

/* static temporary variable declarations */

/* function implementations */

/* static load function */

static int _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__staload_flag = 0 ;
ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__staload () {
if (_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__staload_flag) return ;
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__staload_flag = 1 ;
}

/* dynamic load function */

ats_void_type _2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__dynload () {
_2fhome_2ffac2_2fhwxi_2fresearch_2fATS_2fIMPLEMENT_2fGeizella_2fAnairiats_2fsvn_2fats_2dlang_2fsrc_2fprelude_dats_bool_2edats__staload () ;
}

/* external types */

/* external codes at mid */

/* external codes at bot */



ats_void_type
atspre_fprint_bool (
  ats_ptr_type out, ats_bool_type b
) {
  int n ;
  if (b) {
    n = fprintf ((FILE *)out, "true") ;
  } else {
    n = fprintf ((FILE *)out, "false") ;
  } // end of [if]
  if (n < 0) {
    ats_exit_errmsg(n, (ats_ptr_type)"Exit: [fprint_bool] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atspre_fprint_bool]


