/* { dg-do compile } */
/* { dg-options "-O2 -fclone-hot-version-paths -fdump-tree-final_cleanup" } */

static int __attribute__ ((version_selector))
featureTest ()
{
  return 1;
}

static int foo ()
{
  return 0;
}

static int bar ()
{
  return 1;
}

static int __attribute__ ((noinline))
dispatch ()
{
  __builtin_dispatch (featureTest, (void *)foo, (void *)bar);
  return 0;
}

int
fn2 ()
{
  for (int i = 0; i < 1000; i++)
    dispatch ();
  return 0;
}

/* { dg-final { scan-tree-dump "dispatchv_clone_0" "final_cleanup" } } */
/* { dg-final { scan-tree-dump "dispatchv_clone_1" "final_cleanup" } } */
/* { dg-final { cleanup-tree-dump "final_cleanup" } } */
