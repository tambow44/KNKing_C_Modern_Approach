### Project 6.06
Write a program that prompts the user to enter a number `n`, then prints all even squares between `1` and `n`. For example, if the user enters `100`, the program should print the following:
```
4
16
36
64
100
```
### Solution
#### 6.06.c
```c
#include <stdio.h>

int main(void)
{
   int m, n;

   printf("Enter a number: ");
    scanf("%d", &n);

   for (m = 2; (m * m) <= n; m += 2) {
      if ((m * m) % 2 == 0) {
         printf("%d\n", m * m);
      }
   }

   return 0;
}
```
#### Output
```
Enter a number: 150
4
16
36
64
100
144
```
