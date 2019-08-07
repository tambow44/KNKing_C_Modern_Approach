#include <stdio.h>

int power(int x, int n)
{
   if (n == 0) {
      return 1;
   }
   return (n % 2 == 0) ? power(x, n / 2) * power(x, n / 2) : x * power(x, n - 1) ;
}

int main(void)
{
   int x, n;

   printf("Enter value for x: ");
    scanf("%d", &x);

   printf("Enter value for n: ");
    scanf("%d", &n);

   printf("Power of %d & %d: %d\n", x, n, power(x, n));

   return 0;
}
