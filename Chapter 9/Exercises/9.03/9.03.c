#include <stdio.h>

int gcd(int m, int n)
{
   int r;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   return m;
}

int main(void)
{
   int m, n, r;

   printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

   printf("Greatest common divisor: %d\n", gcd (m, n));

   return 0;
}
