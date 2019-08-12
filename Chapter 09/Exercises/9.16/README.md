### Exercise 9.16
Condense the `fact` fact function in the same way we condensed `power`.
### Solution
See `9.16.c` for complete program.

Initial `fact` function: 
```c
int fact(int n)
{
   if (n <= 1) {
      return 1;
   } else {
      return n * fact(n - 1);
}
```
Condensed function:
```c
int fact(int n)
{
   return (n <= 1) ? 1 : n * fact(n - 1);
}
```
