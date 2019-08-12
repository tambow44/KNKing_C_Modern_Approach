### Exercise 4.3
What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
```
a) 8 / 5
b) -8 / 5
c) 8 / -5
d) -8 / -5
```
### Solution
#### 4.3.c
```c
#include <stdio.h>

int main(void)
{
   printf("a) %d\n", 8 / 5);
   printf("b) %d\n", -8 / 5);
   printf("c) %d\n", 8 / -5);
   printf("d) %d\n", -8 / -5);

   return 0;
}
```
#### Output
```
a) 1
b) -1 or -2
c) -1 or -2
d) 1 or 2
```
