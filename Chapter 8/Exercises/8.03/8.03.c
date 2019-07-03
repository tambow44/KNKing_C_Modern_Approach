#include <stdbool.h>
#include <stdio.h>

#define SIZE_WEEKEND ((int) (sizeof(weekend) / sizeof(weekend[0])))

int main(void)
{
   int i;
   bool weekend[7] = { true, false, false, false, false, false, true };
   
   printf("Weekend is:");
   for (i = 0; i < SIZE_WEEKEND; i++) {
      printf(" %d", weekend[i]);
   }
   printf("\n");

   return 0;
}

