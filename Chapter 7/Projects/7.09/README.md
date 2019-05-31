### Project 7.09
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
```
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
```
See `Programming Project 8` for a description of the input format.
### Solution
#### 7.09.c
```c
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
```
#### Output
```
Enter a 12-hour time: 12:45 AM
Equivalent 24-hour time: 00:45
---
Enter a 12-hour time: 3:13 pm
Equivalent 24-hour time: 15:13
```

