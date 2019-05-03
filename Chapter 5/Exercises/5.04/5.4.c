#include <stdio.h>

int main(void)
{
   int i, j;

   i = 0; j = 1;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));

   i = 1; j = 1;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));

   i = 1; j = 0;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));
   
   return 0;
}
