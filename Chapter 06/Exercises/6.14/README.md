### Exercise 6.14
Find the error in the following program fragment and fix it.
```c
if (n % 2 == 0);
	printf("n is even\n");
```
### Solution

The semicolon [`;`] at the end of the `if` statement is the error:
```
6.14.c:11:19: warning: if statement has empty body [-Wempty-body]
   if (n % 2 == 0); // {
                  ^
```

#### 6.14.c
```c
#include <stdio.h>

int main(void)
{

   int n;

   printf("Enter a number: ");
    scanf("%d", &n);

   if (n % 2 == 0) {
      printf("%d is even\n", n);
   }

   return 0;
}
```
#### Output
```
Enter a number: 4
4 is even
```
