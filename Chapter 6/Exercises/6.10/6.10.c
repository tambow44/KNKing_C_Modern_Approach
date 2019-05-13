#include <stdio.h>

int main(void)
{
   int i;

/* Continue example */
   for (i = 0; i <= 10; i++) {
      if (i % 2 == 1) {
         continue;
      }
      printf("%d ", i);
   }

	printf("\n");

/* Goto example */
   for (i = 0; i <= 10; i++) {
      if (i % 2 == 1) {
         goto end;
      }
      printf("%d ", i);

      end:
      ;
   }

	printf("\n");

   return 0;
}
