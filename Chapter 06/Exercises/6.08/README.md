### Exercise 6.08
What output does the following `for` statement produce?
```c
for (i = 10; i >= 1; i /= 2) {
   printf("%d ", i++);
}
```
### Solution
#### 6.08.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   for (i = 10; i >= 1; i /= 2) {
      printf("%d ", i++);
   }

   return 0;
}
```
#### Output
Decrements `10, 5, 3, 2, 1, 1, 1, ...`   
The loop will be stuck at 1.

`1` [`10`] is divided by `2` [`5`], printed, then `1` is added to `i` [`6`]; `i` is then divided by `2` [`3`], printed, then `1` is added to `i` [`4`]; `i` is then divided by `2` [`2`], printed, then `1` is added to `i` [`3`]; i is finally divided by `2` [`1`] (`ints` round down) which is greater than or equal to one (the conditional expression: `i >= i`), so the loop will from here, forever print `1`.

```
10 5 3 2 1 1 1 1 ...
```
 
