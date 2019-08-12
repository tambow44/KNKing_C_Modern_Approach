#include <stdio.h>

int main(void)
{

   int i = 1;
   float f = 2.3;
   double d = 4.3;

   printf("Size of int: %lu; float: %lu; double: %lu\n", sizeof(i), sizeof(f), sizeof(d));

   printf("Size of expresiion \'i * f / d\': %lu\n", sizeof(i * f / d));

   return 0;
}
