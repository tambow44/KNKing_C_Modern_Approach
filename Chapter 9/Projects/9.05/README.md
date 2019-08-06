### Project 9.05
Modigy Programming Project 17 from Chapter 8, so that it includes the following functions:
```c
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
```
After obtaining the number `n` from the user, `main` will call `create_magic_square`, passing it an `n` x `n` array that is declared inside `main`. `create_magic_square` will fill the array with the numbers `1, 2, ..., nÂ` as described in the original project. `main` will then call `print_magic_square`, which will display the array in the format described in the original project. *Note:* If your compiler doesn't support variable-length arrays, declare the array in `main` to be `99` x `99` instead of `n` x `n` and use the following prototypes instead:
```c
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
```
### Solution
See `9.05.c` for complete program.

Functions are as follows:
`create_magic_square`:
```c
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
```
`print_magic_square`:
```c
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
```
#### Output
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
