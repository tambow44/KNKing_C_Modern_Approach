### Project 7.12
Write a program that evaluates an expression:
```
Enter an expression: 1+2.5*3
Value of expression: 10.5
```
The operands in the expression are floating-point numbers; the operators are `+`, `-`, `*`, and `/`.  
The expression is evaluated from left to right (no operator takes precedence over any other operator).
### Solution
#### 7.12.c
```c
#include <stdio.h>

int main(void)
{
   float number, value;
   char ch;

   printf("Enter an expression: ");
    scanf("%f", &value);

   while ((ch = getchar()) != '\n') {
      switch (ch) {
         case '+':
            scanf("%f", &number);
            value += number;
            break;
         case '-':
            scanf("%f", &number);
            value -= number;
            break;
         case '*':
            scanf("%f", &number);
            value *= number;
            break;
         case '/':
            scanf("%f", &number);
            value /= number;
            break;
         default: break;
      }
   }

   printf("Value of expression: %.1f\n", value);

   return 0;
}
```
#### Output
```
Enter an expression: 1+2.5*3
Value of expression: 10.5
```
