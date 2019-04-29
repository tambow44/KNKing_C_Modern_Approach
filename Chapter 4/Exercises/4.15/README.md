### Exercise 4.13
Give the values of `i` and `j` after each of the following expression statements has been executed. (Assume that `i` has the value of `1` and `j` has the value of `2`.)
```
a) i += j;
b) i--;
c) - * j / i;
d) i % ++j;
```
### Solution
#### 4.13.c
```c
#include <stdio.h>

int main(void)
{
   int i = 1, j = 2;

   i += j;
   printf("%2d %2d\n", i, j);

   i = 1, j = 2;
   i--;
   printf("%2d %2d\n", i, j);

   i = 1, j = 2;
   i * j / i;
   printf("%2d %2d\n", i, j);
   
   i = 1, j = 2;
   i % ++j;
   printf("%2d %2d\n", i, j);

   return 0;
}
```
Produces the following warnings:
```c
4.15.c:15:10: warning: expression result unused [-Wunused-value]
   i * j / i;
   ~~~~~ ^ ~
4.15.c:19:6: warning: expression result unused [-Wunused-value]
   i % ++j;
   ~ ^ ~~~
2 warnings generated.
```
#### Output
```
 3  2
 0  2
 1  2
 1  3
```
