### Project 6.07
Rearrange the [square3.c](../../Tutorials/6.5square3.c) program so that the `for` loop initialised `i`, tests `i`, and increments `i`. Don't rewrite the program; in particular, don't use any multiplications.
### Solution
#### 6.07.c
```c
#include <stdio.h>

int main(void)
{
   int i, n, odd, square;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
    scanf("%d", &n);

   odd = 3;

   for (square = 1, i = 1; i <= n; odd += 2, ++i) {
      printf("%10d%10d\n", i, square);
      square += odd;
   }

   return 0;
}
```
#### Output
```
This program prints a table of squares.
Enter number of entries in table: 10
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
```
