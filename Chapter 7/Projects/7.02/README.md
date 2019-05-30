### Project 7.02
Modify the `square2.c` program of `Section 6.3` so that it pauses after every `24` squares and displays the following message:
```
Press Enter to continue...
```
After displaying the messag, the program should use `getchar` to read a character. `getchar` won't allow the program to continue until the user presses the `Enter` key.
### Solution
#### 7.02.c
```c
#include <stdio.h>

int main(void)
{
   int i, n;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
    scanf("%d", &n);
   getchar();

   for (i = 1; i <= n; i++) {
      printf("%10d%10d\n", i, i * i);
      if (i % 24 == 0) {
         printf("Press Enter to continue...");
         getchar();
      }
   }

   return 0;
}
```
#### Output
```
This program prints a table of squares.
Enter number of entries in table: 30
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
        11       121
        12       144
        13       169
        14       196
        15       225
        16       256
        17       289
        18       324
        19       361
        20       400
        21       441
        22       484
        23       529
        24       576
Press Enter to continue...
        25       625
        26       676
        27       729
        28       784
        29       841
        30       900
```
