### Project 7.08
Modify `Programming Project 8` from `Chapter 5` so that the user enters a time using the 12-hour clock. The input will have the form *hours:minutes* followed by either `A`, `P`, `AM`, or `PM` (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:
```
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
```
You may assume that the input has one of these forms; there is no need to test for errors.
### Solution
#### 7.08.c
```c
#include <stdio.h>

int main(void)
{
   char indicator;   
   int hour, minute, time,
       d1 = 480,  d2 = 583,
       d3 = 679,  d4 = 767,
       d5 = 840,  d6 = 945,
       d7 = 1140, d8 = 1305;

   printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &indicator);

   if (indicator == 'P' || indicator == 'p') {
      if (hour != 12) {
        hour += 12;
      }
   } else if (indicator == 'A' || indicator == 'a') {
      if (hour == 12) {
         hour -= 12;
      }
   }

   time = (hour * 60) + minute;

   printf("Closest departure time is ");

   if (time <= d1 + (d2 - d1) / 2)
      printf("8:00 a.m., arriving at 10:16 a.m.\n");
   else if (time <= d2 + (d3 - d2) / 2)
      printf("9:43 a.m., arriving at 11:52 a.m.\n");
   else if (time <= d3 + (d4 - d3) / 2)
      printf("11:19 a.m., arriving at 1:31 p.m.\n");
   else if (time <= d4 + (d5 - d4) / 2)
      printf("12:47 p.m., arriving at 3:00 p.m.\n");
   else if (time <= d5 + (d6 - d5) / 2)
      printf("2:00 p.m., arriving at 4:08 p.m.\n");
   else if (time <= d6 + (d7 - d6) / 2)
      printf("3:45 p.m., arriving at 5:55 p.m.\n");
   else if (time <= d7 + (d8 - d7) / 2)
      printf("7:00 p.m., arriving at 9:20 p.m.\n");
   else
      printf("9:45 p.m., arriving at 11:58 p.m.\n");

   return 0;
}
```
#### Output
```
Enter a 12-hour time: 1:15 P
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
Enter a 12-hour time: 1:15 a
Closest departure time is 8:00 a.m., arriving at 10:16 a.m.
```
