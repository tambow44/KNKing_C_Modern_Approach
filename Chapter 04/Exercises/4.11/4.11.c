#include <stdio.h>

int main(void)
{
   int i, j, k;

   i = 1;
   printf("%2d\n", i++ - 1);
   printf("%2d\n", i);

   i = 10; j = 5;
   printf("%2d\n", i++ - ++j);
   printf("%2d %2d\n", i, j);

   i = 7; j = 8;
   printf("%2d \n", i++ - --j);
   printf("%2d %2d\n", i, j);

   i = 3; j = 4; k = 5;
   printf("%2d \n", i++ - j++ + --k);
   printf("%2d %2d %2d\n", i, j, k);

   return 0;
}
