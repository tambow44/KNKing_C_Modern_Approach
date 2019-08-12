### Exercise 5.4
Write a single expression whose value is eihter `-1`, `0`, or `+1`, depending on whether `i` is less than, equal to, or greater than `j`, respectively.
### Solution
The expression `(i > j) - (i < j)` works. Demonstration below.
#### 5.4.c
```c
#include <stdio.h>

int main(void)
{
   int i, j;

   i = 0; j = 1;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));

   i = 1; j = 1;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));

   i = 1; j = 0;
   printf("i = %d, j = %d.\n   Output is: %d\n", i, j, (i > j) - (i < j));
   
   return 0;
}
```
#### Output
```
i = 0, j = 1.
   Output is: -1
i = 1, j = 1.
   Output is: 0
i = 1, j = 0.
   Output is: 1
```
