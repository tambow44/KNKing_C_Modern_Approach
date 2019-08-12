### Exercise 7.01
Give the decimal value of each of the following integer constants.
```
a) 077
b) 0x77
c) 0XABC
```
### Solution
#### 7.01.c
```c
#include <stdio.h>

int main(void)
{

   printf("Decimal values of:\n  077: %d\n 0x77: %d\n0XABC: %d\n", 077, 0x77, 0XABC);

   return 0;
}
```
#### Output
```
Decimal values of:
  077: 63
 0x77: 119
0XABC: 2748
```
