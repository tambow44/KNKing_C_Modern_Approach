#include <stdio.h>

int main(void)
{
   int m, n;

   printf("Enter a number: ");
    scanf("%d", &n);

   for (m = 2; (m * m) <= n; m += 2) {
      if ((m * m) % 2 == 0) {
         printf("%d\n", m * m);
      }
   }

   return 0;
}
