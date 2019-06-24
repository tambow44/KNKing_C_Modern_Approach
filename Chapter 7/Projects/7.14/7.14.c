#include <stdio.h>
#include <math.h>

int main(void)
{
   double x, y, xy, average;

   printf("Enter a positive number: ");
    scanf("%lf", &x);

   y = 1.0;

   while (1) {
      xy = x / y;
      average = (y + xy) / 2;

      if (fabs((y - average)) < 0.00001) {
         break;
      } else {
         y = average;
      }
   }

   printf("Square root: %.5lf\n", y);

   return 0;
}
