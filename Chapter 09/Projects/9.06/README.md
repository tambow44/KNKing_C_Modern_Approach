### Project 9.06
Write a function that computes the value of the following polynomial:

3*x*<sup>5</sup> + 2*x*<sup>4</sup> - 5*x*<sup>3</sup> - *x*² + 7x -6

Write a program that asks the user to enter a value for `x`, calls the function to compute the value of the polynomial, and then displays the value returned by the function.
### Solution
I reused Progamming Project 5 from Chapter 2.
### 9.06.c
```c
#include <stdio.h>

int polynominal(int x)
{
   int x2 = x * x,
       x3 = x * x * x,
       x4 = x * x * x * x,
       x5 = x * x * x * x;

   return (2 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;
}

int main(void)
{
   int x;

   printf("Polynominal formula:\n\n   \'3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\'\n\n");
   printf("Enter value for x: ");
    scanf("%d", &x);

   printf("Polynominal result of above formula is %d.\n", polynominal(x));

   return 0;
}
```
#### Output
```
Polynominal formula:

   '3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6'

Enter value for x: 5
Polynominal result of above formula is 1879.
```
