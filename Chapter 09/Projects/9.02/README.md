### Project 9.01
Modigy Programming Project 5 from Chapter 5 so that it uses a function to compute the amount of income tax. When passed an amount of taxable income, the function will return the tax due.
### Solution
See `9.02.c` for complete program.

Function is as follows:
```c
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
```
#### Output
```
Enter the amount of taxable income: 14054.33
Tax due: 653.26
---
Enter the amount of taxable income: 1023450.27
Tax due: 61217.01
```
