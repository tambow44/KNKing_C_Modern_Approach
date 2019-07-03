#include <stdio.h>

#define N 24

int main(void)
{
   int i;
   int b[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29};
   int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

   printf("int b: ");

   for (i = 0; i < N; i++) {
      printf(" %d", b[i]);
   }

   printf("\nint c: ");
   
   for (i = 0; i < 10; i++) {
      printf(" %d", c[i]);
   }

   printf("\n");

   return 0;
}
