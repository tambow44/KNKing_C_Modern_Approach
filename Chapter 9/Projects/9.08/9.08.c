#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int point = 0;

int roll_dice(void)
{
   return (rand() % 6)  + (rand() % 6) + 2;
}

bool play_game(void)
{
   int dice = roll_dice();

   printf("You rolled: %d\n", dice);
   if (dice == 7 || dice == 11 || dice == point) {
      return true;
   } else if (dice == 2 || dice == 3 || dice == 12) {
      return false;
   } else if (point == 0) {
      point = dice;
      printf("Your point is %d\n", point);
   }

   play_game();
   return 0;
}

int main(void)
{
   bool game = true;
   int win = 0, lose = 0;
   char ch;

   srand((unsigned) time(NULL));

   while (game) {
      (play_game()) ? printf("You win!\n"), win++ : printf("You lose!\n"), lose++ ;

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
