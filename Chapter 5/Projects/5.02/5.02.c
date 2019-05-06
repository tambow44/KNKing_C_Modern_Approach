#include <stdio.h>

int main(void)
{
   int hour, minute;

   printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

   printf("Equivalent 12-hour time: ");

   if (hour < 11) {
      printf("%d:%02d AM\n", hour == 0 ? 12 : hour, minute);
   } else {
      printf("%d:%02d PM\n", hour == 12 ? 12 : hour - 12, minute);
   }

   return 0;
}
