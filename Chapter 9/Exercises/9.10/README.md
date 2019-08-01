### Exercise 9.10
Write functions that return the following values. (Assume that `a` and `n` are parameters, where `a` is an array of `int` values and `n` is the length of the array.)
```
a) The largest element of a.
b) The average of all elements in a.
c) The number of positive elements in a.
```
### Solution
See `9.10.c` for complete program.

a) The largest element in a:
```c
int a_largest (int a[], int n)
{
   int i, large = a[0];

   for (i = 0; i < n; i++) {
      if (large < a[i]) {
         large = a[i];
      }
   }

   return large;
}
```
b) The average of all elements in a:
```c
float b_average (int a[], int n)
{
   int i, sum = 0;

   for (i = 0; i < n; i++) {
      sum += a[i];
   }
   
   return (float) sum / n;
}
```
c) The number of positive elements in a:
```c
int c_positive (int a[], int n)
{
   int i, positive = 0;

   for (i = 0; i < n; i++) {
      (a[i] > 0) ? positive++ : 0;
   }

   return positive;
}
```
#### Output
Where:
```
int a[LEN] = {1,2,3,4,15,6,7,-3,-9,10};
```
```
Largest element of a: 15
Average of element a: 3.60
Number of positive elements in a: 8
```
