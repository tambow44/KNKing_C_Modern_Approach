### Project 8.16
Write a program that test whether two words are anagrams (permutations of the same letters):
```
Enter first words: smartest
Enter second words: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
```
Write a loop that reads the first word, character by character, using an array of `26` integers to keep track of how many times each letter has been seen. (For example, after the word *smartest* has been read, the array should contain the values `1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0`, reflecting the fact that *smartest* contains one *a*, one *e*, one *m*, one *r*, two *s*'s and two *t*'s.) Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. Both loops should ignore any characters that aren't letters, and bth should treat upper-case letters in the same way as lower-case letters. After the second word has been read, use a third loop to check whether all the elements in the array are zero. If so, the words are anagrams. *Hint*: You may wish to use the functions from `<ctype.h>`, such as `isalpha` and `tolower`.
### Solution
The functions `isalpha` and `tolower` require type int declared, else they will produce the following warning:
```c
8.16.c:12:11: warning: array subscript is of type 'char' [-Wchar-subscripts]
      if (isalpha(ch)) {
          ^       ~~
/usr/include/ctype.h:89:23: note: expanded from macro 'isalpha'
#define isalpha(__c)    (__ctype_lookup(__c)&(_U|_L))
                         ^              ~~~
```
The program works fine without declaring int, however for the sake of conformity I have specified i.e. `isalpha((int)ch)` versus `isalpha(ch)`.
#### 8.16.c
```c
#include <stdio.h>
#include <ctype.h>

#define N 26
int main(void)
{
   int i, count = 0;
   char ch, alphabet[N] = {0};

   printf("Enter first word: ");
   while ((ch = getchar()) != '\n') {
      if (isalpha((int)ch)) {
            alphabet[tolower((int)ch) - 'a']++;
      }
   }

   printf("Enter second word: ");
   while ((ch = getchar()) != '\n') {
      if (isalpha((int)ch)) {
         alphabet[tolower((int)ch) - 'a']--;
      }
   }

   for (i = 0; i < N; i++) {
      count += (alphabet[i] != 0) ? 1 : 0;
   }

   printf("The words are ");
   count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

   return 0;
}
```
#### Output
```
Enter first word: Mattress
Enter second word: Smartest
The words are anagrams.
---
Enter first word: Bottle
Enter second word: Motels
The words are not anagrams.
```
