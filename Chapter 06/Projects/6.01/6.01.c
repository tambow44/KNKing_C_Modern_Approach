#include <stdio.h>

int main(void)
{
   float n, largest;

   start:
   printf("Enter a number: ");
    scanf("%f", &n);

   while (n > 0) {
      if (n >= largest) {
         largest = n;
      }
      goto start;
   }
   printf("\nThe largest number entered was %.2f\n", largest);

   return 0;
}
