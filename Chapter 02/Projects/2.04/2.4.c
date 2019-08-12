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
