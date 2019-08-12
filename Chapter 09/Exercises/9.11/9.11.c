#include <stdio.h>

#define LEN 5

float compute_GPA(char grades[], int n)
{
   int i;
   float sum = 0.0f;

   for (i = 0; i < n; i++) {
      switch(toupper(grades[i]))  {
         case 'A':
            sum += 4.0f;
            break;
         case 'B':
            sum += 3.0f;
            break;
         case 'C':
            sum += 2.0f;
            break;
         case 'D':
            sum += 1.0f;
            break;
         case 'F':
            sum += 0.0f;
            break;
         default:
            break;
      }
   }

   return sum / n;
}

int main(void)
{
   char grade[LEN] = { 'A', 'A', 'F', 'D', 'C' };

   printf("Grade average: %.2f\n", compute_GPA(grade, LEN));

   return 0;
}
