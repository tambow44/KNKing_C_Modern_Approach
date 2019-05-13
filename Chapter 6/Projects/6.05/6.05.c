#include <stdio.h>

int main(void)
{
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

	
   do {
		printf("%d", n % 10);
		n /= 10;   
   } while (num != 0);

   return 0;
}
