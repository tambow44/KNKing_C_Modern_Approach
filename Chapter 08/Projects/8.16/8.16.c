#include <stdio.h>
#include <ctype.h>

#define N 26
int main(void)
{
   int i, count = 0;
   char ch, alphabet[N] = {0};

   printf("Enter first word: ");
   while ((ch = getchar()) != '\n') {
      if (isalpha((int)ch)) {
            alphabet[tolower((int)ch) - 'a']++;
      }
   }

   printf("Enter second word: ");
   while ((ch = getchar()) != '\n') {
      if (isalpha((int)ch)) {
         alphabet[tolower((int)ch) - 'a']--;
      }
   }

   for (i = 0; i < N; i++) {
      count += (alphabet[i] != 0) ? 1 : 0;
   }

   printf("The words are ");
   count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

   return 0;
}
