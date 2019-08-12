### Project 8.03
Modify `repdigit.c` program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to `0`.
### Solution
#### 8.03.c
```c
#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
   bool digit_seen[10] = {false};
   int digit, i;
   long n;

   while(true) {
      /* clean array for next iteration */
      for (i = 0; i < 10; i++) {
         digit_seen[i] = 0;
      }

      printf("Enter a number: ");
       scanf("%ld", &n);

      if (n <= 0) {
         break;
      }

      while (n > 0) {
         digit = n % 10;
         if (digit_seen[digit]) {
            break;
         }
         digit_seen[digit] = true;
         n /= 10;
      }

      if (n > 0) {
         printf("Repeated digit\n");
      } else {
         printf("No repeated digit\n");
      }

   }
   return 0;
}
```
#### Output
```
Enter a number: 12345
No repeated digit
Enter a number: 12345
No repeated digit
Enter a number: 123234
Repeated digit
Enter a number: 1994938
Repeated digit
Enter a number: 19438
No repeated digit
Enter a number: 0
```
