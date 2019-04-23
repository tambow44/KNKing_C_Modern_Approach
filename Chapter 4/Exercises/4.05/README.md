### Exercise 4.5
What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
### Solution
#### 4.5.c
```c
#include <stdio.h>

int main(void)
{
   printf("a) %d\n", 8 % 5);
   printf("b) %d\n", -8 % 5);
   printf("c) %d\n", 8 % -5);
   printf("d) %d\n", -8 % -5);

   return 0;
}
```
#### Output
```
a) 3
b) -3 or 5
c) 3 or -5
d) 3 or 5
```
