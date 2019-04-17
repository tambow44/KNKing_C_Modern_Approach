### Exercise 2.2
Consider the following program:
```c
#include <stdio.h>

int main(void)
{
	printf("Parkinson's Law:\nWork expands so as to ");
	printf("fill the time\n");
	printf("available for its completion.\n");
	return 0;
}
```
a) Identify the directives and statements in this program.  
b) What output does the program produce?

### Solution

#### a)
Directives are line 1.
Statements are lines 5-8.
```
1| #include <stdio.h>
2| 
3| int main(void)
4| {
5|    printf("Parkinson's Law:\nWork expands so as to ");
6|    printf("fill the time\n");
7|    printf("available for its completion.\n");
8|    return 0;
9| }
```

#### b)
Output of above program:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```
