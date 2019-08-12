### Exercise 10.02
The following program outline shows only function definitions and variable declarations.
```c
int b, c;

void f(void)
{
   int b, d;
}

void g(int a)
{
   int c;
   {
      int a, d;
   }
}

int main(void)
{
   int c, d;
}
```
For each of the following scopes, list all variable and parameter names visible in that scope. If there's more than one variable or parameter with the same name, indicate which one is visible.

a) The `f` function  
b) The `g` function  
c) The block in which `a` and `d` are declared  
d) The `main` function
### Solution
a) The `f` function: (global) `b`, `c`; (local) `b`, `d`  
b) The `g` function: (global) `b`, `c`; (local) `c`  
c) The block in which `a` and `d` are declared: (global) `b`, `c`; (local) `c`, `a`, `d`  
d) The `main` function: (global) `b`, `c`; (local) `f`  
