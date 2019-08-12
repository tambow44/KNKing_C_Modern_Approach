### Exercise 5.7
What does the following statement print if `i` has the value of `17`? What does it print if `i` has the value of `-17`?
```
printf("%d\n", i >= 0 / i : -i);
```
### Solution
Will print 17 in both cases.
#### 5.7.c
```c
#include <stdio.h>

int main(void)
{
   int i = 17;
   printf("%d\n", i >= 0 ? i : -i);

   i = -17;
   printf("%d\n", i >= 0 ? i : -i);

   return 0;
}
```
#### Output
```
17
17
```
