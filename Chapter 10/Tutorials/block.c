#include <stdio.h>

int main(void)
{
   int i, j;
   printf("Enter value for i: ");
    scanf("%d", &i);
   printf("Enter value for j: ");
    scanf("%d", &j);

   if (i > j) {
      int temp = i;
      i = j;
      j = temp;
   printf("is temp? %d\n", temp);
   }

   printf("i is now: %d\nj is now: %d\n", i, j);
//   printf("is temp? %d\n", temp); // won't compute as temp is restricted to the if block statement

   return 0;
}
