#include <stdio.h>

int main(void)
{
   int i = 0;

   printf("a) ");
   while (i < 10) {
      printf("%d ", i);
   }
   
   i = 0;
   printf("\nb) ");
   for (; i < 10;) {
      printf("%d ", i);
   }

   i = 0;
   printf("\nc) ");
   do {
      printf("%d ", i);
   } while (i < 10);

   return 0;
}
