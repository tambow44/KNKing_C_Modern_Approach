#include <stdio.h>
#include <stdlib.h>  /* srand() & rand() functions */
#include <stdbool.h> /* TRUE(1) & FALSE(0) */                     // DO I EVEN NEED THIS!?
#include <time.h>    /* provides 'random' number for srand() */

#define N 10
#define A_TO_Z 26                                                 // NEEDED ?
#define SIZE(a) ((int) (sizeof (a) / sizeof (a)[0]))              // NEEDED?

int main(void)
{
   int i, j, direction;
   char board[N][N];    // 10 x 10 board
   char alphabet = 'A'; // while < 'Z'; alphabet++ (A -> B)

   srand((unsigned) time(NULL)); // ensures rand() is always unique

   /* Generates blank board */
   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         board[i][j] = '.';
      }
   }

   board[0][0] = alphabet;    // Start the show with 'A'; increment (B)
   printf("Alphabet: %c\n", alphabet);

   i = j = 0;
   while (alphabet < 'Z') {
      alphabet++;
      direction = (rand() % 4);  // 0: UP; 1: DOWN; 2: LEFT; 3: RIGHT
      printf("Alphabet: %c\tDirection: %i\n", alphabet, direction);

      switch(direction) {
         case 0: // UP
            if (!(board[i-1][j] < 0)) {
               board[i-1][j] = alphabet;
               i--;
            }
            break;
         case 1: // DOWN
            if (!(board[i+1][j] > N)) {
               board[i+1][j] = alphabet;
               i++;
            }
            break;
         case 2: // LEFT
            if (!(board[i][j-1] < 0)) {
               board[i][j-1] = alphabet;
               j--;
            }
            break;
         case 3: // RIGHT
            if (!(board[i][j+1] > N && board[i][j+1] == '.')) {
               board[i][j+1] = alphabet;
               j++;
            }
            break;
         default :
            break;
      }
   }
printf("\n\n\n");

   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         printf("%c ", board[i][j]);
      }
   printf("\n");
   }

   return 0;
}
