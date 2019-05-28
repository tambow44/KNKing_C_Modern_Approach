### Exercise 7.04
If `c` is a variable of type `char`, which one of the following statements is illegal?
```
a) i += c; /* i has type int */
b) c = 2 * c - 1;
c) putchar(c);
d) printf(c);
```
### Solution
`d)` is illegal; printf requires types to be passed through as arguments:
`c printf("%s", c);` would be legal.
#### 7.04.c
```c
#include <stdio.h>

int main(void)
{
   char c = 'c';
   int i = 1;

   i += c;
   c = 2 * c - 1;
   putchar(c);
   printf(c);

   return 0;
}
```
#### Output
Compile errors:
```c
7.04.c:11:9: warning: incompatible integer to pointer conversion passing 'char' to
      parameter of type 'const char *'; take the address with & [-Wint-conversion]
        printf(c);
               ^
               &
/usr/include/stdio.h:200:35: note: passing argument to parameter here
int     printf (const char *__restrict, ...)
                                      ^
7.04.c:11:9: warning: format string is not a string literal (potentially insecure)
      [-Wformat-security]
        printf(c);
               ^
7.04.c:11:9: note: treat the string as an argument to avoid this
        printf(c);
               ^
               "%s",
2 warnings generated.
```
