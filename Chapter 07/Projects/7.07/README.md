### Project 7.07
Modify `Programming Project 6` from `Chapter 3` so that the user may add, subtract, multiply, or divide two fractions (by entering either `+`, `-`, `*`, or `/` between the fractions).
### Solution
#### 7.07.c
```c
#include <stdio.h>

int main(void)
{
   int num1, denom1, num2, denom2, result_num, result_denom;

   char ch;
   
   printf("Enter two fractions separated by an operator (+ - * /): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

   switch (ch) {
      case '+':
         result_num = num1 * denom2 + num2 * denom1;
         break;
      case '-':
         result_num = num1 * denom2 - num2 * denom1;
         break;
      case '*':
         result_num = num1 * denom2 - num2 * denom1;
         break;
      case '/':
         result_num = num1 * denom2 - num2 * denom1;
         break;
   }

    result_denom = denom1 * denom2;

    printf("Result: %d/%d\n", result_num, result_denom);

    return 0;
}
```
#### Output
```
Enter two fractions separated by an operator (+ - * /): 12/30+2/4
Result: 108/120
```
