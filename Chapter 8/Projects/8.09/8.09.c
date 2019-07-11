#include <stdio.h>
#include <stdlib.h>  /* srand() & rand() functions */
#include <stdbool.h> /* TRUE(1) & FALSE(0) */   // DO I EVEN NEED THIS!?
#include <time.h>    /* provides 'random' number for srand() */

#define N 10
#define AZ 26

int main(void)
{
   int i, j, num, direction;
   char board[N][N]; // 10 x 10 board
   char alphabet = 'A'; // while < 'Z' 
   
   srand((unsigned) time(NULL)); /* ensures rand() is always unique */

   /* Generates blank board */
   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         board[i][j] = '.';
      }
   }

   /* Start the show with 'A' */
   board[0][0] = alphabet;

   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         direction = (rand() % 4);
         if (direction == 0) {         // UP
            ; 
         } else if (direction == 1) {  // DOWN
            ;
         } else if (direction == 2) {  // LEFT
            ;
         } else if (direction == 3) {  // RIGHT
            ;
         }
      }
   }

   return 0;
}
