#include <stdio.h>

#define N 26
int main(void)
{

   char ch;
   int i,
       points[N] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };


//   printf("Enter a word: ");
   
   /* 97 98 99 . . . 120 121 122 */
   printf("%d %d %d . . . %d %d %d\n", 'a', 'b', 'c', 'x', 'y', 'z');

   /* 65 66 67 . . . 88 89 90 */
   printf("%d %d %d . . . %d %d %d\n", 'A', 'B', 'C', 'X', 'Y', 'Z');


   return 0;
}
