### Project 2.5
Write a program that asks the user to enter a value for `x` and then displays the value of the following polynominal:   
3x<sup>5</sup> + 2x<sup>4</sup> - 5x<sup>3</sup> - x<sup>2</sup> + 7x - 6

### Solution

#### 2.4.c
```c
#include <stdio.h>

int main(void)
{
   float amount, tax;
   printf("Enter an amount: ");
    scanf("%f", &amount);

   tax = amount * 1.05f;

   printf("With tax added: $%.2f\n", tax);

   return 0;
}
```
