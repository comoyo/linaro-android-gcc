/* { dg-require-effective-target vect_int } */

#include <stdarg.h>
#include "tree-vect.h"

#define N 16
signed short data_sh[N] =
  { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
#define SUM 210

__attribute__ ((noinline)) int
foo ()
{
  int i;
  signed int intsum = 0;

  /* widenning sum: sum shorts into int.  */
  for (i = 0; i < N; i++)
    {
      intsum += data_sh[i];
    }

  /* check results:  */
  if (intsum != SUM)
    abort ();

  return 0;
}

int
main (void)
{
  check_vect ();
  return foo ();
}

/* { dg-final { scan-tree-dump-times "vect_recog_widen_sum_pattern: detected" 1 "vect" } } */
/* { dg-final { scan-tree-dump-times "vectorized 1 loops" 1 "vect" { target vect_widen_sum_hi_to_si } } } */
/* { dg-final { scan-tree-dump-times "vectorized 1 loops" 0 "vect" { target { ! vect_widen_sum_hi_to_si } } } } */
/* { dg-final { cleanup-tree-dump "vect" } } */
