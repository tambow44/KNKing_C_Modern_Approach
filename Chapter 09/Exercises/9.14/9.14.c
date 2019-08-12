#include <stdbool.h>
#include <stdio.h>

bool has_zero(int a[], int n)
{
   int i;

   for (i = 0; i < n; i++) {
      if (a[i] == 0) {
         return true;
      }
   }

   return false;
}

#define LEN 5
int main(void)
{
   int a[LEN] = { 1, 1, 1, 0, 1 };

   bool result = has_zero(a, LEN);

   printf("Array contains ");
   (result == false) ? printf("no ") : result ;
   printf("zeros.\n");

   return 0;
}
