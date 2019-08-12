#include <stdio.h> 

int check(int x, int y, int n)
{
   if ((x >= 0 && x <= (n - 1)) && (y >= 0 && y <= (n - 1))) {
      return 1;
   }
   return 0;
}


int main(void)
{
   int x, y, n;

   printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
   printf("Enter n: ");
    scanf("%d", &n);

   printf("Check result: %d\n", check(x, y, n));

   return 0;
}
