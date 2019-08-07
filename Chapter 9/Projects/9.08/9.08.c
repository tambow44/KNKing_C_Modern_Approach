#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int point = 0, win = 0, lose = 0;

int roll_dice(void)
{
   return (rand() % 6)  + (rand() % 6) + 2;
}

bool play_game(void)
{
   int dice = roll_dice();

   printf("\nFUNCTION win:%02d\tlose: %02d----\n", win, lose);

//   printf("You rolled: %d\n", dice);
   if (dice == 7 || dice == 11 || dice == point) {
      win++;
      printf("--------win:  %d\n", win);
      return true;
   } else if (dice == 2 || dice == 3 || dice == 12) {
      lose++;
      printf("--------lose: %d\n", lose);
      return false;
   } else if (point == 0) {
      point = dice;
//      printf("Your point is %d\n", point);
   }
   printf("\nFUNCTION win:%02d\tlose: %02d----\n", win, lose);
   play_game();

}

int main(void)
{
   bool game = true;
   int /*win = 0, lose = 0,*/ i, w = 0, l = 0;
   char ch;

   srand((unsigned) time(NULL));

   printf("GLOBAL: win: %02d\tlose: %02d\n", win, lose);
   printf("LOCAL : win: %02d\tlose: %02d\n", w, l);

   for (i = 0; i < 5; i++) {

      if (play_game() == true) {
         w++;
         printf("returns true!! %d\n\n", w);
      } else {
         l++;
         printf("returns false!! %d\n\n", l);
      }

   }

   printf("GLOBAL: win: %02d\tlose: %02d\n", win, lose);
   printf("LOCAL : win: %02d\tlose: %02d\n", w, l);

   return 1;
/*
   printf("Let's play a game:\n");
   for (i = 0; i < 5; i++) {
      play_game();//? printf("we have won!\n") : printf("we have lost!\n");
      printf("\n");
   }

   printf("win: %d, lose: %d\n", win, lose);
   
   return 1;
*/
   while (game) {
      play_game() ? printf("You win!\n") : printf("You lose!\n") ;

      printf("\nPlay again? ");
       scanf(" %c", &ch);

      ch = tolower((int)ch);
      printf("\n");

      point = 0;
      game = ((ch == 'y') ? true : false);
   }

   printf("win: %d, lose: %d\n", win, lose);

   return 0;
}
