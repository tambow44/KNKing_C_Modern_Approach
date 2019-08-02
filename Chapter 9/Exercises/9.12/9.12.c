#include <stdio.h>
#define LEN 5

double inner_product(double a[], double b[], int n)
{
   int i;
   double result = 0;

   for (i = 0; i < n; i++) {
      result += (a[i] * b[i]);
   }

   return result;
}

int main(void)
{
   double a[LEN] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
   double b[LEN] = { 5.1, 4.2, 3.3, 2.4, 1.5 };

   printf("Result: %.2f\n", inner_product(a, b, LEN));

   return 0;
}
