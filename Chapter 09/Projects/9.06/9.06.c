#include <stdio.h>

int polynominal(int x)
{
   int x2 = x * x,
       x3 = x * x * x,
       x4 = x * x * x * x,
       x5 = x * x * x * x;

   return (2 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;
}

int main(void)
{
   int x;

   printf("Polynominal formula:\n\n   \'3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\'\n\n");
   printf("Enter value for x: ");
    scanf("%d", &x);

   printf("Polynominal result of above formula is %d.\n", polynominal(x));

   return 0;
}
