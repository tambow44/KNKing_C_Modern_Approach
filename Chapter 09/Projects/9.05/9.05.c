#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n])
{
   int x, y, x_prev, y_prev, counter = 0;
   /* initialising to zero easier to determine if element is "in use" */
   for (x = 0; x < n; x++) {
      for (y = 0; y < n; y++) {
         magic_square[x][y] = 0;
      }
   }

   /* start in the middle of row 0 */
   x = 0, y = (n - 1) / 2;
   magic_square[x][y] = ++counter;

   /* all looping madness lives in here */
   while (counter < (n * n)) {
      x_prev = x, y_prev = y;

      if (x == 0 || y == (n - 1)) {
         (x == 0) ? x = (n - 1) : x--;
         (y == (n - 1)) ? y = 0 : y++;
      } else {
         x--, y++;
      }

      if (magic_square[x][y] == 0) {
         magic_square[x][y] = ++counter;
      } else {
         x = x_prev, y = y_prev;
         (x == (n - 1)) ? x = 0 : x++;
         magic_square[x][y] = ++counter;
      }
   }

}

void print_magic_square(int n, char magic_square[n][n])
{
   int x, y;
   for (x = 0; x < n; x++) {
      for (y = 0; y < n; y++) {
         printf("%5d", magic_square[x][y]);
      }
   printf("\n");
   }
}

int main(void)
{
   int n;

   printf("This program creates a magic square of a specified size.\n");
   printf("The size must be an odd number between 1 and 99.\n");
   printf("Enter size of magic square: ");
    scanf("%d", &n);

   char magic_square[n][n];
   create_magic_square(n, magic_square);
   print_magic_square(n, magic_square);

   return 0;
}


