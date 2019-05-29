### Project 7.01
The `square2.c` program of `Section 6.3` will fail (usually by printing strange answers) if `i * i` exceeds the maximum `int` value. Run the program to determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again. (Don't forget to update the conversion specification in the call of `printf`!) Then try `long`. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?
### Solution
Utilising the `limits.h` file, we can more easily determine this:
#### limits.c
```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
   printf(" Long: %ld\n", LONG_MAX);
   printf("Short: %d\n", SHRT_MAX);
   printf("  Int: %d\n", INT_MAX);

   return 0;
}
```
#### Output
```
 Long: 9223372036854775807
Short: 32767
  Int: 2147483647
```
Therefore, the lowest value is the above, incremented by `1`.
