### Project 5.08
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:
```
Enter first date (mm/dd/yy): 3/6/08
Enter second date ((mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
```
### Solution
#### 5.08.c
```c
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
```
#### Output
```
Enter first date (mm/dd/yy): 15/12/09
Enter second date (mm/dd/yy): 9/12/09
09/12/09 is earlier than 15/12/09
---
Enter first date (mm/dd/yy): 14/01/9
Enter second date (mm/dd/yy): 17/8/7
14/01/09 is earlier than 17/08/07

```
