### Project 3.1
Write a program that accepts a date from the user in the form *mm/dd/yyyy* and then displays it in the format *yyyymmdd*:
```
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
```

### Solution
#### 3.1.c
```c
#include <stdio.h>

int main(void)
{
   int day, month, year;

   printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

   printf("You entered the date %d%d%d\n", year, month, day);

   return 0;
}
```
