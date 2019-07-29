#include <stdio.h>

#define N 20
int main(void)
{
   int i = 0;
   char ch, initial, surname[N] = {0};

   printf("Enter a first and last name: ");

   while ((ch = getchar()) == ' ') {
      ;
   }

   initial = ch;

   while ((ch = getchar()) != ' ') {
      ;
   }

   while ((ch = getchar()) != '\n') {
      surname[i++] = ch;
   }

   printf("You entered the name: ");
      for (i = 0; i < N; i++) {
         printf("%c", surname[i]);
      }
   printf(", %c.\n", initial);

   return 0;
}
