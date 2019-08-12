### Exercise 10.01
The following program outline shows only function definitions and variable definitions.
```c
int a;

void f(int b)
{
   int c;
}

void g(void)
{
   int d;
   {
      int e;
   }
}

int main(void)
{
   int f;
}
```
For each of the following scopes, list all variables and parameter names visible in that scope:
  a) The `f` function
  b) The `g` function
  c) The block in which `e` is declared
  d) The `main` function
### Solution
a) The `f` function: `a`, `b`, `c`
b) The `g` function: `a`, `d`
c) The block in which `e` is declared: `a`, `d`, `e`
d) The `main` function: `a`, `f`
