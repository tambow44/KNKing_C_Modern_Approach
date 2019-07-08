### Project 8.02
Modify `repdigit.c` program of section 8.1 so that it prints a table showing how many times each digit appears in the number:
```
Enter a number: 41271092
Digit:        0  1  2  3  4  5  6  7  8  9
Occurrences:  1  2  2  0  1  0  0  1  0  1
```
### Solution
#### 8.02.c
```c
#include <stdio.h>

int main(void)
{
   int i, digit, occur[10] = {0};
   long n;

   printf("Enter a number: ");
    scanf("%ld", &n);

   while (n > 0) {
      digit = n % 10;
      occur[digit]++;
      n /= 10;
   }

   printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
   printf("Occurrences:\t");

   for (i = 0; i < 10; i++) {
      printf("%2d ", occur[i]);
   }
   printf("\n");

   return 0;
}
```
#### Output
```
Enter a number: 41271092
Digit:           0  1  2  3  4  5  6  7  8  9
Occurrences:     1  2  2  0  1  0  0  1  0  1
---
Enter a number: 192253844
Digit:           0  1  2  3  4  5  6  7  8  9
Occurrences:     0  1  2  1  2  1  0  0  1  1
```
