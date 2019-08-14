#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

#define HAND_RANK 5
#define HAND_SUIT 2

/* external variables */
int hand[HAND_RANK][HAND_SUIT];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
int card_exists(int rank, int suit);
void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

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

   for (rank = 0; rank < HAND_RANK; rank++) {
      for (suit = 0; suit < HAND_SUIT; suit++)
         hand[rank][suit] = 0;
   }

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

void analyze_hand(void)
{
   int rank, suit;
   int count = 0, temp = 0;
   straight = false;
   flush = false;
   four = false;
   three = false;
   pairs = 0;

// check for flush -- same SUIT
   temp = hand[0][1];
   for (int i = 0; i <= NUM_SUITS; i++)
      (temp == hand[i][1]) ? count++ : count ;

   if (count == NUM_CARDS)
      flush = true;

//check for straight -- ascending RANK!
   int a[5] = { 0 };
   for (int i = 0; i < HAND_RANK; i++) {
      a[i] = hand[i][0];
   }

   quicksort(a, 0, HAND_RANK -1);

   temp = a[0];
   count = 0;
   for (int i = 0; i < HAND_RANK; i++)
      (temp++ == a[i]) ? count++ : count;

   if (count == NUM_CARDS)
      straight = true;
   
// check for 4-of-a-kind, 3-of-a-kind, and pairs
   for (int i = 0; i < HAND_RANK; i++)
      (a[i] == a[++i]) ? pairs++ : pairs ;

   printf("pairs: %d\n", pairs);
   

   for (rank = 0; rank < NUM_RANKS; rank++) {
      if (pairs == 4) four = true;
      if (pairs == 3) three = true;
   }
}

int card_exists(int rank, int suit)
{
   for (int i = 0; i < HAND_RANK; i++) {
         if (hand[i][0] == rank && hand[i][1] == suit)
            return 1;
   }

   return 0;
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

void quicksort(int a[], int low, int high)
{
   int middle;

   if (low >= high)
      return;

   middle = split(a, low, high);
   quicksort(a, low, middle - 1);
   quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
   int part_element = a[low];

   for (;;) {
      while (low < high && part_element <= a[high])
         high --;
      if (low >= high)
       break;

      a[low++] = a[high];

      while (low < high && a[low] <= part_element)
         low++;
      if (low >= high)
         break;
      a[high--] = a[low];
   }

   a[high] = part_element;
   return high;
}
