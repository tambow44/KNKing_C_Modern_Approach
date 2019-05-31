#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int count = 0;
   char ch;

   printf("Enter a sentence: ");
   
   while ((ch = getchar()) != '\n') {
/*      switch(toupper(ch)) { // produces warnings unless explicitly declared */
      switch((char)toupper((unsigned char)ch)) {
         case 'A': case 'E': case 'I': case 'O': case 'U':
            ++count;
            break;
         default:
            break;
      }
   }
  
   printf("Your sentence contains %d vowels.\n", count);

   return 0;
}
