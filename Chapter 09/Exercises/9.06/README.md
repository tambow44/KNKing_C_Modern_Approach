### Exercise 9.06
Write a function `digit(n, k)` that returns the `k`<sup>th</sup> digit (from the right0 in `n` (a positive integer). For example, `digit(829, 1)` returns `9`, `digit(829, 2)` returns `2`, and `digit(829, 3)` returns `8`. If `k` is greater than the number of digits in `n`, have the function return `0`.
### Solution
Function is as follows:
```c
int digit(int n, int k)
{
   int i;
   
   for (i = 1; i < k; i++) {
      n /= 10;
   }

   return n % 10;
}
```
#### 9.06.c
```c
#include <stdio.h>

int digit(int n, int k)
{
   int i;
   
   for (i = 1; i < k; i++) {
      n /= 10;
   }

   return n % 10;
}

int main(void)
{
   int n, k;

   printf("Enter number and position: ");
    scanf("%d %d", &n, &k);

   printf("Digit at position %d of number %d is: %d\n", k, n, digit(n, k));

   return 0;
}
```
#### Output
```
Enter number and position: 876 2
Digit at position 2 of number 876 is: 7
---
Enter number and position: 876 1
Digit at position 2 of number 876 is: 6
```
