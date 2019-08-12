#include <stdio.h>

int main(void)
{
   int m1, d1, y1,
       m2, d2, y2;

   printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
   printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

   if (y1 < y2) {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d",
             m1, d1, y1, m2, d2, y2);
   } else if (m1 < m2) {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d",
             m1, d1, y1, m2, d2, y2);
   } else if (d1 < d2) {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d",
             m1, d1, y1, m2, d2, y2);
   } else {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d",
             m2, d2, y2, m1, d1, y1);
   }

   return 0;
}
