### Project 7.11
Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:
```
Enter a first and last name: Lloyed Fosdick
Fosdick, L.
```
The user's input may contain extra spaces before the first name, between the first and last names, and after the last name.
### Solution
#### 7.11.c
```c
#include <stdio.h>

int main(void)
{
   char ch, initial;

   printf("Enter a first and last name: ");

   while ((ch = getchar()) == ' ') {
      ;
   }

   initial = ch;

   while ((ch = getchar()) != ' ') {
      ;
   }

   while ((ch = getchar()) != '\n') {
        putchar(ch);
   }

    printf(", %c.\n", initial);

   return 0;
}
```
#### Output
```
Enter a first and last name: Robert Jones
Jones, R.
---
Enter a first and last name: Peter Stephens
Stephens, P.
```
