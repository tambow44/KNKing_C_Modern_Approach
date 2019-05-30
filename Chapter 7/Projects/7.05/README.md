### Project 7.05
In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another, based on the letter's rarity.
Here are the face values:
```
1: AEILNORSTU
2: DG
3: BCMP
4: FHVWY
5: K
8: JX
10: QZ
```
Write a program that computes the value of a word by summing the values of its letters:
```
Enter a word: pitfall
Scrabble value: 12
```
Your program should allow any mixture of lower-case and upper-case ltters in a word.
*Hint*: Use the `toupper` library function.
### Solution
n.b. `ch = (char)toupper((unsigned char)ch);` requires the implicit declaration of char type, else the following warnings populate at compilation:
```c
2.c:12:12: warning: array subscript is of type 'char' [-Wchar-subscripts]
      ch = toupper(ch);
           ^~~~~~~~~~~
/usr/include/ctype.h:161:25: note: expanded from macro 'toupper'
      (void) __CTYPE_PTR[__x]; (toupper) (__x);})
                        ^~~~
1 warning generated.
```
#### 7.05.c
```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char ch;
   int sum = 0;

   printf("Enter a word: ");
   
   while ((ch = getchar()) != '\n') {
      ch = (char)toupper((unsigned char)ch);

      switch(ch) {
         case 'A': case 'E': case 'I': case 'L': case 'N':
         case 'O': case 'R': case 'S': case 'T': case 'U':
            sum += 1;
            break;
         case 'D': case 'G':
            sum += 2;
            break;
         case 'B': case 'C': case 'M': case 'P':
            sum += 3;
            break;
         case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4;
            break;
         case 'K':
            sum += 5;
            break;
         case 'J': case 'X':
            sum += 8;
            break;
         case 'Q': case 'Z':
            sum += 10;
            break;
      }
   }

   printf("Scrabble value: %d\n", sum);

   return 0;
}
```
#### Output
```
Enter a word: hello
Scrabble value: 8
---
Enter a word: pitfall
Scrabble value: 12
```
