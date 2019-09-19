#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 11

int STACK[MAX_SIZE];
int top = -1;

void Push(int x)
{
   if (top == MAX_SIZE - 1) { // Overflow
      printf("ERROR: Stack Overflow\n");
      return;
   }

   STACK[++top] = x;
}

void Pop()
{
   if (top == -1) { // Stack empty, throw error
      printf("ERROR: No element to pop\n");
      return;
   }

   top--;
}

// Return top of stack
void Top()
{
   printf("Top of stack: %d\n", STACK[top]);
}

void IsEmpty()
{
   printf("Stack is ");
   if (top > -1)
      printf("not ");
   printf("empty.\n");
}

void MakeEmpty()
{
   for (int i = 0; i < MAX_SIZE; i++)
      top--;
   printf("Stack is now empty.\n");
}

// Print all elements in stack
void Print()
{
   printf("Stack: ");
   for (int i = 0; i <= top; i++)
      printf("%d ", STACK[i]);
   printf("\n");
}

int main()
{
   char option;
   int value;

   printf("Data Structure Demo: Stack-Array!\n");
   printf("---------------------------------\n");
   printf("   1. Print\n   2. Push\n   3. Pop\n   4. Top\n   5. Empty\n   Q. Quit\n");
   printf("---------------------------------\n");
   while (true) {
      printf("Select option: ");

      while ((option = getchar()) != '\n') { 

         if (option == 'q' || option == 'Q')
            return 0;
         else if (option < '1' || option > '5')
            printf("\n   Incorrect Option.\n");
         else
            switch (option) {
               case '1' :
                  Print(); break;
               case '2' :
                  printf("Value to push: "); scanf("%d", &value); Push(value); break;
               case '3' :
                  Pop(); break;
               case '4' :
                  Top(); break;
               case '5' : 
                  MakeEmpty(); break;
               default : break;
            }
      }
   }

   return 0;
}
