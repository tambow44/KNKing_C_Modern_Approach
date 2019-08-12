### Project 7.06
Write a program that prints the values of `sizeof(int)`, `sizeof(short)`, `sizeof(long)`, `sizeof(float)`, `sizeof(double)`, `sizeof(long double)`.
### Solution
#### 7.06.c
```c
#include <stdio.h>

int main(void)
{
   printf("This program prints the values of the following types:\n");
   printf("        int = %lu\n", sizeof(int));
   printf("      short = %lu\n", sizeof(short));
   printf("       long = %lu\n", sizeof(long));
   printf("      float = %lu\n", sizeof(float));
   printf("     double = %lu\n", sizeof(double));
   printf("long double = %lu\n", sizeof(long double));

   return 0;
}
```
### Output
```
This program prints the values of the following types:
        int = 4
      short = 2
       long = 8
      float = 4
     double = 8
long double = 16
```
