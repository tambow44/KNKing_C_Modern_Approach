### Project 8.14
Write a program that reverses the words in a sentence:
```
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
```
*Hint:* Use a loop to read the characters one by one and store them in a one-dimensional `char` array. have the loop stop at a period, question mark, or exclamation point (the "terminating character"), which is saved in a separate `char` variable. Then use a second loop to search backward through the array for the behinning of the last word. Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached. Finally, print the terminating character.
### Solution
#### 8.14.c
```c
#include <stdio.h>

#define N 50
int main(void)
{
    int i = 0, j, space_start, space_end = N-1;
   char ch, sentence[N] = {0}, terminating_character;
   
   sentence[i++] = ' ';

   printf("Enter a sentence: ");
   while ((ch = getchar())) {
      if (ch == '.' || ch == '?' || ch == '!') {
         terminating_character = ch;
         break;
      }
      sentence[i++] = ch;
   }

   printf("Reversal of sentence:");
   for (i = N; i >= 0; i--) {
      if (sentence[i] == ' ') {
         space_start = i;
         for (j = space_start; j < space_end; j++) {
            printf("%c", sentence[j]);
         }
         space_end = space_start;
      }
   }

   printf("%c\n", terminating_character);

   return 0;
}
```
#### Output
```
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
---
Enter a sentence: here we go!
Reversal of sentence: go we here!
```
