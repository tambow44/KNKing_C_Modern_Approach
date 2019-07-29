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
