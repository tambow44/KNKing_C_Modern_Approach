### Exercise 8.04
(C99) Reoeat Exercise `8.03`, but this time use a designated initalizer. Make the initializer as short as possible.
### Solution
#### 8.04.c
```c
#include <stdbool.h>
#include <stdio.h>

#define SIZE_WEEKEND ((int) (sizeof(weekend) / sizeof(weekend[0])))

int main(void)
{
   int i;
   bool weekend[7] = { [0] = true, [6] = true };
/* bool weekend[7] = { true, [6] = true }; */
   
   printf("Weekend is:");
   for (i = 0; i < SIZE_WEEKEND; i++) {
      printf(" %d", weekend[i]);
   }
   printf("\n");

   return 0;
}
```
#### Output
```
Weekend is: 1 0 0 0 0 0 1
```
