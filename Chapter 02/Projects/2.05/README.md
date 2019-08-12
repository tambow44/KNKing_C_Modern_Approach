### Project 2.5
Write a program that asks the user to enter a value for `x` and then displays the value of the following polynominal:   
3x<sup>5</sup> + 2x<sup>4</sup> - 5x<sup>3</sup> - x<sup>2</sup> + 7x - 6

*Hint:* C doesn't have an exponentiation operator, so you'll need to multiply `x` by itself repeatedly in order to compute the powers of `x`. (For example, `x * x * x` is `x` cubed.)

### Solution
#### 2.5.c
```c
#include <stdio.h>

int main(void)
{
   int x, x2, x3, x4, x5, result;

   printf("Polynominal formula:\n\n   \'3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\'\n\n");
   printf("Enter value for x: ");
    scanf("%d", &x);

   x2 = x * x;
   x3 = x * x * x;
   x4 = x * x * x * x;
   x5 = x * x * x * x * x;

   result = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;

   printf("Polynominal result of above formula is %d.\n", result);

   return 0;
}
```
