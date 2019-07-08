### Project 8.06
The prototypical Internet newbie is a fellow named `B1FF`, who has a unique way of writing messages. here's a typical `B1FF` communiqué:
```
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```
Write a "`B1FF` filter" that reads a message entered by the user and translates it into `B1FF`-speak:
```
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```
Your program should convert the message to upper-case letters, substitute digits for certain letters (a→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks (`!`).   
*Hint:* Store the original message in an array of characters, then go back through the array, translating and printing characters one by one.
### Solution
When converting char with `toupper` function, need to amend with `unsigned char`:
```
   toupper((unsigned char)ch)
```
Else, will generate this warning:
```c
8.06.c:14:19: warning: array subscript is of type 'char' [-Wchar-subscripts]
      biff[i++] = toupper(ch);
                  ^~~~~~~~~~~
/usr/include/ctype.h:161:25: note: expanded from macro 'toupper'
      (void) __CTYPE_PTR[__x]; (toupper) (__x);})
                        ^~~~
1 warning generated.
```
#### 8.06.c
```c
#include <stdio.h>
#include <ctype.h>

#define MAX 50

int main(void)
{
   char ch, biff[MAX] = {0};
   int i = 0;

   printf("Enter message: ");
   while((ch = getchar()) != '\n' && i < MAX) {
      biff[i++] = toupper((unsigned char)ch);
   }

   printf("In B1FF-speak: ");
   for (i = 0; i < MAX; i++) {
      switch (biff[i]) {
         case 'A':
            putchar('4');
            break;
         case 'B':
            putchar('8');
            break;
         case 'E':
            putchar('3');
            break;
         case 'I':
            putchar('1');
            break;
         case 'O':
            putchar('0');
            break;
         case 'S':
            putchar('5');
            break;
         default:
            putchar(biff[i]);
            break;
      }
   }
   printf("!!!!!!!!!!\n");

   return 0;
}
#### Output
```
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
---
Enter message: What else can I do with this?
In B1FF-speak: WH4T 3L53 C4N 1 D0 W1TH TH15?!!!!!!!!!!
```
