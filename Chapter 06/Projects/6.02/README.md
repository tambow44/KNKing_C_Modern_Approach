### Project 6.02
Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor (GCD):
```
Enter two integers: 12 28
Greatest common divisor: 4
```
*Hint:* The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as follows: Let `m` and `n` be variables containing the two numbers. If `n` is `0`, then stop: `m` contains the GCD. Otherwise, computer the remainder when `m` is divided by `n`. Copy `n` into `m` and copy the remainder into `n`. Then repeat the process, starting with testing whether `n` is `0`.
### Solution
#### 6.02.d
```c
#include <stdio.h>

int main(void)
{
   int m, n, r;

   printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   printf("Greatest common divisor: %d\n", m);

   return 0;
}
```
#### Output
```
Enter two integers: 12 48
Greatest common divisor: 12
```
