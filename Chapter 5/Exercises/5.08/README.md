### Exercise 5.8
The following `if` statement is unnecessarily complicated. Simplify it as much as possible.   
(*Hint:* The entire statement can be replaced by a single assignment.)
```
if (age >= 13)
   if (age <= 19)
      teenager = true;
   else
      teenager = false;
else if (age < 13)
   teenager = false;

```
### Solution
Single assignment looks like: `teenager = age >= 13 && age <= 19;`
#### 5.8.c
```c
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int age, teenager;

   printf("Enter your age: ");
   scanf("%d", &age);

   teenager = age >= 13 && age <= 19;

   printf("You are ");
   if (teenager == true)
      printf("a teenager.\n");
   else
      printf("not a teenager.\n");

   return 0;
}
```
#### Output
```
Enter your age: 13
You are a teenager.
```
