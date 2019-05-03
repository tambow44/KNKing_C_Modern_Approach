### Exercise 5.10
What output does the following program fragment produce? (Assume that `i` is an integer variable.)
```c
i = 1;
switch (i % 3) {
   case 0: printf("zero");
   case 1: printf("one");
   case 2: printf("two");
}
```
### Solution
Outputs `onetwo`. This is due to the missing `break` statements for each `case`. Will produce `zeroonetwo` if `i = 0`.
#### 5.10.c
```c
#include <stdio.h>

int main(void)
{
   int i = 1;
   switch (i % 3) {
      case 0: printf("zero");
      case 1: printf("one");
      case 2: printf("two");
   }

   return 0;
}
```
#### Output
```
onetwo
```
