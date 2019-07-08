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
