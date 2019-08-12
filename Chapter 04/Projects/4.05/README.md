### Project 4.05
Rewrite the `upc.c` program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.
```
Enter the first 11 digits of a UPC: 01380015173 
Check digit: 5
```
### Solution
#### 4.05.c
```c
#include <stdio.h>

int main(void)
{
   int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5,
       first_sum, second_sum, total;

   printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", \
           &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);

   first_sum = i1 + i3 + i5 + j1 + j3 + j5;
   second_sum = i2 + i4 + i6 + j2 + j4;
   total = 3 * first_sum + second_sum;

   printf("Check digit: %d\n", 9 - ((total -1) % 10));

   return 0;
}
```
#### Output
```
Enter the first 11 digits of a UPC: 01380015173 
Check digit: 5
```
