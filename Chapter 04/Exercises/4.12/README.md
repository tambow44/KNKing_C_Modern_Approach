### Exercise 4.11
Show the output produced by the following program fragments. Assume that `i` and `j` are `int` variables.
```
a) i = 5;
   j = ++i * 3 - 2;
   printf("%d %d", i, j);
b) i = 5;
   j = 3 - 2 * i++;
   printf("%d %d", i, j);
c) i = 7;
   j = 3 * i-- + 2;
   printf("%d %d", i, j);
d) i = 7;
   j = 3 + --j * 2;
   printf("%d %d", i, j;
```
### Solution
#### 4.11.c
```c
#include <stdio.h>

int main(void)
{
   int i, j;

   i = 5;
   j = ++i * 3 - 2;
   printf("%2d %2d\n", i, j);

   i = 5;
   j = 3 - 2 * i++;
   printf("%2d %2d\n", i, j);

   i = 7;
   j = 3 * i-- + 2;
   printf("%2d %2d\n", i, j);

   i = 7;
   j = 3 + --j * 2;
   printf("%2d %2d\n", i, j);

   return 0;
}
```
This compiles fine, but produces the following error:
```c
4.12.c:20:12: warning: multiple unsequenced modifications to 'j'
      [-Wunsequenced]
   j = 3 + --j * 2;
     ~     ^
1 warning generated.
```
#### Output
```
 6 16
 6 -7
 6 23
 7 47
```
