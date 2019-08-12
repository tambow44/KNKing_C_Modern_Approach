### Project 6.05
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit numberwith its digits reversed. Generalize the program so that the number can have one, two, three, or more digits. *Hint:* Use a `do` loop that repeatedly divides the number by `10`, stopping when it reaches `0`.
### Solution
#### 6.05.c
```c
#include <stdio.h>

int main(void)
{
   int num;

   printf("Enter number: ");
   scanf("%d", &num);

   printf("The reversal: ");

   do {
      printf("%d", num % 10);
      num /= 10;   
   } while (num != 0);

   return 0;
}
```
#### Output
```
Enter number: 1945
The reversal: 5491
```
