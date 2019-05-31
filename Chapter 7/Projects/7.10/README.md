### Project 7.10
Write a program that counts the number of vowels (*a, e, i, o,* and *u*) in a sentance:
```
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels
```
### Solution
#### 7.10.c
```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int count = 0;
   char ch;

   printf("Enter a sentence: ");
   
   while ((ch = getchar()) != '\n') {
/*      switch(toupper(ch)) { // produces warnings unless explicitly declared */
      switch((char)toupper((unsigned char)ch)) {
         case 'A': case 'E': case 'I': case 'O': case 'U':
            ++count;
            break;
         default:
            break;
      }
   }
  
   printf("Your sentence contains %d vowels.\n", count);

   return 0;
}
```
#### Output
```
Enter a sentence: That's just the way it is
Your sentence contains 6 vowels.
---
Enter a sentence: I am a sentence of vowels.
Your sentence contains 9 vowels.
```
