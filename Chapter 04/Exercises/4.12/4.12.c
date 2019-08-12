#include <stdio.h>

int main(void)
{
   int i, j;

   i = 5;
   j = ++i * 3 - 2;
   printf("%2d %2d\n", i, j);

   i = 5;
   j = 3 - 2 * i++;
   printf("%2d %2d\n", i, j);

   i = 7;
   j = 3 * i-- + 2;
   printf("%2d %2d\n", i, j);

   i = 7;
   j = 3 + --j * 2;
   printf("%2d %2d\n", i, j);

   return 0;
}
