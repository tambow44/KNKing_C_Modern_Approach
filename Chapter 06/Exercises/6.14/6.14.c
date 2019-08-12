#include <stdio.h>

int main(void)
{

   int n;

   printf("Enter a number: ");
    scanf("%d", &n);

   if (n % 2 == 0) {
      printf("%d is even\n", n);
   }

   return 0;
}
