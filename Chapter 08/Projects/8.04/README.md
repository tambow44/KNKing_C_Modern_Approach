### Project 8.04
Modify the `reverse.c` program in Section 8.1 to use the expression `(int) (sizeof(a) / sizeof(a[0]))` (or a macro with this value) for the array length.
### Solution
#### 8.04.c
```c
#include <stdio.h>

#define N 10
#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
   int a[N], i;

   printf("Enter %d numbers: ", N);

   for (i = 0; i < SIZE; i++) {
      scanf("%d", &a[i]);
   }

   printf("In reverse order:");

   for (i = SIZE - 1; i >= 0; i--) {
      printf(" %d", a[i]);
   }

   printf("\n");

   return 0;
}
```

