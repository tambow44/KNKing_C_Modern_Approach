### Project 8.11
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
```
Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
```
The program will need to store the phone number (either in its original form or in its numeric form) in an array of characters until it can be printed. You may assume that the phone number is no more than `15` characters long.
### Solution
#### 8.11.c
```c
#include <stdio.h>
#include <ctype.h>

#define N 15
int main(void)
{
   char number[N] = {0};
   int i = 0;

   printf("Enter phone number: ");

   while ((number[i++] = toupper(getchar())) != '\n') {
      ;
   }

   printf("In numeric form: ");

   for (i = 0; i < N; i++) {
      switch (number[i]) {
         case 'A': case 'B': case 'C':
            putchar('2');
            break;
         case 'D': case 'E': case 'F':
            putchar('3');
            break;
         case 'G': case 'H': case 'I':
            putchar('4');
            break;
         case 'J': case 'K': case 'L':
            putchar('5');
            break;
         case 'M': case 'N': case 'O':
            putchar('6');
            break;
         case 'P': case 'Q': case 'R': case 'S':
            putchar('7');
            break;
         case 'T': case 'U': case 'V':
            putchar('8');
            break;
         case 'W': case 'X': case 'Y': case 'Z':
            putchar('9');
            break;
         default:
            putchar(number[i]);
            break;
      }
   }

   return 0;
}
```
#### Output
```
Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
---
Enter phone number: PHONE-NUMBER
In numeric form: 74663-686237
---
Enter phone number: Lower-Case
In numeric form: 56937-2273
```
