#include <stdio.h>

int main(void)
{
   char indicator;
   int hour, minute;
   printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &indicator);

   printf("Equivalent 24-hour time: ");

   if (indicator == 'P' || indicator == 'p') {
      if (hour != 12) {
         printf("%d:%d\n", hour + 12, minute);
      }
   } else if (indicator == 'A' || indicator == 'a') {
      if (hour == 12) {
         printf("00:%d\n", minute);
      }
   }

   return 0;
}
