### Exercise 5.3

```
a) i = 3; j = 4; k = 5; 
   printf("%d", i < j || ++j < k);
b) i = 7; j = 8; k = 9;
   printf("%d",i - 7 && j++ < k); 
c) i = 7; j = 8; k = 9;
   printf("%d", (i = j) || (j == k)); 
   printf("%d %d %d", i, j, k);
d) i = j = k = 1;
   printf("%d", ++i || ++j && ++k); 
   printf("%d %d %d", i, j, k);
```
### Solution
#### 5.3.c
```c
#include <stdio.h>

int main(void)
{

   int i, j, k;

   i = 3; j = 4; k = 5;
   printf("%d\n", i < j || ++j < k);

   i = 7; j = 8; k = 9;
   printf("%d\n",i - 7 && j++ < k);

   i = 7; j = 8; k = 9;
   printf("%d\n", (i = j) || (j == k));
   printf("%d %d %d\n", i, j, k);
 
  i = j = k = 1;
   printf("%d\n", ++i || (++j && ++k));
   printf("%d %d %d\n", i, j, k);

   return 0;
}
```
#### Output
```
a) 1
b) 0
c) 1
   8 8 9
d) 1
   2 1 1
```
