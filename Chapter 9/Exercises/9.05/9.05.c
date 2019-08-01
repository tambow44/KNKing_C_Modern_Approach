#include <stdio.h>

int num_digits(int n)
{
   int i = 0;

   while (n > 0) {
      n /= 10;
      i++; 
   }

   return i;
}

int main(void)
{
   int n, a;

   printf("Enter number: ");
    scanf("%d", &n);

   a = num_digits(n);
   printf("Number of digits in %d: %d\n", n, a);

   return 0;
}
