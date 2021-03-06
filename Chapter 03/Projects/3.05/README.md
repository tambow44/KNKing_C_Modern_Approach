### Project 3.5
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers ni a 4 by 4 arrangemnt, followed by the sums of the rows, columns, and diagonals:
```
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
```
If the row, column, ad diagonal sums are all the same (as they are in this example), the numbers are said to form a *magic square*. The magic square shown here appears in 1514 engraving by artist and mathematician Albrect Dürer. (Note that the middle numbers in the last row give the date of the engraving.)
### Solution
#### 3.5.c
```c
#include <stdio.h>

int main(void)
{

   int n1, n2, n3, n4, n5, n6, n7, n8,
       n9, n10, n11, n12, n13, n14, n15, n16;

   printf("Enter the numbers from 1 to 16 in any order: ");
   scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", \
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, \
          &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

   printf("%2d %2d %2d %2d\n",  n1,  n2,  n3,  n4);
   printf("%2d %2d %2d %2d\n",  n5,  n6,  n7,  n8);
   printf("%2d %2d %2d %2d\n",  n9, n10, n11, n12);
   printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);

   int r1, r2, r3, r4,
       c1, c2, c3, c4,
       d1, d2;

   /* calculate rows */
   r1 = n1 + n2 + n3 + n4;
   r2 = n5 + n6 + n7 + n8;
   r3 = n9 + n10 + n11 + n12;
   r4 = n13 + n14 + n15 + n16;

   /* calculate columns */
   c1 = n1 + n5 + n9 + n13;
   c2 = n2 + n6 + n10 + n14;
   c3 = n3 + n7 + n11 + n15;
   c4 = n4 + n8 + n12 + n16;

   /* calculate diagonals */
   d1 = n1 + n6 + n11 + n16;
   d2 = n4 + n7 + n10 + n13;

   printf("Row sums: %2d %2d %2d %2d\n", r1, r2, r3, r4);
   printf("Column sums: %2d %2d %2d %2d\n", c1, c2, c3, c4);
   printf("Diagonal sums: %2d %2d\n", d1, d2);

   return 0;
}
```
