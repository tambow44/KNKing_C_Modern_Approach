### Exercise 9.18
Write a recustive version of the `gcd` function (see Exercise 3). Here's the strategy to use for computing `gcd(m, n)`: If `n` is `0`, return `m`. Otherwise, call `gcd` recursively, passing `n` as the first argument and `m % n` as the second.
### Solution
See `9.18.c` for complete program.

The original `gcd` function from Exercise 3:
```c
int gcd(int m, int n)
{
   int r;

   while (n != 0) {
      r = m % n;
      m = n;
      n = r;
   }

   return m;
}
```
The *recursive* function:
```c
int gcd(int m, int n)
{
  return (n == 0) ? m : gcd(n, m % n) ;
}
```
