### Exercise 6.07
Translate the program fragment of `Exercise 2` into a single `for` statement.
### Solution
#### 6.07.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   i = 9384;
   for (i = 9384; i > 0; i /= 10) {
      printf("%d ", i);
   }

   return 0;
}
```
#### Output
```
9384 938 93 9 
```
