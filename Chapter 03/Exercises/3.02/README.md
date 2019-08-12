### Exercise 3.2
Write calls of `printf` that display a `float` variable `x` in the following formats:
```
a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
```
### Solution
#### 3.2.c
```c
#include <stdio.h>

int main(void)
{
   float x = 3.14f;

   printf("a) %8.1e\n", x);
   printf("b) %-10.6e\n", x);
   printf("c) %8.3f\n", x);
   printf("d) %-6.0f\n", x);

   return 0;
}
```
#### output:
```
a)  3.1e+00
b) 3.140000e+00
c)    3.140
d) 3
```
