### Project 8.13
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
```
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
```
The program will need to store the last name (but not hte first name) in an array of characters until it can be printed. You may assume that the last name is no more than `20` characters long.
### Solution
#### 8.13.c
```c
#include <stdio.h>

#define N 20
int main(void)
{
   int i = 0;
   char ch, initial, surname[N] = {0};

   printf("Enter a first and last name: ");

   while ((ch = getchar()) == ' ') {
      ;
   }

   initial = ch;

   while ((ch = getchar()) != ' ') {
      ;
   }

   while ((ch = getchar()) != '\n') {
      surname[i++] = ch;
   }

   printf("You entered the name: ");
      for (i = 0; i < N; i++) {
         printf("%c", surname[i]);
      }
   printf(", %c.\n", initial);

   return 0;
}
```
#### Output
```
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
---
Enter a first and last name: Timothy Wells-Burger
You entered the name: Wells-Burger, T.
```
