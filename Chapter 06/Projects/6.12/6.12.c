#include <stdio.h>

int main(void)
{
   int n, i, j, fact;
   float e, term, eps;

	fact = 1;
	term = e = 1.0f;

   printf("Enter digit for n: ");
    scanf("%d", &n);

   printf("Enter float for ε (epsilon): ");
    scanf("%f", &eps);

   for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
         fact *= j;
      }

      term = 1.0f/fact;

      if (term < eps) {
         break;
      } else {
         e += term;
         fact = 1;
      }
   }

   printf("Approximation of e: %.4f\n", e);

   return 0;
}
