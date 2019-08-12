### Exercise 8.03
Write a declaration of an array named `weekend` containing seven `bool` values. include an initializer that makes the first and last values `true`; all other values should be `false`.
### Solution
The answer is:
```c
bool weekend[7] = { true, false, false, false, false, false, true };
```
`8.03.c` demonstrates how this may be used.
#### 8.03.c
```c
#include <stdbool.h>
#include <stdio.h>

#define SIZE_WEEKEND ((int) (sizeof(weekend) / sizeof(weekend[0])))

int main(void)
{
   int i;
   bool weekend[7] = { true, false, false, false, false, false, true };
   
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
