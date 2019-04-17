### Project 2.4
Write a program that asks the user to enter a dollars-and-cents amount, then display the amount with `5%` tax added.
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
