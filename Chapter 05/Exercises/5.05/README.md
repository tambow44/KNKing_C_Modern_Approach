### Exercise 5.5
Is the following `if` statement legal?
```
if (n >= 1 <= 10)
   printf("n is between 1 and 10\n");
```
If so, what does it do when `n` is equal to `0`?
### Solution
While this `if` statement is legal; it will always return true, regardless of what `n` is. 

The compiler will tell you as such:
```c
5.5.c:7:15: warning: comparison of constant 10 with boolean expression is
      always true [-Wtautological-constant-out-of-range-compare]
   if (n >= 1 <= 10)
       ~~~~~~ ^  ~~
1 warning generated.
```

#### 5.5.c
```c
#include <stdio.h>

int main(void)
{
   int n = 0;

   if (n >= 1 <= 10)
      printf("n is between 1 and 10\n");

   return 0;
}
```
#### Output
```
n is between 1 and 10
```
