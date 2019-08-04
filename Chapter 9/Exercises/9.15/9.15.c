#include <stdio.h>

double median(double x, double y, double z)
{
   double result;

   if (((x >= y) && ( y <= z)) || ((z >= y) && (x <= y))) {
      result = y;
   } else if (((x >= z) && (y <= z)) || (y >= z && x <= z)) {
      result = z; 
   } else {
      result = x;
   }

   return result;
}

int main(void)
{
   double x = 1.11, y = 2.22, z = 3.33;

   printf("Median of %.2f, %.2f, %.2f: %.2f\n", x, y, z, median(x, y, z));

   return 0;
}
