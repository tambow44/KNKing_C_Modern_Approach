### Project 4.4
Write a program that prompts the user to enter a telephone number in the form *(xxx) xxx-xxxx* and then displays the number in the form *xxx.xxx.xxxx*:
```
Enter phone number [(xxx) xxx-xxxx]: (404 817-6900
You entered 404.817.69000
```
### Solution
#### 4.4.c
```c
#include <stdio.h>

int main(void)
{
   int num1, num2, num3;

   printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);

   printf("You entered %d.%d.%d\n", num1, num2, num3);

   return 0;
}
```
