### Project 5.05
In one state single residents are subject to the following income tax:

| Income | Amount of tax | |
| - | - | - |
| Not over $750 | 1% of income  |
| $750-$2,250 | $7.50 | plus 2% of amount over $750 |
| $2,250-$3,750 | $37.50 | plus 3% of amount over $2,250 |
| $3,750-$5,250 | $82.50 | plus 4% of amount over $3,750 |
| $5,250-$7,000 | $142.50 | plus 5% of amount over $5,250 |
| Over $7,000 | $230.00 | plus 6% of amount over $7,000 |

Write a program that asks the user to enter the amount of taxable income, then
displays the tax due.
### Solution
#### 5.05.c
```c
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
```
#### Output
```
Enter the amount of taxable income: 4567
tax is: 118.18
```
