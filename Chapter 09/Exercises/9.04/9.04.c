#include <stdio.h>

int day_of_year(int month, int day, int year)
{
   int i, days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

      for (i = 0; i < month; i++) {
         day += days_in_month[i-1]; 
      }

   return (year % 4 == 0 && month > 2) ? day++ : day;
}

int main(void)
{
   int month, day, year;
   printf("Enter month, day, and year: ");
    scanf("%d %d %d", &month, &day, &year);

   printf("Day of the year: %d\n", day_of_year(month, day, year));

   return 0;
}
