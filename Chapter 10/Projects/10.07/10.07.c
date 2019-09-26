#include <stdio.h>

/* Defne macros */
#define MAX_DIGITS 10

/* External variables */
const int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},  /* 0 */
                                     {0, 1, 1, 0, 0, 0, 0},  /* 1 */
                                     {1, 1, 0, 1, 1, 0, 1},  /* 2 */
                                     {1, 1, 1, 1, 0, 0, 1},  /* 3 */
                                     {0, 1, 1, 0, 0, 1, 1},  /* 4 */
                                     {1, 0, 1, 1, 0, 1, 1},  /* 5 */
                                     {1, 0, 1, 1, 1, 1, 1},  /* 6 */
                                     {1, 1, 1, 0, 0, 0, 0},  /* 7 */
                                     {1, 1, 1, 1, 1, 1, 1},  /* 8 */
                                     {1, 1, 1, 1, 0, 1, 1}}; /* 9 */
char digits[4][MAX_DIGITS * 4];


/* Function prototypes  */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
   int i = 0;
   char ch;

   printf("Enter a number: ");
   while ((ch = getchar()) != '\n') {
      if (ch >= '0' && ch <= '9')
         
   }
      

   return 0;
}

void clear_digits_array(void)
{
   int i = 0, j = 0;
   for (; i < 4; i++) {
      for (; j < (MAX_DIGITS * 4); j++)
         digits[i][j] = 0;
   }
}

void process_digit(int digit, int position)
{
   

}

void print_digits_array(void)
{

}
