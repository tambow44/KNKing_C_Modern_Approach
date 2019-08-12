### Exercise 6.09
Translate the `for` statement of Exercise 8 into an equialent `while` statement. You will need one statement in addition to the `while` loop itself.
### Solution
#### 6.09.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   i = 10;

   while (i >= 1) {
   printf("%d ", i++);
   i /= 2;
   }

   return 0;
}
```
