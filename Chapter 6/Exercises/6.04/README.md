### Exercise 6.04
Which one of the following statements is not euivalent to the other two (assuming that the loop bodies are the same)?
```
a) for (i = 0; i < 10; i++) ...
b) for (i = 0; i < 10; ++i) ...
c) for (i = 0; i++ < 10; ) ...
```
### Solution
`c)` is not equivalent. `i` is incremented during the second expression (`i++ < 10`), but after the conditional expression is evaluated.
#### 6.04.c
```c
#include <stdio.h>

int main(void)
{
   int i;
   printf("a) ");
   for (i = 0; i < 10; i++) {
      printf("%d ", i);
   }
   
   printf("\nb) ");
   for (i = 0; i < 10; ++i) {
      printf("%d ", i);
   }

   printf("\nc) ");
   for (i = 0; i++ < 10; ) {
      printf("%d ", i);
   }

   return 0;
}
```
#### Output
```
a) 0 1 2 3 4 5 6 7 8 9 
b) 0 1 2 3 4 5 6 7 8 9 
c) 1 2 3 4 5 6 7 8 9 10 
```
