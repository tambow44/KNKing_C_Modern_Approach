#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* Function Prototypes */
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
   char ch;
   printf("Enter parentheses and/or braces: ");

   while (ch != '\n') {
      ch = getchar();

      if (ch == '{' || ch == '(') {
         push(ch);
      } else if (ch == '}' || ch == ')') {
         pop();
      }
   }

   printf("Parentheses/braces are ");
   (is_empty()) ? printf("nested properly.\n") : printf("not nested properly.\n") ;

   return 0;
}

bool is_empty(void)
{
   return top == 0;
}

bool is_full(void)
{
   return top == STACK_SIZE;
}

void push(char ch)
{
   if (is_full()) {
      stack_overflow();
   } else {
      contents[top++] = ch;
   }
}

char pop(void)
{
   (is_empty()) ? stack_underflow() : 0 ;

   return contents[--top];
}

void stack_overflow(void)
{
   printf("\nStack overflow\n");
   exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
   printf("\nStack underflow\n");
   exit(EXIT_FAILURE);
}
