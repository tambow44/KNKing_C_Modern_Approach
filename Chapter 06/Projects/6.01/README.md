### Project 6.01
Write a program that finds the largest in a series of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enters `0` or a negative number, the program must display the largest non-negative number entered:
```
Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest number entered was 100.62
```
Notice the numbers aren't necessarily integers.
### Solution
#### 6.01.c
```c
#include <stdio.h>

int main(void)
{
   float n, largest;

   start:
   printf("Enter a number: ");
    scanf("%f", &n);

   while (n > 0) {
      if (n >= largest) {
         largest = n;
      }
      goto start;
   }
	printf("\nThe largest number entered was %.2f\n", largest);

   return 0;
}
```
#### Output
```
Enter a number: 60
Enter a number: 38.5
Enter a number: 2.34
Enter a number: 100.54
Enter a number: 74.5552
Enter a number: 0

The largest number entered was 100.54
```
