/* { dg-do compile } */
/* { dg-options "-fdump-tree-original" } */

char *foo(char *p, __UINTPTR_TYPE__ i)
{
  return (char *)i + (__UINTPTR_TYPE__)p;
}

/* { dg-final { scan-tree-dump "p +" "original" } } */
