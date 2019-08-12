#include <stdio.h>

int main(void)
{
   int length = 0, words = 1;
   char ch;

   printf("Enter a sentence: ");

   while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
         length++;
      } else {
         words++;
      }
   }

   printf("Average word length: %.1f\n", (float) length / words);

   return 0;
}
