### Exercise 4.13
Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it?   
Justify your answer.

### Solution
`++i` is exactly the same as `(i += 1)`

#### 4.13.c
```c
#include <stdio.h>

int main(void)
{
   int i;

   i = 1;
   printf("%d\n", (i += 1));

   i = 1;
   printf("%d\n", ++i);

   i = 1;
   printf("%d\n", i++);
   
   return 0;
}
```
#### Output
```
2
2
1
```
