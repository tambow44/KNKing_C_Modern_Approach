#include <stdio.h>

int main(void)
{
   int a, b, c, d, e;
   a = b = c = d = e = 5;

   printf("%2d\n", a * b - c * d + e);
   printf("%2d\n", a / b % c / d);
   printf("%2d\n", - a - b + c - + d);
   printf("%2d\n", a * - b / c - d);
   printf("---\n");
   printf("%2d\n", (((a * b) - (c * d)) + e));
   printf("%2d\n", (((a / b) % c) / d));
   printf("%2d\n", ((((- a) - b) + c) - (+ d)));
   printf("%2d\n", (((a * (- b)) / c) - d));

   return 0;
}
