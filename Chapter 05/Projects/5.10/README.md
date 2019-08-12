### Project 5.10
Using the `switch` statement, write a program that converts a numerical grade into a letter grade:
```
Enter numerical grade: 84
Letter grade: B
```
Use the following grading scale: `A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.`   
Print an error message if the grade is larger than `100` or less than `0`. *Hint:* Break the grade into two digits, then use a `switch` statement to test the ten's digit.
### Solution
#### 4.10.c
```c
#include <stdio.h>

int main(void)
{
   int grade;

   printf("Enter numerical grade: ");
    scanf("%d", &grade);

   if (grade > 100 || grade < 0) {
      printf("Error\n");
      return 0;
   }

   printf("Letter grade: ");

   switch (grade / 10) {
   case 10: case 9:
		printf("A\n");
      break;
   case 8:
		printf("B\n");
      break;
   case 7:
		printf("C\n");
		break;
   case 6:
		printf("D\n");
      break;
   default:
		printf("F\n");
      break;
   }

   return 0;
}
```
#### Output
```
Enter numerical grade: 99
Letter grade: A
---
Enter numerical grade: 43
Letter grade: F
---
Enter numerical grade: 104
Error
```
