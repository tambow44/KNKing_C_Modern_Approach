### Exercise 2.1
Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it
go away?

### Solution
Compiling using clang produces no warnings.
Compiling using gcc with c89 standard produces the following warning:
```c
2.1.1.c: In function ‘main’:
2.1.1.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
```
Compiling with either clang or gcc and with either standard (89/99) runs successfully. The importance here is the warning/s produced.

Warning is amended by adding `return 0;` (see 2.1.1b.c)
