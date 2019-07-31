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
double product;
{
   product = base * height;
   return product / 2;
}
```
