#include <stdio.h>

#define N 50
int main(void)
{
    int i = 0, j, space_start, space_end = N-1;
   char ch, sentence[N] = {0}, terminating_character;
   
   sentence[i++] = ' ';

   printf("Enter a sentence: ");
   while ((ch = getchar())) {
      if (ch == '.' || ch == '?' || ch == '!') {
         terminating_character = ch;
         break;
      }
      sentence[i++] = ch;
   }

   printf("Reversal of sentence:");
   for (i = N; i >= 0; i--) {
      if (sentence[i] == ' ') {
         space_start = i;
         for (j = space_start; j < space_end; j++) {
            printf("%c", sentence[j]);
         }
         space_end = space_start;
      }
   }

   printf("%c\n", terminating_character);

   return 0;
}
