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
