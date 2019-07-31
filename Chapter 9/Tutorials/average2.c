/* Computer pairwise averages of three numbers */

#include <stdio.h>

double average(double a, double b): /* DECLARATION */

int main(void)
{
   double x, y, z;

   printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
   printf("Average of %g and %g: %g\n", x, y, average(x, y));
   printf("Average of %g and %g: %g\n", y, z, average(y, z));
   printf("Average of %g and %g: %g\n", x, z, average(x, z));

   return 0;
}

double average(double a, double b)  /* DEFINITION */
{
   return (a + b) / 2;
}
