### Exercise 4.2
If `i` and `j` are positive integers, does `(-i) / j` always have the same value as `- (i / j)`? Justify your answer.
### Solution
Per the book, C89 standard states that if either operand is negative, the result of a division can be rounded either up or down. (For example, the value of `-9 / 7` could be either `-1` or `-2`).   
In C99, on the other hand, the result of a division is always truncated toward zero (so `-9 / 7` has the value of `-1`).
#### 4.2.c
```c
#include <stdio.h>

int main(void)
{
   int i, j;
   printf("Enter values for i & j: ");
    scanf("%d %d", &i, &j);

	printf("(-i)/j) = %d\n", (-i)/j);
   printf(" -(i/j) = %d\n", -(i/j));

   return 0;
}
```
