### Exercise 7.13
Assume that a program contains the following declarations:
```
char c = '\1';
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;
```
Give the value and the type of each expression listed below.
```
a) c * i
b) s + m
c) f / c
d) d / s
e) f - d
f) (int) f
```
### Solution
See Output for results.
types are as follows:
```
a) int
b) long
c) float
d) double
e) double
f) int
```
#### 7.13.c
```c
#include <stdio.h>

int main(void)
{
   char c = '\1';
   short s = 2;
   int i = -3;
   long m = 5;
   float f = 6.5f;
   double d = 7.5;

   printf("  c * i: %d\n", c * i);
   printf("  s + m: %ld\n", s + m);
   printf("  f / c: %f\n", f / c);
   printf("  d / s: %f\n", d / s);
   printf("  f - d: %f\n", f - d);
   printf("(int) f: %d\n", (int) f);

   return 0;
}
```
#### Output
```c
  c * i: -3
  s + m: 7
  f / c: 6.500000
  d / s: 3.750000
  f - d: -1.000000
(int) f: 6
```
