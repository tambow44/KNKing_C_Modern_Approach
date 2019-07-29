#include <stdio.h>
#include <ctype.h>

#define N 26
int main(void)
{
   char ch;
    int sum = 0,
        points[N] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

   printf("Enter a word: ");

   while ((ch = getchar()) != '\n') {
      ch = (char)toupper((unsigned char)ch);

      if ( ((ch - 65) >= 0) && ((ch - 65) <= 25) ) {
         sum += points[ch - 65];
      }
   }

   printf("Scrabble value: %d\n", sum);

   return 0;
}
