### Project 6.10
Programming Project 9 in Chapter 5 asked you to write a program that determines which of two dates comes earlier on the calendar. Generalize the program so that the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
```
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date
```
### Solution
#### 6.10.c
```c
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
```
#### Output
```
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
05/17/07 is the earliest date
```
