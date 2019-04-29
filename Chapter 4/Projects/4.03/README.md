### Project 4.03
Rewrite the program in 4.02 so tha tit prints the reversal of a three-digit number without using arithmetic to split the number into digits. *Hint:* see the `upc.c` program of Section 4.1.
### Solution
#### 4.03.c
```c
#include <stdio.h>

int main(void)
{
   int n1, n2, n3;

   printf("Enter a three-digit number: ");
   scanf("%1d%1d%1d", &n1, &n2, &n3);

   printf("The reversal is: %d%d%d\n", n3, n2, n1);
   return 0;
}
```
#### Output
```
Enter a three-digit number: 753
The reversal is: 357
```
