### Project 7.12
Write a program that calculates the average word length for a sentence:
```
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
```
For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. Display the average length to one decimal place.
### Solution
#### 7.12.c
```c
#include <stdio.h>

int main(void)
{
   int length = 0, words = 1;
   char ch;

   printf("Enter a sentence: ");

   while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
         length++;
      } else {
         words++;
      }
   }

   printf("Average word length: %.1f\n", (float) length / words);

   return 0;
}
```
#### Output
```
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
---
Enter a sentence: This is my sentence, tada.
Average word length: 4.4
```
