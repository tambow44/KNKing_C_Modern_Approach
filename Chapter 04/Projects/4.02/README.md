### Project 4.02
Extend the program in 4.01 to handle *three*-digit numbers.

### Solution
#### 4.02.c
```c
#include <stdio.h>

int main(void)
{
   int num;

   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   printf("The reversal is: %d%d%d\n", num % 10, (num / 10) % 10, num / 100);

   return 0;
}
```
#### Output
```
Enter a three-digit number: 431
The reversal is: 134
```
