### Project 8.15
One of the oldest known encryption techniqiues is the Caeser cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go past the letter `Z`, the cipher "wraps around" to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then `Y` would be replaced by `A`, and `Z` would be replaced by `B`.) Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):
```
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.
```
Notice that the program can decrypt a message if the user enters 26 minus the original key:
```
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.
```
### Solution
#### 8.15.c
```c
#include <stdio.h>

#define N 80
#define SHIFT(a, b) ((a - b) + n) % 26 + b
int main(void)
{
   int i = 0, n;
   char ch, message[N] = {0};

   printf("Enter message to be encrypted: ");
   while ((ch = getchar()) != '\n') {
      message[i++] = ch;
   }

   printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

   printf("Encrypted message: ");
   for (i = 0; i < N; i++) {
      ch = message[i];
      if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ) {
         ch = (ch >= 'A' && ch <= 'Z') ? SHIFT(ch, 'A') : SHIFT(ch, 'a');
      }
      printf("%c", ch);
   }
   printf("\n");

   return 0;
}
```
#### Output
```
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb ddb.
---
Enter message to be encrypted: Jr dkhdg, pdnh pb ddb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.
```
