#include <stdio.h>

int main(void)
{
   int i, days, start;

   printf("Enter number of days in month: ");
    scanf("%d", &days);
   printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

   /* print white space for start of week */
   for (i = 1; i < start; i++) {
      printf("%3c", ' ');
   }

   /* print numbers */
   for (i = 1; i <= days; i++, start++) {
      printf("%3d", i);
      if (start % 7 == 0) {
         printf("\n");
      }
   }

   return 0;
}

