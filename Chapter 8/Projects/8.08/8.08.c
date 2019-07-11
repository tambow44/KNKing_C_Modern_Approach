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
