#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
   int row, column;
   double average = 0.0,
          temperature_readings[DAYS][HOURS];

   for (row = 0; row < DAYS; row++) {
      for (column = 0; column < HOURS; column++) {
         average += temperature_readings[row][column];
      }
   }

   average /= DAYS * HOURS;

   printf("Average temperature: %.2f\n", average);

   return 0;
}
