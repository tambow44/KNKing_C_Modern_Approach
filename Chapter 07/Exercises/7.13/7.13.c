#include <stdio.h>

int main(void)
{
   char c = '\1';
   short s = 2;
   int i = -3;
   long m = 5;
   float f = 6.5f;
   double d = 7.5;

   printf("  c * i: %d\n", c * i);
   printf("  s + m: %ld\n", s + m);
   printf("  f / c: %f\n", f / c);
   printf("  d / s: %f\n", d / s);
   printf("  f - d: %f\n", f - d);
   printf("(int) f: %d\n", (int) f);

   return 0;
}
