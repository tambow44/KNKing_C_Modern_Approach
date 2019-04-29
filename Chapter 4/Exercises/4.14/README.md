### Exercise 4.13
Supply parentheses to show how a C compiler would interpret each of the following expressions.
```
a) a * b - c * d + e
b) a / b % c / d
c) - a - b + c - + d
d) a * - b / c - d
```
### Solution
```
a) (((a * b) - (c * d)) + e)
b) (((a / b) % c) / d)
c) ((((- a) - b) + c) - (+ d))
d) (((a * (- b)) / c) - d)
```
#### 4.13.c
```c
#include <stdio.h>

int main(void)
{
   int a, b, c, d, e;
   a = b = c = d = e = 5;

   printf("%2d\n", a * b - c * d + e);
   printf("%2d\n", a / b % c / d);
   printf("%2d\n", - a - b + c - + d);
   printf("%2d\n", a * - b / c - d);
	printf("---\n");
   printf("%2d\n", (((a * b) - (c * d)) + e));
   printf("%2d\n", (((a / b) % c) / d));
   printf("%2d\n", ((((- a) - b) + c) - (+ d)));
   printf("%2d\n", (((a * (- b)) / c) - d));

   return 0;
}
```
#### Output
```
 5
 0
-10
-10
---
 5
 0
-10
-10
```
