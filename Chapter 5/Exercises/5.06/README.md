### Exercise 5.6
Is the following `if` statement legal?
```
if (n == 1-10)
   printf("n is between 1 and 10\n");
```
If so, what does it do when `n` is equal to `5`?
### Solution
While this `if` statement is legal; the `printf` statement will only run when `n` is equal to `-9`. The expression `n == 1-10` is checking whether `n` is equal to the equation `1-10` (so, `n == -9`).
#### 5.6.c
```c
#include <stdio.h>

int main(void)
{
   int n = -9;

   if (n == 1-10)
      printf("n is between 1 and 10\n");

   return 0;
}
```
