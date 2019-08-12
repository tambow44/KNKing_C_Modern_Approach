### Exercise 7.11
Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. What is the type of the expression `i * f / d`?
### Solution
Expression will be type `double`. Integers are promoted to floats; floats to double.   
`int` > `float` > `double`.
#### 7.11.c
```c
#include <stdio.h>

int main(void)
{

   int i = 1;
   float f = 2.3;
   double d = 4.3;

   printf("Size of int: %lu; float: %lu; double: %lu\n", sizeof(i), sizeof(f), sizeof(d));

   printf("Size of expresiion \'i * f / d\': %lu\n", sizeof(i * f / d));

   return 0;
}
```
#### Output
Size of int: 4; float: 4; double: 8
Size of expresiion 'i * f / d': 8
