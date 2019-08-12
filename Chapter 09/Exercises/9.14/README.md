### Exercise 9.14
The following function is supposed to return `true` if any elements of the array `q` has the value `0` and `false` if all elements are nonzero. Sadly, it contains an error. Find the error and show how to fix it:
```c
bool has_zero(int a[], int n)
{
   int i;

   for (i = 0; i < n; i++) {
      if (a[i] == 0) {
         return true;
      } else {
         return false;
      }
   }
}
```
### Solution
The function `has_zeros` will return after checking the first element of `a`, not checking the subsequent elements. 

Additionally, function generates the following warning:
```c
9.14.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.
```
This is due to the return value being nested, we can fix this simply by assigning to a variable, and returning this variable.

See `9.14.c` for complete program.

Corrected function is as follows:
```c
bool has_zero(int a[], int n)
{
   int i;

   for (i = 0; i < n; i++) {
      if (a[i] == 0) {
         return true;
      }
   }

   return false;
}
```
### Output
Where:
```c
   int a[LEN] = { 1, 1, 1, 0, 1 };
```
```
Array contains zeros.
```
