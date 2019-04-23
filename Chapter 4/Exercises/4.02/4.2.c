#include <stdio.h>

int main(void)
{
   int i, j;
   printf("Enter values for i & j: ");
    scanf("%d %d", &i, &j);

	printf("(-i)/j) = %d\n", (-i)/j);
   printf(" -(i/j) = %d\n", -(i/j));

   return 0;
}
