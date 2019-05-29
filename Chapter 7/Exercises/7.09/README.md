### Exercise 7.09
Suppose that `i` and `j` are variables of type `int`. What is the type of the expression `i / j + 'a'`?
### Solution
The type is an `int`. The expression promotes `char` to `int`.
We can use the `sizeof` function to test this. 
#### 7.09.c
```c
#include <stdio.h>

int main(void)
{

   int i = 1;
   int j = 900;
   char c = 'a';

   printf("Size of an \'int\': %d\n", sizeof(i));
   printf("Size of a \'char\': %d\n", sizeof(c));
   printf("Size of \' i / j + \'a\' is: %d\n", sizeof(i / j + 'a'));

   return 0;
}
```
#### Output
```
Size of an 'int': 4
Size of a 'char': 1
Size of ' i / j + 'a' is: 4
```
