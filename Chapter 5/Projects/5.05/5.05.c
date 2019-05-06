#include <stdio.h>

int main(void)
{
   float income, tax;

   printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

   if (income <= 750.f) {
      tax = income * .01f;
   } else if (income <= 2250.f) {
      tax = 7.5f + (.02f * (income - 750.f));
   } else if (income <= 3750.f) {
      tax = 37.5f + (.03f * (income - 2250.f));
   } else if (income <= 5250.f) {
      tax = 85.5f + (.04f * (income - 3750.f));
   } else if (income <= 7000.f) {
      tax = 142.f + (.05f * (income - 5250.f));
   } else {
      tax = 230.f + (.06f * (income - 7000.f));
   }

   printf("Tax is: %.2f\n", tax);

   return 0;
}
