### Exercise 2.4
Write a program that declares several `int` and `float` variables--without
initializing them--and then prints their values. Is there any pattern to the
values? (Usually there isn't.)

### Solution

#### 2.4.c
```c
#include <stdio.h>

int main(void)
{
     int a, b, c;
   float d, e, f;

   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);

   printf("%f\n", d);
   printf("%f\n", e);
   printf("%f\n", f);

   return 0;
}
```
Output is:
```c
0
0
0
0.000000
0.000000
0.000000
```
Will produce some warnings:
```
2.4.c:8:19: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
   printf("%d\n", a);
                  ^
2.4.c:5:11: note: initialize the variable 'a' to silence this warning
     int a, b, c;
          ^
           = 0
```
I tried on both clang and gcc; if you are bothered enough to add more uninitialized variables, program will produce random bits of data within the int/float ranges (i.e. `-32,768 to 32,767` for `int`)
