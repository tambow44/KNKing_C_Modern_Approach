### Exercise 6.02
What output does the following program fragment produce?
```c
   i = 9384;
   do {
      printf("%d ", i);
      i /= 10;
   } while (i > 0);
```
### Solution
#### 6.02.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   i = 9384;
   do {
      printf("%d ", i);
      i /= 10;
   } while (i > 0);

   return 0;
}
```
#### Output
```
9384 938 93 9 
```
