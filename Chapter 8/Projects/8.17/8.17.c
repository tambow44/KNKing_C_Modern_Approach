#include <stdio.h>

int main(void)
{
   int n, n2,        // magic number, and n-squared
       i, j,         // array loop controls
       x, y,         // axis of array
       counter = 0;  // increment until n-squared

   printf("This program creates a magic square of a specified size.\n");
   printf("The size must be an odd number between 1 and 99.\n");
   printf("Enter size of magic square: ");
    scanf("%d", &n);


   int magic_square[n][n], // initialise based on user input
       n2 = n * n;         // produce n-squared

   /* initialising to zero easier to determine if element is "in use" */
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         magic_square[i][j] = 0;
      }
   }

   /* start in the middle of row 0 */
   x = 0, y = (n - 1) / 2;
   magic_square[x][y] = counter++;





   /* print results */
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         printf("   %2d", magic_square[i][j]);
      }
      printf("\n");
   }

   return 0;
}
