### Exercise 5.6
Is the followingdd `if` statement legal?
```
if (n >= 1 <= 10)
   printf("n is between 1 and 10\n");
```
If so, what does it do when `n` is equal to `5`?
### Solution

#### 5.5.c
```c
#include <stdio.h>

int main(void)
{
   int n = 0;

   if (n >= 1 <= 10)
      printf("n is between 1 and 10\n");

   return 0;
}
```
#### Output
```
n is between 1 and 10
```
