### Exercise 2.1.1
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

a)
Directives are line 1.
Statements are lines 5-8.

```c {.line-numbers}
#include <stdio.h>

1| int main(void)
2| {
3|    printf("Parkinson's Law:\nWork expands so as to ");
4|    printf("fill the time\n");
5|    printf("available for its completion.\n");
6|    return 0;
7| }
```
