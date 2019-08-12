#include <stdio.h>

double triangle_area(double base, double height)
{
   double product;
   product = base * height;
   return product / 2;
}

int main(void)
{
   double base, height, result;
   printf("Enter value of base and height: ");
    scanf("%lf %lf", &base, &height);

   result = triangle_area(base, height);
   printf("Area of base %3.2lf and height %3.2lf is: %3.2lf", base, height, result);

   return 0;
}
