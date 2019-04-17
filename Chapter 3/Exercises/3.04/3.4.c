#include <stdio.h>

int main(void)
{
   int i, j;
   float x;

   printf("Enter '10.3 5 6': ");
   scanf("%d%f%d", &i, &x, &j);

   printf("i = %d\nj = %d\nx = %f\n", i, j, x);
   return 0;
}
