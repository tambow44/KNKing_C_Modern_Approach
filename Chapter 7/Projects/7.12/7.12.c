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
