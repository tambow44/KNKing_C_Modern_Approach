#include <stdio.h>
#include <ctype.h>

#define N 26
int main(void)
{
   int i, count = 0;
   char ch, alphabet[N] = {0};

   printf("Enter first word: ");
   while ((ch = getchar()) != '\n') {
      i = (int)tolower((unsigned char)ch);
      if ( (i - 97) >= 0 && (i - 97) <= 25 ) {
         alphabet[i-97]++;
      }
   }

   printf("Enter second word: ");
   while ((ch = getchar()) != '\n') {
      i = (int)tolower((unsigned char) ch);
      if ( (i -97) >= 0 && (i - 97) <= 25 ) {
         alphabet[i-97]--;
      }
   }

   for (i = 0; i < N; i++) {
      count += (alphabet[i] != 0) ? 1 : 0;
   }

   printf("The words are ");
   count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

   return 0;
}
