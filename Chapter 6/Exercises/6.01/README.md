### Exercise 6.01
What output does the following program fragment produce?
```c
   i = 1;
   while (i <= 128) {
      printf("%d ", i);
      i *= 2;
   }
```
### Solution
#### 6.01.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   i = 1;
   while (i <= 128) {
      printf("%d ", i);
      i *= 2;
   }

   return 0;
}
```
#### Output
```
1 2 4 8 16 32 64 128 
```
