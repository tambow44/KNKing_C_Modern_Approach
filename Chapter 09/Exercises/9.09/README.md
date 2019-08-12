### Exercise 9.09
What will be the output of the following program?
```c
#include <stdio.h>

void swap (int a, int b);

int main(void)
{
   int i = 1, j = 2;

   swap (i, j);
   printf("i = %d, j = %d\n", i, j);
   return 0;
}

void swap (int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}
```
### Solution
Output:
```
i = 1, j = 2;
```
While the `swap` function will perform its operation, the function will not return any values.
