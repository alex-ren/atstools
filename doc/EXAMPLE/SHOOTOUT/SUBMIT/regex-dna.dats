(*
** The Computer Language Shootout
** http://shootout.alioth.debian.org/
** contributed by Hongwei Xi (hwxi AT cs DOT bu DOT edu)
**
** regex-dna benchmark using PCRE
**
** compilation command:
**   atscc -O3 -fomit-frame-pointer -o regex-dna regex-dna.dats -lpcre
*)

(* ****** ****** *)

%{^
#include <pcre.h>
%} // end of [%{^]

(* ****** ****** *)

staload _(*anonymous*) = "prelude/DATS/array.dats"

(* ****** ****** *)

viewdef bytes_v (n:int, l:addr) = bytes n @ l

extern fun malloc_atm {n:nat}
  (n: int n): [l:addr] @(bytes_v (n, l) | ptr l) = "malloc_atm"

extern fun free_atm {n:nat} {l:addr}
  (pf: bytes_v (n, l) | p: ptr l): void = "free_atm"

%{^

static inline
ats_ptr_type malloc_atm (ats_int_type n) {
  ats_ptr_type p = malloc (n) ;
  if (!p) {
    fprintf (stderr, "Exit: [malloc_atm] failed.\n") ; exit (1) ;
  }
  return p ;
}

static inline
ats_void_type free_atm (ats_ptr_type p) { free (p) ; return ; }

%}

(* ****** ****** *)

viewdef block_v (sz:int, l:addr) = bytes_v (sz, l)
dataviewtype blocklst (int) =
  | {n:nat} {sz:nat} {l:addr} blocklst_cons (n+1) of
      (block_v (sz, l) | int sz, ptr l, blocklst n)
  | blocklst_nil (0)
viewtypedef blocklst = [n:nat] blocklst (n)

(* ****** ****** *)

(*
extern typedef "blocklst_cons_pstruct" =
  blocklst_cons_pstruct (void | int, ptr, blocklst)
*)

%{^
typedef struct {
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
} *blocklst_cons_pstruct ;
%}

(* ****** ****** *)

extern fun fread_stdin_block {sz:nat} {l:addr}
  (pf: !block_v (sz, l) | sz: int sz, p: ptr l): natLte sz
  = "fread_stdin_block"

%{$

ats_int_type
fread_stdin_block (ats_int_type sz0, ats_ptr_type p0) {
  char *p ; int nread, sz ;
  p = p0; sz = sz0 ;
  while (sz > 0) {
    nread = fread (p, 1, sz, stdin) ;
    if (nread > 0) { p += nread ; sz -= nread ; continue ; }
    if (feof (stdin)) break ;
  }
  return (sz0 - sz) ;
}

%}

(* ****** ****** *)

fn fread_stdin_blocklst {sz:nat}
  (sz: int sz, tot: &int): blocklst = let
  fun loop {tot: addr} (
      pf_tot: !int @ tot |
      sz: int sz, p_tot: ptr tot, res: &blocklst? >> blocklst
    ) : void = let
    val (pf | p) = malloc_atm (sz)
    val n = fread_stdin_block (pf | sz, p); val () = !p_tot := !p_tot + n
    val () = (res := blocklst_cons {0} (pf | sz, p, ?))
    val+ blocklst_cons (_ | _, _, !res1) = res
  in
    if n < sz then begin
      !res1 := blocklst_nil (); fold@ res
    end else begin
      loop (pf_tot | sz, p_tot, !res1); fold@ res
    end // end of [if]
  end // end of [loop]
  var res: blocklst; val () = loop (view@ tot | sz, &tot, res)
in
  res
end // end of [fread_stdin_blocklst]

(* ****** ****** *)

extern fun blocklst_concat_and_free
  {n:nat} (n: int n, blks: blocklst): [l:addr] @(bytes_v (n, l) | ptr l)
  = "blocklst_concat_and_free"

%{$

ats_ptr_type
blocklst_concat_and_free
  (ats_int_type tot, ats_ptr_type blks) {
  char *res0, *res, *p_blk ;
  int lft, sz ; blocklst_cons_pstruct blks_nxt ;

  lft = tot ; res0 = res = malloc_atm (tot) ;

  while (blks) {
    sz = ((blocklst_cons_pstruct)blks)->atslab_0 ;
    p_blk = ((blocklst_cons_pstruct)blks)->atslab_1 ;
    if (sz < lft) {
      memcpy (res, p_blk, sz) ;
    } else {
      memcpy (res, p_blk, lft) ; lft = 0 ; break ;
    }
    res += sz ; lft -= sz ;
    blks_nxt = ((blocklst_cons_pstruct)blks)->atslab_2 ;
    free_atm (p_blk) ; ATS_FREE (blks) ;
    blks = blks_nxt ;
  }
  return res0 ;
}

%}

(* ****** ****** *)

%{$

ats_int_type
count_pattern_match
  (ats_int_type nsrc, ats_ptr_type src, ats_ptr_type pat) {
  int count ;
  pcre *re; pcre_extra *re_ex ; const char *re_e ;
  int err, re_eo, m[3], pos ;

  re = pcre_compile
    ((char*)pat, PCRE_CASELESS, &re_e, &re_eo, NULL) ;
  if (!re) exit (1) ;
  re_ex = pcre_study (re, 0, &re_e);  

  for (count = 0, pos = 0 ; ; ) {
    err = pcre_exec (re, re_ex, (char*)src, nsrc, pos, 0, m, 3) ;
    if (err < 0) break ; count += 1 ; pos = m[1] ;
  }
  return count ;
} // end of [count_pattern_match]

%}

(* ****** ****** *)

extern fun count_pattern_match {n:nat} {l:addr}
  (pf: !bytes_v (n, l) | n: int n, p: ptr l, pat: string): int
  = "count_pattern_match"

(* ****** ****** *)

#define variants_length 9
val variants = array_make_arrpsz{string}($arrpsz(
  "agggtaaa|tttaccct"
, "[cgt]gggtaaa|tttaccc[acg]"
, "a[act]ggtaaa|tttacc[agt]t"
, "ag[act]gtaaa|tttac[agt]ct"
, "agg[act]taaa|ttta[agt]cct"
, "aggg[acg]aaa|ttt[cgt]ccct"
, "agggt[cgt]aa|tt[acg]accct"
, "agggta[cgt]a|t[acg]taccct"
, "agggtaa[cgt]|[acg]ttaccct"
)) // end of [variants]

fun count_loop {i:nat} {n:nat} {l:addr}
  (pf: !bytes_v (n, l) | n: int n, p: ptr l, i: int i): void =
  if i < variants_length then let
    val pat = variants[i]
    val cnt = count_pattern_match (pf | n, p, pat)
    val () = (print pat ; print ' '; print cnt ; print_newline ())
  in
    count_loop (pf | n, p, i + 1)
  end // end of [if]
// end of [count_loop]

(* ****** ****** *)

datatype seglst (int) =
  | {n:nat} seglst_cons (n+1) of (int(*beg*), int(*len*), seglst n)
  | seglst_nil (0)
typedef seglst0 = seglst 0
typedef seglst = [n:nat] seglst (n)

extern typedef "seglst_cons_pstruct" =
  seglst_cons_pstruct (int, int, seglst)

extern fun seglst_cons_make
  (beg: int, len: int): seglst_cons_pstruct (int, int, seglst0?)
  = "seglst_cons_make"

implement seglst_cons_make (beg, len) = seglst_cons {0} (beg, len, ?)

extern typedef "int_ptr_type" = @(void | int, ptr)

%{$

ats_void_type subst_copy (
  char *dst, char *src, int nsrc, seglst_cons_pstruct sgs, char *sub, int nsub
) {
  int ofs, beg, len ; seglst_cons_pstruct sgs_nxt ;
  for (ofs = 0 ; ; ) {
    if (!sgs) break ;
    beg = sgs->atslab_0 ; len = beg - ofs ;
    memcpy (dst, src, len) ; dst += len ; src += len ; ofs = beg ;
    len = sgs->atslab_1 ;
    memcpy (dst, sub, nsub) ; dst += nsub ; src += len ; ofs += len ;
    sgs_nxt = sgs->atslab_2 ; ATS_FREE (sgs); sgs = sgs_nxt ;
  }
  len = nsrc - ofs ;  memcpy (dst, src, len) ; return ;
}

int_ptr_type subst_pattern_string
  (ats_int_type nsrc, ats_ptr_type src, ats_ptr_type pat, ats_ptr_type sub) {
  char *dst ; int ndst, nsub ; int beg, len, nxt ;
  pcre *re; pcre_extra *re_ex ; const char *re_e ;
  int err, re_eo, m[3], pos ;
  seglst_cons_pstruct sgs0, sgs, *sgs_ptr ;
  int_ptr_type ans ;

  ndst = nsrc ; nsub = strlen ((char*)sub) ;
  re = pcre_compile
    ((char*)pat, PCRE_CASELESS, &re_e, &re_eo, NULL) ;
  if (!re) exit (1) ;
  re_ex = pcre_study (re, 0, &re_e);  
  for (pos = 0, sgs_ptr = &sgs0 ; ; ) {
    err = pcre_exec (re, re_ex, (char*)src, nsrc, pos, 0, m, 3) ;
    if (err >= 0) {
      beg = m[0] ; pos = m[1] ;
      len = pos - beg ; ndst -= len ; ndst += nsub ;
      sgs = (seglst_cons_pstruct)seglst_cons_make (beg, len) ;
      *sgs_ptr = sgs ; sgs_ptr = (seglst_cons_pstruct*)&(sgs->atslab_2) ;
    } else {
     *sgs_ptr = (seglst_cons_pstruct)0 ; break ;
    }
  } // end of [for]
  dst = malloc_atm (ndst) ;
  ans.atslab_1 = ndst ; ans.atslab_2 = dst ;
  subst_copy (dst, src, nsrc, sgs0, sub, nsub) ;
  return ans ;
}

%} // end of [%{]

(* ****** ****** *)

extern fun subst_pattern_string {n:nat} {l:addr}
  (pf: !bytes_v (n, l) | n: int n, p: ptr l, pat: string, sub: string)
  : [n:nat] [l:addr] @(bytes_v (n, l) | int n, ptr l)
  = "subst_pattern_string"

(* ****** ****** *)

#define subst_length 22
val subst = array_make_arrpsz{string}($arrpsz(
  "B", "(c|g|t)"
, "D", "(a|g|t)"
, "H", "(a|c|t)"
, "K", "(g|t)"
, "M", "(a|c)"
, "N", "(a|c|g|t)"
, "R", "(a|g)"
, "S", "(c|g)"
, "V", "(a|c|g)"
, "W", "(a|t)"
, "Y", "(c|t)"
)) // end of [subst]

(* ****** ****** *)

fun subst_loop {i:nat} {n:nat} {l:addr}
  (pf: bytes_v (n, l) | n: int n, p: ptr l, i: int i): int =
  if i < subst_length - 1 then let
    val pat = subst[i]; val sub = subst[i+1]
    val (pf1 | n1, p1) = subst_pattern_string (pf | n, p, pat, sub)
    val () = free_atm (pf | p)
  in
    subst_loop (pf1 | n1, p1, i + 2)
  end else begin
    let val () = free_atm (pf | p) in n end
  end // end of [if]

(* ****** ****** *)

#define BLOCKSIZE 0x10000 // 0x4000000

implement main () = let
  var n0: int = 0
  val blks = fread_stdin_blocklst (BLOCKSIZE, n0)
  val n0 = int1_of_int (n0); val () = assert (n0 >= 0)
  val (pf_bytes | p0) = blocklst_concat_and_free (n0, blks)
  val (pf1_bytes | n1, p1) =
    subst_pattern_string (pf_bytes | n0, p0, ">.*|\n", "")
  val () = free_atm (pf_bytes | p0)
  val () = count_loop (pf1_bytes | n1, p1, 0)
  val n_last = subst_loop (pf1_bytes | n1, p1, 0)
in
  printf ("\n%i\n%i\n%i\n", @(n0, n1, n_last))
end // end of [main]

(* ****** ****** *)

(* end of [regex-dna.dats] *)
