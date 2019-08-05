#include <stdio.h>

float income_tax(float income)
{
   if (income <= 750.f) {
      return income * .01f;
   } else if (income <= 2250.f) {
      return 7.5f + (.02f * (income - 750.f));
   } else if (income <= 3750.f) {
      return 37.5f + (.03f * (income - 2250.f));
   } else if (income <= 5250.f) {
      return 85.5f + (.04f * (income - 3750.f));
   } else if (income <= 7000.f) {
      return 142.f + (.05f * (income - 5250.f));
   } else {
      return 230.f + (.06f * (income - 7000.f));
   }
}

int main(void)
{
   float income;

   printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

   printf("Tax due: %.2f\n", income_tax(income));

   return 0;
}
