#include <stdio.h>

int main(void)
{
   int i;

   i = 1;
   printf("%d\n", (i += 1));

   i = 1;
   printf("%d\n", ++i);

   i = 1;
   printf("%d\n", i++);
   
   return 0;
}
