### Project 8.05
Modigy the `interest.c` program of Section 8.1 so that it compounds interest *monthly* instead of *annually*. The form of the output shouldn't change; the balance should still be shown in annual intervals.
### Solution
#### 8.05.c
```c
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
   int i, low_rate, num_years, month, year;
   double value[5];

   printf("Enter interest rate: ");
    scanf("%d", &low_rate);
   printf("Enter number of years: ");
    scanf("%d", &num_years);

   printf("\nYears");
   for (i = 0; i < NUM_RATES; i++) {
      printf("%6d%%", low_rate + i);
      value[i] = INITIAL_BALANCE;
   }
   printf("\n");

   for (year = 1; year <= num_years; year++) {
      printf("%3d    ", year);

      for (i = 0; i < NUM_RATES; i++) {
         for (month = 1; month <= 12; month++) {
            value[i] += ((double) (low_rate + i) / 12.0) / 100.0 * value[i];
         }
         printf("%7.2f", value[i]);
      }
      printf("\n");
   }

   return 0;
}
```
