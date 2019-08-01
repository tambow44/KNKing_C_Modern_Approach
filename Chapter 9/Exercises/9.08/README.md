### Exercise 9.08
Which of the following would be valid prototypes for a function that returns nothing and has one `double` parameter?
```
a) void f(double x);
b) void f(double);
c) void f(x);
d) f(double x);
```
### Soluton
All will compile fine, however only `a)` is correct.
Explanations below:
`a) void f(double x);`
Compiles fine as prototype is correct.
`b) void f(double);`
Compiles fine, however while the input parameter has type definition, there is no variable assigned, so it is quite redundant.
`c) void f(x);`
Compiles, however the following warning is produced:
```c
9.08.c:5:1: warning: parameter names (without types) in function declaration
    5 | void f_c(x);
      | ^~~~
```
This is due to the input parameter having no type declared.
`d) f(double x);`
Compiles, however the following warning is produced:
```c
9.08.c:6:1: warning: data definition has no type or storage class
    6 | f_d(double x);
      | ^~~
9.08.c:6:1: warning: type defaults to 'int' in declaration of 'f_d' [-Wimplicit-int]
```
This is due to the function declaration having no type declared.
#### 9.08.c
```c
#include <stdio.h>

void f_a(double x);
void f_b(double);
void f_c(x);
f_d(double x);

int main(void) {

   printf("Not much to see here\n");
   return 0;
}
```
