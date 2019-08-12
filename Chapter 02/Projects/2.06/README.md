### Project 2.6
Modify the program in `Project 2.5` so that the polynomial is evaluated using the following formula:

((((3x + 2)x-5)x-1)x+7)x-6

Note that the modified program performs fewer multiplications. This technique
for evaluating polynomials is knows as ***Horner's Rule***.

### Solution
#### 2.6.c
```c
#include <stdio.h>

int main(void)
{
   int x, x2, x3, x4, x5, result;

   printf("Polynominal formula:\n\n   \'((((3x + 2)x - 5)x - 1)x + 7)x -6\'\n\n");
   printf("Enter value for x: ");
    scanf("%d", &x);

   x2 = x * x;
   x3 = x * x * x;
   x4 = x * x * x * x;
   x5 = x * x * x * x * x;

   result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

   printf("Polynominal result of above formula is %d.\n", result);

   return 0;
}
```
