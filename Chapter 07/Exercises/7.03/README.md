### Exercise 7.03
Which of the following are not legal types in C?
```
a) short unsigned int
b) short float
c) long double
d) unsigned long
```
### Solution
`short float` is not legal.

#### 7.03.c
```c
#include <stdio.h>

int main(void)
{

   short unsigned int sui;
   short float sf;
   long double ld;
   unsigned long ul;

   printf("I wonder.\n");

   return 0;
}
```
#### Output
Compiling error:
```c
7.03.c:7:4: error: 'short float' is invalid
   short float sf;
   ^
1 error generated.
```
