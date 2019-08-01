#include <stdio.h>

int digit(int n, int k)
{
   int i;
   
   for (i = 1; i < k; i++) {
      n /= 10;
   }

   return n % 10;
}

int main(void)
{
   int n, k;

   printf("Enter number and position: ");
    scanf("%d %d", &n, &k);

   printf("Digit at position %d of number %d is: %d\n", k, n, digit(n, k));

   return 0;
}
