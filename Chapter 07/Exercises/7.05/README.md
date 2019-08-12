### Exercise 7.05
Which one of the following is not a legal way to write the number 65? (Assume that the character set is ASCII.)
```
a) 'A'
b) 0b1000001
c) 0101
d) 0x41
```
### Solution
Technically, all will compile and print `65`, however the compiler does warn that binary integer literals are 'illegal'.
#### 7.05.c
```c
#include <stdio.h>

int main(void)
{
   printf("%d\n%d\n%d\n%d\n", 'A', 0b1000001, 0101, 0x41);

   return 0;
}
```
#### Output
Both C89 & C99 `clang` compiler warns that 0b1000001 is binary represented. GNU is happy to.
```c
7.05.c:5:34: warning: binary integer literals are a GNU extension
      [-Wgnu-binary-literal]
        printf("%d\n%d\n%d\n%d\n", 'A', 0b1000001, 0101, 0x41);
                                        ^
1 warning generated.
```
