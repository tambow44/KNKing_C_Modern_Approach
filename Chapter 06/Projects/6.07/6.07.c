#include <stdio.h>

int main(void)
{
   int i, n, odd, square;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
    scanf("%d", &n);

   odd = 3;

   for (square = 1, i = 1; i <= n; odd += 2, ++i) {
      printf("%10d%10d\n", i, square);
      square += odd;
   }

   return 0;
}
