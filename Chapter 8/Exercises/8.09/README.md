### Exercise 8.09
Using the array of `Exercise 8`, write a program fragment that computes the average temperature for a month 9averaged over all days of the month and all hours of the day).
### Solution
Will return `-nan` as there is no actual data within `temperature_readings`.
#### 8.09.c
```c
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
```
