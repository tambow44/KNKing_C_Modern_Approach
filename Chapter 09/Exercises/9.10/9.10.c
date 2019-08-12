#include <stdio.h>

#define LEN 10

int a_largest (int a[], int n)
{
   int i, large = a[0];

   for (i = 0; i < n; i++) {
      if (large < a[i]) {
         large = a[i];
      }
   }

   return large;
}

float b_average (int a[], int n)
{
   int i, sum = 0;

   for (i = 0; i < n; i++) {
      sum += a[i];
   }
   
   return (float) sum / n;
}

int c_positive (int a[], int n)
{
   int i, positive = 0;

   for (i = 0; i < n; i++) {
      (a[i] > 0) ? positive++ : 0;
   }

   return positive;
}

int main(void)
{
   int a[LEN] = {1,2,3,4,15,6,7,-3,-9,10};

   printf("Largest element of a: %d\n", a_largest(a, LEN));
   printf("Average of element a: %.2f\n", b_average(a, LEN));
   printf("Number of positive elements in a: %d\n", c_positive(a, LEN));

   return 0;
}
