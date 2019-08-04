#include <stdio.h>

int fact(int n)
{
   return (n <= 1) ? 1 : n * fact(n - 1) ;
}

int main(void)
{
   int n = 3;

   printf("Fact: %d = %d\n", n, fact(n));

   return 0;
}
