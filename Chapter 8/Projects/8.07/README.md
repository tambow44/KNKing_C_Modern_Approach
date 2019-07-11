### Project 8.07
Write a program that reads a `5 x 5` array of integers and then prints the rows sums and the column sums:
```
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals; 34 37 37 32 21
```
### Solution
#### 8.07.c
```c
#include <stdio.h>

#define NUM 5

int main(void)
{
   int i, j, t_total,
         n[NUM][NUM];

   for (i = 0; i < NUM; i++) {
      printf("Enter row %d: ", i+1);

      for (j = 0; j < NUM; j++) {
         scanf("%d", &n[i][j]);
      }
   }

   printf("\nRow totals:");
/* j iterates 0-4, then resets; i iterates at each j reset */
   for (i = 0; i < NUM; i++) {
      t_total = 0;
      for (j = 0; j < NUM; j++) {
         t_total += n[i][j];
      }
      printf(" %d", t_total);
   }
   
   printf("\nColumn totals:");
/* i iterates 0-4, then resets; j iterates at each i reset */
   for (j = 0; j < NUM; j++) {
      t_total = 0;
      for (i = 0; i < NUM; i++) {
         t_total += n[i][j];
      }
      printf(" %d", t_total);
   }

   return 0;
}
/* Visualisation: 
 *   [i,j] [i,j] [i,j] [i,j] [i,j]
 *   -----------------------------
 *{{ [0,0] [0,1] [0,2] [0,3] [0,4] } 
 * { [1,0] [1,1] [1,2] [1,3] [1,4] }
 * { [2,0] [2,1] [2,2] [2,3] [2,4] }
 * { [3,0] [3,1] [3,2] [3,3] [3,4] }
 * { [4,0] [4,1] [4,2] [4,3] [4,4] }}
 *   -----------------------------
 */
```
#### Output
```
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
---
Enter row 1: 9 8 7 4 5
Enter row 2: 6 2 12 34 7
Enter row 3: 0 9 0 0 0 1
Enter row 4: 6 5 14 37 11
Enter row 5: 1 2 3 4 5

Row totals: 33 61 9 63 21
Column totals: 27 26 26 55 53
```
