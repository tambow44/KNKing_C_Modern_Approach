#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 26
void read_word(int counts[N])
{
   char ch;

   printf("Enter word: ");
   while ((ch = getchar()) != '\n') {
      (isalpha((int)ch)) ? counts[tolower((int)ch) - 'a']++ : ch ;
   }
}

bool equal_array(int counts1[N], int counts2[N])
{
   int i;
   for (i = 0; i < N; i++) {
      if (counts1[i] != counts2[i]) {
         return false;
      }
   }
   return true;
}

int main(void)
{
  int counts1[N] = { 0 }, 
      counts2[N] = { 0 };

   read_word(counts1);
   read_word(counts2);

   printf("The words are ");
   equal_array(counts1, counts2) ? printf("anagrams.\n") : printf("not anagrams.\n");

   return 0;
}
