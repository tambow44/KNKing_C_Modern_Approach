### Exercise 9.05
Write a function `num_digits(n)` that returns the number of digits in `n` (a positive integer). *Hint:* To determine the number of digits in a number `n`, divide it by `10` repeatedly. When `n` reaches `0`, the number of divisions indicates how many digits `n` originally had.
### Solution
Function itself is:
```c
int num_digits(int n)
{
   int i = 0;

   while (n > 0) {
      n /= 10;
      i++; 
   }

   return i;
}
```
#### 9.05.c
```c
#include <stdio.h>

int num_digits(int n)
{
   int i = 0;

   while (n > 0) {
      n /= 10;
      i++; 
   }

   return i;
}

int main(void)
{
   int n, a;

   printf("Enter number: ");
    scanf("%d", &n);

   a = num_digits(n);
   printf("Number of digits in %d: %d\n", n, a);

   return 0;
}
```
#### Output
```
Enter number: 355
Number of digits in 355: 3
-- 
Enter number: 9563
Number of digits in 9563: 4
```
