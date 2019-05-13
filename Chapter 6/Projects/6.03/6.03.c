#include <stdio.h>

int main(void)
{

   int m, n, r, x, y;

   printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

   x = m, y = n;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   printf("In lowest terms: %d/%d", x / m, y / m);

   return 0;
}
