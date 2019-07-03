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
