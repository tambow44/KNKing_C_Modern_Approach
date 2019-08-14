#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   char ch, hand[5][2] = { 0 };
/*
   {
      { '0', 'a' },
      { '1', 'b' },
      { '2', 'c' },
      { '3', 'd' },
      { '4', 'e' }
   };
*/

   int y, i, j;
       y = i = j = 0;

   (1 != 1) ? printf("true!\n") : printf("false!\n");

   printf("1==1: %d\n", 1 == 1);
   printf("2==1: %d\n", 2 == 1);
   printf("false: %d\n", false);
   printf("true: %d\n", true);
   return 0;

   int temp = 0;
   for (int i = 0; i < 5; i++) {
      printf("temp: %d\n", temp);
      printf("temp++: %d\n", temp++);
      printf("++temp: %d\n", ++temp);
   }
   return 0;


   while (y++ < 5) {
      printf("enter a hand: ");
      hand[i][j] = getchar();
      hand[i][j+1] = getchar();
      while ((ch = getchar() != '\n')) {}
      i++;
   }

   printf("------\n");
   for (i = 0; i < 5; i++) {
      printf("hand[%d,0][%d,1]: ", i, i);
      for (j = 0; j < 2; j++) {
         printf("%c ", hand[i][j]);
      }
      printf("\n");
   }

   return 0;
}
