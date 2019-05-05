### Project 5.01
Write a program that calculates how many digits a number contains:
```
Enter a number: 374
The number 374 has 3 digits
```
You may assume that the number has no more than four digits. *Hint:* Use `if` statements to test the number. For example, if the number is between `0` and `9`, it has one digit. If the number is between `10` and `99`, it has two digits.
### Solution
#### 5.01.c
```c
#include <stdio.h>

int main(void)
{
   int number, digits;

   printf("Enter a number: ");
   scanf("%d", &number);

	if (number < 0) {
		printf ("Number cannot be a negative\n");
		return 0;
	} else if (number >= 0 && number <= 9) {
      digits = 1;
   } else if (number >= 10 && number <= 99) {
      digits = 2;
   } else  if (number >= 100 && number <= 999) {
      digits = 3;
   } else if (number >= 1000 && number <= 9999) {
		digits = 4;
	} else {
		printf ("Number has more than 4 digits\n");
		return 0;
	}

   printf("The number %d has %d digits\n",number, digits);

   return 0;
}
```
#### Output
```
Enter a number: 48
The number 48 has 2 digits
---
Enter a number: -7
Number cannot be a negative
---
Enter a number: 10203
Number has more than 4 digits
```
