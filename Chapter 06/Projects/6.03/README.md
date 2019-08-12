### Project 6.03
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
```
Enter a fraction: 6/12
In lowest terms: 1/2
```
*Hint:* To reduce a fraction to lowest terms, first computer the GCD of the numerator and denominator. Then divide both the numberator and denominator by the GCD.
### Solution
#### 6.03.c
```c
#include <stdio.h>

int main(void)
{

   int m, n, r, x, y;

   printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

   x = m, y = n;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   printf("In lowest terms: %d/%d", x / m, y / m);

   return 0;
}
```
#### Output
```
Enter a fraction: 3/9
In lowest terms: 1/3
```
