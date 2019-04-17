### Exercise 3.4
Suppose that we call `scanf` as follows:
```c
scanf("%d%f%d", &i, &x, &j);
```
If the user enters
```c
10.3 5 6
```
What will be the values of `i`, `x`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)

### Solution
#### 3.4.c
```c
#include <stdio.h>

int main(void)
{
   int i, j;
   float x;
   printf("Enter '10.3 5 6': ");
   scanf("%d%f%d", &i, &x, &j);

   printf("i = %d\nj = %d\nx = %f\n", i, j, x);
   return 0;
}
```

Output will be:
```c
i = 10
j = 5
x = 0.300000
```
