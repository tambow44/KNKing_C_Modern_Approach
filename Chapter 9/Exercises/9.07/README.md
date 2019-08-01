### Exercise 9.07
Suppose that the function `f` has the following definition:
```
int f(int a, int b) { ... }
```
Which of the following statements are legal? (Assume that `i` has type `int` and `x` has type `double`.)
```
a) i = f(83, 12);
b) x = f(82, 12);
c) i = f(3.15, 9.28);
d) x = f(3.15, 9.28);
e) f(83, 12);
```
### Solution
All statements are legal, however the function will naturally read and return all inputs as type `int`, despite the assignment of `x` being of type `double`.
#### 9.07.c
```c
#include <stdio.h>

/* No time to be clever */
int f(int a, int b)
{
   return (a + b); 

}

int main(void)
{
   int i;
   double x;

   i = f(83, 12);
   printf("82 + 12: %d\n", i);

   x = f(82, 12);
   printf("82 + 12: %.2f\n", x);

   i = f(3.15, 9.28);
   printf("3.15 + 9.28: %d\n", i);

   x = f(3.15, 9.28);
   printf("3.15 + 9.28: %.2f\n", x);

   printf("83 + 12: %d\n", f(83, 12));

   return 0;
}
```
#### Output
```
82 + 12: 95
82 + 12: 94.00
3.15 + 9.28: 12
3.15 + 9.28: 12.00
83 + 12: 95
```
