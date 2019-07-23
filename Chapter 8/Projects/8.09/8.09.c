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
