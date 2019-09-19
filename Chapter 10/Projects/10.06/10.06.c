#include <stdio.h>
#include <stdbool.h>

/* Macro Definitions */
#define SIZE 101

/* External Variables */
int stack[SIZE];
int top = -1;

/* Function Definitions */
void make_empty();
void push(int i);
void pop();
 int top_stack();

/* Main body */
int main(void)
{
   char ch, oper1, oper2;

   while (true) {
      printf("Enter an RPN expression: ");

      while ((ch = getchar()) != '\n') {
         if (ch == 'q' || ch == 'Q') 
            return 0;
         else if (ch == '=')
            printf("Value of expression: %d\n", top_stack());
         else
            switch (ch) {
               case '*' : 
                  oper1 = top_stack(); pop();
                  oper2 = top_stack(); pop(); 
                  push(oper1 * oper2);
                  break;
               case '/' : 
                  oper1 = top_stack(); pop();
                  oper2 = top_stack(); pop(); 
                  push(oper1 / oper2);
                  break;
               case '+' : 
                  oper1 = top_stack(); pop();
                  oper2 = top_stack(); pop(); 
                  push(oper1 + oper2);
                  break;
               case '-' : 
                  oper1 = top_stack(); pop();
                  oper2 = top_stack(); pop(); 
                  push(oper1 - oper2);
                  break;
               default  :
                  push(ch);
                  break;
            }
      }
   }

   return 0;
}

/* Clear the stack */
void make_empty()
{
   for (int i = 0; i < SIZE; i++)
      top--;
}

void push(int i)
{
   if (top == SIZE - 1)
      printf("ERROR: Stack Overflow!\n");
   else
      stack[++top] = i;
}

void pop()
{
   if (top == -1)
      printf("ERROR: Stack underflow!\n");
   else
      top--;
}

int top_stack()
{
   return stack[top];
}
