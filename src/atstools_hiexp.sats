(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(*                              Hongwei Xi                             *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Anairiats - Unleashing the Potential of Types!
** Copyright (C) 2002-2008 Hongwei Xi, Boston University
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of  the GNU GENERAL PUBLIC LICENSE (GPL) as published by the
** Free Software Foundation; either version 3, or (at  your  option)  any
** later version.
** 
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
** 
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*)

(* ****** ****** *)
//
// Author: Zhiqiang Ren (aren AT cs DOT bu DOT edu)
// Start Time: July 2013
//
(* ****** ****** *)

(* Tool for generating tags for ATS source code *)

(* ****** ****** *)


staload Fil = "ats_filename.sats"
typedef fil_t = $Fil.filename_t
staload Loc = "ats_location.sats"
typedef loc_t = $Loc.location_t

(* ****** ****** *)

staload "ats_staexp2.sats"
staload "ats_dynexp2.sats"

(* ****** ****** *)

staload "ats_hiexp.sats"

(* ****** ****** *)

fun atstools_generate_tags 
  {m:file_mode} (
  pf: file_mode_lte (m, w) 
| out: &FILE m,
, fil: fil_t
, hids: hideclst
): void // end of [atstools_generate_tags]


