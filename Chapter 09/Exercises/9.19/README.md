### Exercise 9.19
Consider the following "mystery" function:
```c
void pb(int n)
{
   if (n != 0) {
      pb(n / 2);
      putchar('0' + n % 2);
   }
}
```
Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?
### Solution
The `pb` function will return the binary value of a given integer.
#### 9.19.c
```c
#include <stdio.h>

void pb(int n)
{
   if (n != 0) {
      pb(n / 2);
      putchar('0' + n % 2);
   }
}

int main(void)
{
   int i, n;
   printf("Enter number for n: ");
    scanf("%d", &n);

   pb(n);
   printf("\n");

   return 0;
}
```
#### Output
```
Enter number for n: 87
1010111
---
Enter number for n: 16
10000
```
