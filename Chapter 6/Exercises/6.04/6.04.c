#include <stdio.h>

int main(void)
{
   int i;
   printf("a) ");
   for (i = 0; i < 10; i++) {
      printf("%d ", i);
   }
   
   printf("\nb) ");
   for (i = 0; i < 10; ++i) {
      printf("%d ", i);
   }

   printf("\nc) ");
   for (i = 0; i++ < 10; ) {
      printf("%d ", i);
   }

   return 0;
}
