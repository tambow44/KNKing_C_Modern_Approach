### Project 8.09
Write a program that generates a `random walk` across a `10 x 10` array. The array will contain characters (all `.` initially). The program must randomly `walk` from element to element, always going `up`, `down`, `left`, or `right` by `one` element. The elements visited by the program will be labeled with the letters `A` through `Z`, in the order visited. Here's an example of the desired output:
```
A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .
```
*Hint:* Use the `srand` and `rand` functions (see `deal.c`) to generate random numbers. After generating a number, look at its remainder when divided by `4`. There are four possible values for the remainder  --`0`, `1`, `2`, and `3`-- indicating the direction of the next move. Before performing a move, check that `(a)` it won't go outside the array, and `(b)` it doesn't take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, the program must terminate. Here's an example of premature termination:
```
A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
```
`Y` is blocked on all four sides, so there's no place to put `Z`.
### Solution
#### 8.09.c
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 10

int main(void)
{
   int
      i, j,
      direction;
   bool
      up, down, left, right;
   char
      board[N][N] = {{false}},
      alphabet = 'A';

   srand((unsigned) time(NULL));

   board[0][0] = alphabet++;
   i = j = 0;

   while (alphabet <= 'Z') {
      up = down = left = right = direction = false;
      direction = (rand() % 4);

        if (i-1 >= 0 && board[i-1][j] == false) {
         up = true;
      } if (i+1  < N && board[i+1][j] == false) {
         down = true;
      } if (j-1 >= 0 && board[i][j-1] == false) {
         left = true;
      } if (j+1  < N && board[i][j+1] == false) {
         right = true;
      }

      /* break out of program if direction is 'full'  */ 
      if (up + down + left + right == false) { 
            break;
         }

      switch(direction) {
         case 0 :
            if (up) {
               board[--i][j] = alphabet++;
            }
            break;
         case 1 :
            if (down) {
               board[++i][j] = alphabet++;
            }
            break;
         case 2 :
            if (left) {
               board[i][--j] = alphabet++;
            }
            break;
         case 3 :
            if (right) {
               board[i][++j] = alphabet++;
            }
            break;
         default :
            break;
      }

   }

   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         if (board[i][j] == false) {
            board[i][j] = '.';
         }
       printf("%c ", board[i][j]);
      }
      printf("\n");
   }
   printf("\n");

   return 0;
}
```
#### Output
```
A B S T U V W X Y .
D C R Q P . . . Z .
E F G H O N . . . .
. . . I J M . . . .
. . . . K L . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
---
A B . . . . . . . .
. C . . . . . . . .
. D G H I . . . . .
. E F Q J K . . . .
. . . P O L . . . .
. . . . N M . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
---
A D E F . . . . . .
B C H G . . . . . .
. . I L M . . . . .
. . J K N O . . . .
. . . . . P . . . .
. . . . . Q R S . .
. . . . . . . T U .
. . . . . . . . V .
. . . . . . . . W .
. . . . . . Z Y X .
```
