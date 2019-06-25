### Project 7.15
Write a program that computes the factorial of a positive integer:
```
Enter a positive integer: 6
Factorial of 6: 720
```
```
a) Use a `short` variable to store the value of the factorial. What is the largest value of `n` for which the program correctly prints teh factorial of `n`?
b) Repeat part `a)`, using an `int` variable instead.
c) Repeat part `a)`, using an `long` variable instead.
d) Repeat part `a)`, using an `long long` variable instead (if your compiler supports `long long` type).
e) Repeat part `a)`, using a `float` variable instead.
f) Repeat part `a)`, using a `double` variable instead.
g) Repeat part `a)`, using a `long double` variable instead.
```
In cases `e) - g)`, the program will display a close approximation of the factorial, not necessarily the exact value.
### Solution
#### 7.14.c
```c
#include <stdio.h>

int main(void)
{
   int intNum, count;
   long double factorial = 1.0;

   printf("Enter a positive integer: ");
    scanf("%d", &intNum);

   short shortNum = (short) intNum;
   long longNum = (long) intNum;
   long long longLongNum = (long long) intNum;
   float floatNum = (float) intNum;
   double doubleNum = (double) intNum;
   long double longDoubleNum = (long double) intNum;

   for (count = 1; count <= shortNum; count++) {
      factorial *= count;
   }
      printf("a) Factorial of %d: %.0Lf\n", shortNum, factorial);

   for (count = 1; count <= intNum; count++) {
      factorial *= count;
   }
      printf("b) Factorial of %d: %.0Lf\n", intNum, factorial);

   for (count = 1; count <= longNum; count++) {
      factorial *= count;
   }
      printf("c) Factorial of %ld: %.0Lf\n", longNum, factorial);

   for (count = 1; count <= longLongNum; count++) {
      factorial *= count;
   }
      printf("d) Factorial of %lld: %.0Lf\n", longLongNum, factorial);

   for (count = 1; count <= floatNum; count++) {
      factorial *= count;
   }
      printf("e) Factorial of %f: %.0Lf\n", floatNum, factorial);

   for (count = 1; count <= doubleNum; count++) {
      factorial *= count;
   }
      printf("f) Factorial of %f: %.0Lf\n", doubleNum, factorial);

   for (count = 1; count <= longDoubleNum; count++) {
      factorial *= count;
   }
      printf("g) Factorial of %Lf: %.0Lf\n", longDoubleNum, factorial);

   return 0;
}
```
#### Output
```
Enter a positive integer: 6
a) Factorial of 6: 720
b) Factorial of 6: 518400
c) Factorial of 6: 373248000
d) Factorial of 6: 268738560000
e) Factorial of 6.000000: 193491763200000
f) Factorial of 6.000000: 139314069504000000
g) Factorial of 6.000000: 100306130042880000000
```
