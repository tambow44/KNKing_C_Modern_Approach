#include <stdio.h>

/* No time to be clever */
int f(int a, int b)
{
   return (a + b); 

}

int main(void)
{
   int i;
   double x;

   i = f(83, 12);
   printf("82 + 12: %d\n", i);

   x = f(82, 12);
   printf("82 + 12: %.2f\n", x);

   i = f(3.15, 9.28);
   printf("3.15 + 9.28: %d\n", i);

   x = f(3.15, 9.28);
   printf("3.15 + 9.28: %.2f\n", x);

   printf("83 + 12: %d\n", f(83, 12));

   return 0;
}
