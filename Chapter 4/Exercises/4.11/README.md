### Exercise 4.11
Show the output produced by the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.
```
a) i = 1;
   printf("%d", i++ - 1);
   printf("%d", i);
b) i = 10; j = 5;
   printf("%d", i++ - ++j);
   printf("%d %d", i, j);
c) i = 7; j = 8;
   printf("%d ", i++ - --j);
   printf("%d %d", i, j);
d) i = 3; j = 4; k = 5;
   printf("%d ", i++ - j++ + --k);
   printf("%d %d %d", i, j, k);
```
### Solution
#### 4.11.c
```c
#include <stdio.h>

int main(void)
{
   int i, j, k;

   i = 1;
   printf("%2d\n", i++ - 1);
   printf("%2d\n", i);

   i = 10; j = 5;
   printf("%2d\n", i++ - ++j);
   printf("%2d %2d\n", i, j);

   i = 7; j = 8;
   printf("%2d \n", i++ - --j);
   printf("%2d %2d\n", i, j);

   i = 3; j = 4; k = 5;
   printf("%2d \n", i++ - j++ + --k);
   printf("%2d %2d %2d\n", i, j, k);

   return 0;
}
```
#### Output
```
 0
 2
 4
11  6
 0 
 8  7
 3 
 4  5  4
```
