### Exercise 4.7
The algorithm for computing the UPC check digit ends with the follownig steps:
```
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
```
It's tempting to try to simplify the algorithm by using these steps instead:
```
Computer the remainder when the total is divided by 10.
Subtract the remainder from 10.
```
Why doesn't this technique work?
### Solution
#### 4.7.c
```c
#include <stdio.h>

int main(void)
{
   int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
       first_sum, second_sum, total;

   printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
   printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
   printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

   first_sum = d + i2 + i4 + j1 + j3 + j5;
   second_sum = i1 + i3 + i5 + j2 + j4;
   total = 3 * first_sum + second_sum;

   printf("Check digit: %d\n", 9 - ((total -1) % 10));
   /* "Simplified" solution */
   printf("Check digit: %d\n", 10 - ((total / 10) % 10));
   return 0;
}
```
#### Output
```
Enter the first (single) digit: 0
Enter first group of five digits: 13800
Enter second group of five digits: 15173
Check digit: 5
Check digit: 6
```
