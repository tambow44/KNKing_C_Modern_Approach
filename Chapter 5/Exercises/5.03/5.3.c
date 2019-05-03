#include <stdio.h>

int main(void)
{

   int i, j, k;

   i = 3; j = 4; k = 5;
   printf("%d\n", i < j || ++j < k);

   i = 7; j = 8; k = 9;
   printf("%d\n",i - 7 && j++ < k);

   i = 7; j = 8; k = 9;
   printf("%d\n", (i = j) || (j == k));
   printf("%d %d %d\n", i, j, k);
 
  i = j = k = 1;
   printf("%d\n", ++i || (++j && ++k));
   printf("%d %d %d\n", i, j, k);

   return 0;
}
