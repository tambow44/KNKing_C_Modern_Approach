### Project 5.08
The following table shows the daily flights from one city to another:

| Departure time | Arrival time |
| ---: | ---: |
| 8:00 a.m. | 10:16 a.m. |
| 9:43 a.m. | 11:52 a.m. |
| 11:19 a.m. | 1:31 p.m. |
| 12:47 p.m. | 3:00 p.m. |
| 2:00 p.m. | 4:08 p.m. |
| 3:45 p.m. | 5:55 p.m. |
| 7:00 p.m. | 9:20 p.m. |
| 9:45 p.m. | 11:58 p.m. |

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
```
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```
*Hint:* Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, `13:15` is `13 * 60 + 15 = 795` minutes since midnight, which is closer to `12:47 p.m.` (`767` minutes since midnight) than to any of the other departure times.
### Solution
#### 5.08.c
```c
#include <stdio.h>

int main(void)
{
   int hour, minute, time,
       d1 = 480,  d2 = 583,
       d3 = 679,  d4 = 767,
       d5 = 840,  d6 = 945,
       d7 = 1140, d8 = 1305;

   printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

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
Enter a 24-hour time: 13:55
Closest departure time is 2:00 p.m., arriving at 4:08 p.m.
```
