### Exercise 5.9
Are the following `if` statements equivalent? If not, why not?
```c
if (score >= 90)       if (score < 60)
    printf("A");           printf("F");
else if (score >= 80)  else if (score < 70)
    printf("B");           printf("D");
else if (score >= 70)  else if (score < 80)
    printf("C");           printf("C");
else if (score >= 60)  else if (score < 90)
    printf("D")            printf("B");
else                   else
    printf("F");           printf("A");
```
### Solution
The statements are equivalent. 
#### 5.9.c
```c
#include <stdio.h>

int main(void)
{

   int score;

   printf("Enter score: ");
   scanf("%d", &score);

   printf("Your result is: ");
   if (score >= 90)
      printf("A");
   else if (score >= 80)
      printf("B");
   else if (score >= 70)
      printf("C");
   else if (score >= 60)
      printf("D");
   else
      printf("F");

   printf("\nYour result is: ");
   if (score < 60)
      printf("F");
   else if (score < 70)
      printf("D");
   else if (score < 80)
      printf("C");
   else if (score < 90)
      printf("B");
   else
      printf("A");

   return 0;
}
```
#### Output
```
Enter score: 56
Your result is: F
Your result is: F
```
