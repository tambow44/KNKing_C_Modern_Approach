#include <stdio.h>

int main(void)
{

   int d, n;

   printf("Enter a number to check: ");
    scanf("%d", &n);

   for (d = 2; d * d < n; d++) {
      if (n % d == 0) {
         break;
      }
   }

   if (d * d <= n) {
      printf("%d is divisable by %d\n", n, d);
   } else {
      printf("%d is prime\n", n);
   }

   return 0;
}
