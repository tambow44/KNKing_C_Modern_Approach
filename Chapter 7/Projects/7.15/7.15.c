#include <stdio.h>

int main(void)
{
   int intNum, count;
   long double factorial = 1.0;

   printf("Enter a positive integer: ");
    scanf("%d", &intNum);

   short shortNum = (short) intNum;
   long longNum = (long) intNum;
   long long longLongNum = (long long) intNum;
   float floatNum = (float) intNum;
   double doubleNum = (double) intNum;
   long double longDoubleNum = (long double) intNum;

   for (count = 1; count <= shortNum; count++) {
      factorial *= count;
   }
      printf("a) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= intNum; count++) {
      factorial *= count;
   }
      printf("b) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= longNum; count++) {
      factorial *= count;
   }
      printf("c) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= longLongNum; count++) {
      factorial *= count;
   }
      printf("d) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= floatNum; count++) {
      factorial *= count;
   }
      printf("e) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= doubleNum; count++) {
      factorial *= count;
   }
      printf("f) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= longDoubleNum; count++) {
      factorial *= count;
   }
      printf("g) Factorial of %d: %.0Lf\n", intNum, factorial);

   return 0;
}
