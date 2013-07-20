(*
** The Great Computer Language Shootout
** http://shootout.alioth.debian.org/
**
** contributed by Hongwei Xi (hwxi AT cs DOT bu DOT edu)
**
** compilation command:
**   atscc -O3 thread-ring.dats -o thread-ring -lpthread
**
*)

%{^

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <limits.h>

#define NTHREAD (503)

static pthread_mutex_t mutex0 ;
static pthread_mutex_t mutexarr[NTHREAD] ;
typedef struct { char _[PTHREAD_STACK_MIN] ; } threadstack ;
static threadstack threadstackarr[NTHREAD] ;

static inline
ats_void_type lock_acquire (ats_int_type i) {
  if (i == 0) {
    pthread_mutex_lock (&mutex0) ;
  } else {
    pthread_mutex_lock (&mutexarr[i-1]) ;
  }
  return ;
}

static inline
ats_void_type lock_release (ats_int_type i) {
  if (i == 0) {
    pthread_mutex_unlock (&mutex0) ;
  } else {
    pthread_mutex_unlock (&mutexarr[i-1]) ;
  }
  return ;
}

%}

#define NTHREAD (503)

%{^

static ats_int_type the_answer = 0 ;

static inline
ats_int_type the_answer_get () { return the_answer ; }

static inline
ats_void_type the_answer_set (ats_int_type n) { the_answer = n ; return ; }

/* ****** ****** */

static ats_int_type the_token = 0 ;

static inline
ats_int_type the_token_get () { return the_token ; }

static inline
ats_void_type the_token_set (ats_int_type n) { the_token = n ; return ; }

%}

absview ticket_v

extern fun the_answer_get
  (pf: !ticket_v | (*nil*)): int = "the_answer_get"
extern fun the_answer_set
  (pf: !ticket_v | n: int): void = "the_answer_set"

extern fun the_token_get (pf: !ticket_v | (*nil*)): int = "the_token_get"
extern fun the_token_set (pf: !ticket_v | n: int): void = "the_token_set"

(* ****** ****** *)

extern fun lock_acquire
  (i: natLte NTHREAD): (ticket_v | void) = "lock_acquire"

extern fun lock_release
  (pf: ticket_v | i: natLte NTHREAD): void = "lock_release"

(* ****** ****** *)

extern fun fthread
  {i:int | 1 <= i; i <= NTHREAD} (i: int i): void = "fthread"

implement fthread (i) = let
(*
  val () = (prerr "fthread: i = "; prerr i ; prerr_newline ())
*)
  val (pf | ()) = lock_acquire (i)
  val n = the_token_get (pf | (*nil*))
(*
  val () = (prerr "fthread: n = "; prerr n ; prerr_newline ())
*)
  val i1 = i + 1
  val i1 = (if i1 <= NTHREAD then i1 else 1): natLte NTHREAD
in
  if n > 0 then let
    val () = the_token_set (pf | n - 1); val () = lock_release (pf | i1)
  in
    fthread (i)
  end else begin
    the_answer_set (pf | i); lock_release (pf | 0)
  end // end of [if]
end // end of [fthreadgen]

(* ****** ****** *)

extern fun initialization (n: Nat): (ticket_v | void) = "initialization"

%{$

ats_void_type
initialization (ats_int_type n) {
  int i;
  pthread_t tid ;
  pthread_mutex_t *p_mutex ;
  pthread_attr_t thread_attr ;
  threadstack *p_threadstack ;

  the_token = n ;

  pthread_mutex_init (&mutex0, NULL) ;
  pthread_mutex_lock (&mutex0) ;

  pthread_attr_init (&thread_attr) ;

  i = 0 ;
  p_mutex = &mutexarr[0] ;
  p_threadstack = &threadstackarr[0] ;
  while (i < NTHREAD) {
    pthread_mutex_init (p_mutex, NULL); pthread_mutex_lock (p_mutex);
    pthread_attr_setstack (&thread_attr, p_threadstack, sizeof(threadstack)) ;
    pthread_create(&tid, &thread_attr, (void* (*)(void*))fthread, (void*)(intptr_t)(i+1)) ;
    i += 1 ; p_mutex += 1 ; p_threadstack += 1 ;
  }
/*
  fprintf (stderr, "initialization is done: n = %i\n", n) ;
*/
  return ;
} // end of [initialization]

%}

(* ****** ****** *)

implement main (argc, argv) = let
  val () = assert (argc >= 2)
  val n = int1_of_string (argv.[1])
  val () = assert (n >= 0)
  val (pf | ()) = initialization (n)
  val () = lock_release (pf | 1)
  val (pf | ()) = lock_acquire (0)
  val ans = the_answer_get (pf | (*nil*))
  prval () = __leak (pf) where {
    extern prfun __leak {v:view} (pf: v): void
  }
in
  print ans; print_newline ()
end // end of [main]

(* ****** ****** *)

(* end of [thread-ring] *)

////

/*
* The Computer Language Benchmarks Game
* http://shootout.alioth.debian.org/

* contributed by Premysl Hruby
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <limits.h>

#define THREADS (503)


struct stack {
   char x[PTHREAD_STACK_MIN];
};


/* staticaly initialize mutex[0] mutex */
static pthread_mutex_t mutex[THREADS];
static int data[THREADS];
static struct stack stacks[THREADS];
/* stacks must be defined staticaly, or my i386 box run of virtual memory
for this
 * process while creating thread +- #400 */

static void* thread(void *num)
{
   int l = (int)num;
   int r = (l+1) % THREADS;
   int token;

   while(1) {
      pthread_mutex_lock(mutex + l);
      token = data[l];
      if (token) {
         data[r] = token - 1;
         pthread_mutex_unlock(mutex + r);
      }
      else {
         printf("%i\n", l+1);
         exit(0);
      }
   }
}



int main(int argc, char **argv)
{
   int i;
   pthread_t cthread;
   pthread_attr_t stack_attr;

   if (argc != 2)
      exit(255);
   data[0] = atoi(argv[1]);

   pthread_attr_init(&stack_attr);

   for (i = 0; i < THREADS; i++) {
      pthread_mutex_init(mutex + i, NULL);
      pthread_mutex_lock(mutex + i);

      pthread_attr_setstack(&stack_attr, &stacks[i], sizeof(struct stack));
      pthread_create(&cthread, &stack_attr, thread, (void*)i);
   }

   pthread_mutex_unlock(mutex + 0);
   pthread_join(cthread, NULL);
}

