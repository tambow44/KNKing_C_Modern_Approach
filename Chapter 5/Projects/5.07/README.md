### Project 5.07
Write a program that finds the largest and smallest of four integers entered by the user:
```
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
```
### Solution
#### 5.07.c
```c
#include <stdio.h>

int main(void)
{
   int num1, num2, num3, num4,
       large, small;
   
   printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 >= num2) {
		large = num1;
		small = num2;
	} else {
		large = num2;
		small = num1;
	}

	if (num3 >= large) {
		large = num3;
	} else if (num3 <= small) {
		small = num3;
	}

	if (num4 >= large) {
		large = num4;
	} else if (num4 <= small) {
		small = num4;
	}

	printf("Largest: %d\nSmallest: %d\n", large, small);

   return 0;
}
```
#### Output
```
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
---
Enter four integers: 99 98 97 96
Largest: 99
Smallest: 96
---
Enter four integers: 41 42 43 44
Largest: 44
Smallest: 41
```
