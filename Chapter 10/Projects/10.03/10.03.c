#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
int card_exists(int rank, int suit);

int main(void)
{
   for (;;) {
      read_cards();
      analyze_hand();
      print_result();
   }
}

void read_cards(void)
{
   char ch, rank_ch, suit_ch;
   bool bad_card;
   int rank, suit;
   int cards_read = 0;

   while (cards_read < NUM_CARDS) {
      bad_card = false;

      printf("Enter a card: ");

      rank_ch = getchar();
      switch (rank_ch) {
         case '0':           exit(EXIT_SUCCESS);
         case '2':           rank = 0;  break;
         case '3':           rank = 1;  break;
         case '4':           rank = 2;  break;
         case '5':           rank = 3;  break;
         case '6':           rank = 4;  break;
         case '7':           rank = 5;  break;
         case '8':           rank = 6;  break;
         case '9':           rank = 7;  break;
         case 't': case 'T': rank = 8;  break;
         case 'j': case 'J': rank = 9;  break; 
         case 'q': case 'Q': rank = 10; break;
         case 'k': case 'K': rank = 11; break;
         case 'a': case 'A': rank = 12; break;
         default:            bad_card = true;
      }

      suit_ch = getchar();
      switch (suit_ch) {
         case 'c': case 'C': suit = 0; break;
         case 'd': case 'D': suit = 1; break;
         case 'h': case 'H': suit = 2; break;
         case 's': case 'S': suit = 3; break;
         default:            bad_card = true;
      }

      while ((ch = getchar() != '\n'))
         if (ch != ' ') bad_card = true;

      if (bad_card)
         printf("Bad card; ignored.\n");
      else if (card_exists(rank, suit))
         printf("Duplicate card; ignored.\n");
      else {
         hand[cards_read][0] = rank;
         hand[cards_read][1] = suit;
         cards_read++;
      }
   }
}

int card_exists(int rank, int suit)
{
   for (int i = 0; i < NUM_CARDS; i++) {
         if (hand[i][0] == rank && hand[i][1] == suit)
            return true;
   }
   return false;
}

void analyze_hand(void)
{
   int num_consec = 0;
   int card, count, t_rank, t_suit, small, temp;

   straight = false;
   flush = false;
   four = false;
   three = false;
   pairs = 0;

// Sorting hat
   for (int i = 0; i < NUM_CARDS; i++) {
      small = i;

      for (int j = 0; j < NUM_CARDS; j++) {
         if (hand[j][0] < hand[small][0])
            small = j;
      }

      t_rank = hand[i][0];
      t_suit = hand [i][1];
      hand[i][0] = hand[small][0];
      hand[i][1] = hand [small][1];
      hand[small][0] = t_rank;
      hand[small][1] = t_suit;
   }

// check for flush -- same SUIT
   count = 0;
   temp = hand[0][1];
   for (int i = 0; i <= NUM_SUITS; i++)
      (temp == hand[i][1]) ? count++ : count ;

   if (count == NUM_CARDS)
      flush = true;

//check for straight -- ascending RANK!
   for (int i = 1; i < NUM_CARDS; i++) {
      if (hand[i][0] - hand[card-1][0] != 1)
         break;
      if (card == NUM_CARDS -1)
         straight = true;
   }

// check for 4-of-a-kind, 3-of-a-kind, and pairs
   for (int i = 0; i < NUM_CARDS; i++) {
      temp = 0;
      for (int j = i + 1; j < NUM_CARDS; j++) {
         (hand[j][0] == hand[i][0]) ? temp++ : temp;
      }

      if (temp == 1) pairs++ ;
      if (temp == 2) three = true;
      if (temp == 3)  four = true;
   }
}

void print_result(void)
{
   if (straight && flush) printf("Straight flush");
   else if (four)         printf("Four of a kind");
   else if (three && 
            pairs == 1)   printf("Full house");
   else if (flush)        printf("Flush");
   else if (straight)     printf("Straight");
   else if (three)        printf("Three of a kind");
   else if (pairs == 2)   printf("Two pairs");
   else if (pairs == 1)   printf("Pair");
   else                   printf("High card");
   
   printf("\n\n");
}
