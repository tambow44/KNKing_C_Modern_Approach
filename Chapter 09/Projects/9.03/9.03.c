#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N])
{
   int i = 0, j = 0, direction;
   bool up, down, left, right;
   char alphabet = 'A';

   walk[0][0] = alphabet++;

   srand((unsigned) time(NULL));

   while (alphabet <= 'Z') {
      up = down = left = right = direction = false;
      direction = (rand() % 4);

        if (i-1 >= 0 && walk[i-1][j] == false) {
         up = true;
      } if (i+1  < N && walk[i+1][j] == false) {
         down = true;
      } if (j-1 >= 0 && walk[i][j-1] == false) {
         left = true;
      } if (j+1  < N && walk[i][j+1] == false) {
         right = true;
      }

      /* break out of program if direction is 'full'  */ 
      if (up + down + left + right == false) { 
            break;
         }

      switch(direction) {
         case 0 :
            if (up) {
               walk[--i][j] = alphabet++;
            }
            break;
         case 1 :
            if (down) {
               walk[++i][j] = alphabet++;
            }
            break;
         case 2 :
            if (left) {
               walk[i][--j] = alphabet++;
            }
            break;
         case 3 :
            if (right) {
               walk[i][++j] = alphabet++;
            }
            break;
         default :
            break;
      }
   }
}

void print_array(char walk[N][N])
{
   int i, j;

   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         if (walk[i][j] == false) {
            walk[i][j] = '.';
         }
       printf("%c ", walk[i][j]);
      }
      printf("\n");
   }
   printf("\n");
}

int main(void)
{
   char board[N][N] = {{false}};

   generate_random_walk(board);
   print_array(board);

   return 0;
}
