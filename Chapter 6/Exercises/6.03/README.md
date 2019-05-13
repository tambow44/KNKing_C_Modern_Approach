### Exercise 6.03
What output does the following `for` statement produce?
```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
   printf("%d ", i);
```
### Solution
#### 6.03.c
```c
#include <stdio.h>

int main(void)
{
   int i, j;

   for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
      printf("%d ", i);
   }

   return 0;
}
```
Compiler produces the following warning:
```c
6.03.c:7:27: warning: relational comparison result unused
      [-Wunused-comparison]
        for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
                               ~~^~~
1 warning generated.
```
#### Output
```
5 4 3 2 
```
