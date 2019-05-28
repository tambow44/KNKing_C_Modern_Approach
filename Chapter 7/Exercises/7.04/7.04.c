#include <stdio.h>

int main(void)
{
   char c = 'c';
   int i = 1;

   i += c;
   c = 2 * c - 1;
   putchar(c);
   printf(c);

   return 0;
}
