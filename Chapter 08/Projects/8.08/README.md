### Project 8.08
Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each *student*, and the average score, high score, and low score for each *quiz*.
### Solution
#### 8.08.c
```c
/*
 * Total, and Average score for each student
 * Average, Highest, and Lowest score for each quiz
 */

#include <stdio.h>

#define NUM 5

int main(void)
{
   int i, j, t_total, high, low;
   int n[NUM][NUM];

   for (i = 0; i < NUM; i++) {
      printf("Enter quiz grade for student #%d: ", i+1);

      for (j = 0; j < NUM; j++) {
         scanf("%d", &n[i][j]);
      }
   }

   for (i = 0; i < NUM; i++) {
      printf("\nTotal and average scores for student #%d:", i+1);
      t_total = 0;

      for (j = 0; j < NUM; j++) {
         t_total += n[i][j];
      }

      printf(" %3d %.2f", t_total, ((double) t_total / NUM));
   }

   printf("\n");

   for (j = 0; j < NUM; j++) {
      printf("\nAverage, highest, and lowest scores for quiz #%d:", j+1);
      t_total = 0;
      high = low = n[0][j];

      for (i = 0; i < NUM; i++) {
         t_total += n[i][j];
         if (n[i][j] > high) {
            high = n[i][j];
         }
         if (n[i][j] < low) {
            low = n[i][j];
         }
      }
      printf(" %.2f %3d %3d", ((double) t_total / NUM), high, low);
   }

   printf("\n");

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
Enter quiz grade for student #1: 20 30 40 50 60
Enter quiz grade for student #2: 19 18 17 16 15
Enter quiz grade for student #3: 11 13 15 17 19
Enter quiz grade for student #4: 69 58 76 99 73
Enter quiz grade for student #5: 44 55 28 91 31

Total and average scores for student #1: 200 40.00
Total and average scores for student #2:  85 17.00
Total and average scores for student #3:  75 15.00
Total and average scores for student #4: 375 75.00
Total and average scores for student #5: 249 49.80

Average, highest, and lowest scores for quiz #1: 32.60  69  11
Average, highest, and lowest scores for quiz #2: 34.80  58  13
Average, highest, and lowest scores for quiz #3: 35.20  76  15
Average, highest, and lowest scores for quiz #4: 54.60  99  16
Average, highest, and lowest scores for quiz #5: 39.60  73  15
```
