### Exercise 5.2
The following program fragments illustrate the logical operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

```
a) i = 10; j = 5;
   printf("%d", !i < j);
b) i = 2; j = 1;
   printf("%d", !!i + !j); 
c) i = 5; j = 0; k = -5;
   printf("%d", i && j || k); 
d) i = 1; j = 2; k = 3;
   printf("%d", i < j || k); 
```
### Solution
#### 5.2.c
```c
#include <stdio.h>

int main(void)
{
   int i, j, k;

   i = 10; j = 5;
   printf("%d\n", !i < j);

   i = 2; j = 1;
   printf("%d\n", !!i + !j); 

   i = 5; j = 0; k = -5;
   printf("%d\n", i && j || k); 

   i = 1; j = 2; k = 3;
   printf("%d\n", i < j || k); 

   return 0;
}
```
Produces the following warnings (C89/99):
```
5.2.c:8:19: warning: logical not is only applied to the left hand side of
      this comparison [-Wlogical-not-parentheses]
   printf("%d\n", !i < j);
                  ^  ~
5.2.c:8:19: note: add parentheses after the '!' to evaluate the comparison
      first
   printf("%d\n", !i < j);
                  ^
                   (    )
5.2.c:8:19: note: add parentheses around left hand side expression to
      silence this warning
   printf("%d\n", !i < j);
                  ^
                  ( )
5.2.c:14:21: warning: '&&' within '||' [-Wlogical-op-parentheses]
   printf("%d\n", i && j || k);
                  ~~^~~~ ~~
5.2.c:14:21: note: place parentheses around the '&&' expression to silence
      this warning
   printf("%d\n", i && j || k);
                    ^
                  (     )
2 warnings generated.
```
#### Output
```
a) 1
b) 1
c) 1
d) 1
```
