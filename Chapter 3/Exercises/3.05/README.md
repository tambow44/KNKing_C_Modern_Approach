### Exercise 3.5
Suppose that we call `scanf` as follows:
```
scanf("%f%d%g", &x, &i, &y);
```
If the user enters
```
12.3 45.6 789
```
what will be the values of `x`, `i`, and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)

### Solution
#### 3.5.c
```c
#include <stdio.h>

int main(void)
{
   int i;
   float x, y;

   printf("Enter '12.3 45.6 789': ");
   scanf("%f%d%f", &x, &i, &y);

   printf("i = %d\nx = %f\ny = %f\n", i, x, y);
   return 0;
}
```
#### Output
```c
i = 45
x = 12.300000
y = 0.600000
```
