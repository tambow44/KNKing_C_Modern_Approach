### Exercise 9.03
Write a function `gcd(m, n)` that calculates the greatest common divisor of the integers `m` and `n`. (Programming Project 2 in CHapter 6 describes Euclid's algorithm for computing the GCD.)
### Solution
Function itself:
```c
int gcd(int m, int n)
{
   int r;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   return m;
}
```
#### 9.03.c
```c
#include <stdio.h>

int gcd(int m, int n)
{
   int r;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   return m;
}

int main(void)
{
   int m, n, r;

   printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

   printf("Greatest common divisor: %d\n", gcd (m, n));

   return 0;
}
```
#### Output
```
Enter two integers: 141 6
Greatest common divisor: 3
---
Enter two integers: 10 14
Greatest common divisor: 2
```
