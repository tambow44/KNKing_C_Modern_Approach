#include <stdio.h>

#define CHECKER_SIZE ((int) (sizeof(checker_board) / sizeof(checker_board[0][0])))

int main(void)
{
   int i, j;
   char checker_board[8][8];

   for (i = 0; i < CHECKER_SIZE; i++) {
      for (j = 0; j < CHECKER_SIZE; j++) {
         checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
         }
      }

   return 0;
}
