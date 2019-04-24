### Exercise 4.9
Show the output produced by each of the following program fragments. Assume that *i*, *j*, and *k* are *int* variables.
```
a) i = 7; j = 8;
   i *= j + 1;
   printf("%d %d", i, j);
b) i = j = k = 1;
   i += j += k;
   printf("%d %d %d", i, j, k);
c) i = 1; j = 2; j = 3;
   i -= j -= k;
   printf("%d %d %d", i, j, k);
d) i = 2; j = 1; k = 0;
   i *= j *= k;
   printf("%d %d %d", i, j, k);
```
### Solution
#### 4.9.c
```c
#include <stdio.h>

int main(void)
{
   int i, j, k;

   i = 7; j = 8;
   i *= j + 1;
   printf("%d %d\n", i, j);

   i = j = k = 1;
   i += j += k;
   printf("%d %d %d\n", i, j, k);

   i = 1; j = 2; j = 3;
   i -= j -= k;
   printf("%d %d %d\n", i, j, k);

   i = 2; j = 1; k = 0;
   i *= j *= k;
   printf("%d %d %d\n", i, j, k); 

   return 0;
}
```
#### Output
```
63  8
 3  2  1
-1  2  1
 0  0  0
```
