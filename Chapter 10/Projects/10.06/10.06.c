#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Macro Definitions */
#define STACK_SIZE 101

/* external variables */
char stack[STACK_SIZE];
int top = 0;

void push(int i);
char pop();

int main(void)
{
   char ch, operand1, operand2;

   while(true) {
      printf("Enter an RPN expression: ");

      /* While runs until user presses return  */ 
      while ((ch = getchar()) != '\n') {
         if (ch >= '0' && ch <= '9')
            push(ch - '0');
         else
            switch(ch) {
               case '+' :  push(pop() + pop());
                           break;
               case '-' :  operand2 = pop(); operand1 = pop();
                           push(operand1 - operand2);
                           break;
               case '*' :  push(pop() * pop());
                           break;
               case '/' :  operand2 = pop(); operand1 = pop();
                           push(operand1 / operand2);
                           break;
               case '=' :  printf("Value of expression: %d\n", pop());
                           break;
               case ' ' :  break;
               default  :  exit(EXIT_FAILURE);
            } 
      }
   }
   return 0;
}

void push(int i)
{
   if (top == STACK_SIZE) {
      printf("\nStack Overflow!\n");
      exit(EXIT_FAILURE);
   } else
      stack[top++] = i;
}

char pop(void)
{
   if (top == 0) {
      printf("\nStack Underflow!\n");
      exit(EXIT_FAILURE);
   } else
      return stack[--top];
}
