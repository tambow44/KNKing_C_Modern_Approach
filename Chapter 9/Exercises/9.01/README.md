### Exercise 9.01
The following function, which computes the area of a triange, contains `two` errors. Locate the errors and show how to fix them. (*Hint:* There are no errors in the formula.)
```c
double triangle_area(double base, height)
double product;
{
   product = base * height;
   return product / 2;
}
```
### Solution
1. Within `triangle_area(double base, height)`, there is no type defined for the `height` parameter.
2. The declaration of `double product` must occur **within** the function itself.
Correct function:
```c
double triangle_area(double base, double height);
{
   double product;
   product = base * height;
   return product / 2;
}
```
#### 9.01.c
```c
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
```
#### Output
```
Enter value of base and height: 12.5 33.9
Area of base 12.50 and height 33.90 is: 211.88
```
