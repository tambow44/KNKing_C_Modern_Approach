### Exercise 8.05
The Fibonacci numbers are `0, 1, 1, 2, 3, 5, 8, 13, ...,` where each number is the sum of the two preceding numbers. Write a program fragment that declares an array named `fib_numbers` of length `40` and fills the array with the first 40 Fibonacci numbers. *Hint:* Fill in the first two numbers individually, then use a loop to compue the remaining numbers.  
### Solution
#### 8.05.c
```c
#include <stdio.h>

#define FIB_SIZE ((int) (sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(void)
{
   int i, fib_numbers[40] = { 0, 1 };

   for (i = 0; i < FIB_SIZE; i++) {
      fib_numbers[i + 2] = fib_numbers[i] + fib_numbers[i + 1];
   }

   printf("Fibonacci numbers [01 - 40]:\n");
   for (i = 0; i < FIB_SIZE; i++) {
      printf("%.2d: %d\n", i + 1, fib_numbers[i]);
   }
   
   return 0;
}
```
#### Output
```
Fibonacci numbers [01 - 40]:
01: 0
02: 1
03: 1
04: 2
05: 3
06: 5
07: 8
08: 13
09: 21
10: 34
11: 55
12: 89
13: 144
14: 233
15: 377
16: 610
17: 987
18: 1597
19: 2584
20: 4181
21: 6765
22: 10946
23: 17711
24: 28657
25: 46368
26: 75025
27: 121393
28: 196418
29: 317811
30: 514229
31: 832040
32: 1346269
33: 2178309
34: 3524578
35: 5702887
36: 9227465
37: 14930352
38: 24157817
39: 39088169
40: 63245986
```
