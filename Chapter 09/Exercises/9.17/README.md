### Exercise 9.17
Rewrite the `fact` function so that it's no longer recursive.
### Solution
Compare the original:
```c
int fact(int n)
{
   if (n <= 1) {
      return 1;
   } else {
      return n * fact(n - 1);
   }
}
```
To an `iterative` function:
```c
int fact(int n)
{
   int result = 1;

   while (n-- > 1) {
      result *= n;
   }

   return n;
}
```
