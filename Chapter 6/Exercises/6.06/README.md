### Exercise 6.06
Translate the program fragment of `Exercise 1` into a single `for` statement.
### Solution
#### 6.06.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   for (i = 1; i <= 128; i *= 2) {
      printf("%d ", i);
   }

   return 0;
}
```
#### Output
```
1 2 4 8 16 32 64 128 
```
