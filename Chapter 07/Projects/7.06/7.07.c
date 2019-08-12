#include <stdio.h>

int main(void)
{
   printf("This program prints the values of the following types:\n");
   printf("        int = %lu\n", sizeof(int));
   printf("      short = %lu\n", sizeof(short));
   printf("       long = %lu\n", sizeof(long));
   printf("      float = %lu\n", sizeof(float));
   printf("     double = %lu\n", sizeof(double));
   printf("long double = %lu\n", sizeof(long double));

   return 0;
}
