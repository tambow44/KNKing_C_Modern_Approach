### Exercise 9.02
Write a function `check(x, y, n)` that returns `1` if both `x` and `y` fall between `0` ans `n - 1`, inclusive. The function should return `0` otherwise. Assume that `x`, `y`, and `n` are all of type `int`.
### Solution
Function itself:
```c
int check(int x, int y, int n)
{
   if ((x >= 0 && x <= (n - 1)) && (y >= 0 && y <= (n - 1))) {
      return 1;
   }
   return 0;
}
```
#### 9.02.c
```c
#include <stdio.h> 

int check(int x, int y, int n)
{
   if ((x >= 0 && x <= (n - 1)) && (y >= 0 && y <= (n - 1))) {
      return 1;
   }
   return 0;
}


int main(void)
{
   int x, y, n;

   printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
   printf("Enter n: ");
    scanf("%d", &n);

   printf("Check result: %d\n", check(x, y, n));

   return 0;
}
```
#### Output
```
Enter x and y: 5 6
Enter n: 10
Check result: 1
---
Enter x and y: 12 9
Enter n: 12
Check result: 0
```
