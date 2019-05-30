### Project 7.03
Modify the `sum2.c` program of Section 7.1 to sum a series of `double` values.
### Solution
#### 7.03.c
```c
#include <stdio.h>

int main(void)
{
   double n, sum = 0;

   printf("This program sums a series of integers.\n");

   printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);

   while (n != 0) {
      sum += n;
      scanf("%lf", &n);
   }

   printf("The sum is %f\n", sum);

   return 0;
}
```
This program sums a series of integers.
Enter integers (0 to terminate): 10
34.5
99.7
22
The sum is 166.200000
```
