#include <stdio.h>

int main(void)
{
   int i = 1, j = 2;

   i += j;
   printf("%2d %2d\n", i, j);

   i = 1, j = 2;
   i--;
   printf("%2d %2d\n", i, j);

   i = 1, j = 2;
   i * j / i;
   printf("%2d %2d\n", i, j);
   
   i = 1, j = 2;
   i % ++j;
   printf("%2d %2d\n", i, j);

   return 0;
}
