/* { dg-lto-do link } */
/* { dg-lto-options { { -flto -w } } } */

char s[sizeof (char *)];
int main(void)
{
  return strcmp(&s[1], "foo");
}
