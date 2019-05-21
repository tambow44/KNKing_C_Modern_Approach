### Project 6.11
The value of the mathematical constant `e` can be expressed as an infinite series:
```
e = 1 + 1/1! + 1/2! + 1/3! + ...
```
Write a program that approximates `e` by computing the value of:
```
1 + 1/1! + 1/2! + 1/3! ... + 1/n!
```
Where `n` is an integer entered by the user.
### Solution
#### 6.11.c
```c
#include <stdio.h>

int main(void)
{
   int i, j, n;
   float e;

   printf("Enter digit for n: ");
    scanf("%d", &n);

   for (i = 1, j = 1, e = 1.0f; i <= n; i++) {
      e += 1.0f / (j *= i);
   }

   printf("Approximation of e: %f\n", e);

   return 0;
}
```
#### Output
```
Enter digit for n: 6
e is: 2.718056
```
