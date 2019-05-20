#include <stdio.h>

int main(void)
{
   int mm, dd, yy,
       me, de, ye;

   printf("Enter a date (mm/dd/yy): ");
    scanf("%d/ %d/ %d", &me, &de, &ye);

   while(1) {
      printf("Enter a date (mm/dd/yy): ");
       scanf("%d /%d /%d", &mm, &dd, &yy);

      if (mm == 0 && dd == 0 && yy == 0) {
         printf("%.2d/%.2d/%.2d is the earliest date", me, de, ye);
         return 0;
      } else if (yy < ye || (yy < ye && mm < me) || (yy < ye && mm < me && dd < de))  {
         me = mm, de = dd, ye = yy;
      }
   }
}
