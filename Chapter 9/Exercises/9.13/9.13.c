#include <stdio.h>

int evaluate_position(char board[8][8])
{
   int i, j, black = 0, white = 0;

   for (i = 0; i < 8; i++) {
      for (j = 0; j < 8; j++) {
         board[i][j] == 'Q' ? white += 9 : white ;
         board[i][j] == 'R' ? white += 5 : white ;
         board[i][j] == 'B' ? white += 3 : white ;
         board[i][j] == 'N' ? white += 3 : white ;
         board[i][j] == 'P' ? white += 1 : white ;
         board[i][j] == 'q' ? black += 9 : black ;
         board[i][j] == 'r' ? black += 5 : black ;
         board[i][j] == 'b' ? black += 3 : black ;
         board[i][j] == 'n' ? black += 3 : black ;
         board[i][j] == 'p' ? black += 1 : black ;
      }
   }

   return white - black;
}

int main(void)
{
   char board[8][8] = {{ 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' },
                       { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
                       { 'r', 'n', 'b' ,'q', 'k', 'b', 'n', 'r' }};

   int result = evaluate_position(board);
   
   if (result == 0) {
      printf("There is no advantage.\n");
   } else {
      (result  > 0) ? printf("White") : printf("Black") ;
      print(" has the advantage.\n");
   }
 
   return 0;
}
