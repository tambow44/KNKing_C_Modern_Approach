### Project 8.17
Write a program that prints an *n* x *n* magic square (a square of the numbers `1`, `2`, ... `n²` in which the sums of the rows, columns, and diagonals are all the same). The user will specify the value of *n*:
```
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9
```
Store the magic square in a two-dimensional array. Start by placing the number `1` in the middle of row `0`. Place each of the remaining numbers `2`, `3`, ... `n²` by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the next number in row `-1`, we would store it in the row `n - 1` (the last row). Instead of storing the next number in column `n`, we would store it in column `0`. If a particular array element is already occupied, put the number directly below the previously stored number. If your compiler supports variable-length arrays, declare the array to have `n` rows and `n` columns. If not, declare the array to have `99` rows and `99` columns.
### Solution
#### 8.17.c
```c
#include <stdio.h>

int main(void)
{
   int n,              // size of magic square
       x, y,           // axis mapping & print-loop
       x_prev, y_prev, // axis placeholder
       counter = 0;    // increment until n-squared

   printf("This program creates a magic square of a specified size.\n");
   printf("The size must be an odd number between 1 and 99.\n");
   printf("Enter size of magic square: ");
    scanf("%d", &n);

   int magic_square[n][n];

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

   /* print results */
   for (x = 0; x < n; x++) {
      for (y = 0; y < n; y++) {
         printf("%5d", magic_square[x][y]);
      }
      printf("\n");
   }

   return 0;
}
```
#### Output
```
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 3
    8    1    6
    3    5    7
    4    9    2
---
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9
```
