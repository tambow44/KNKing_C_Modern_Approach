### Exercise 9.12
Write the following function:
```c
double inner_product(double a[], double b[], int n);
```
The functin should return `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`
### Solution
See `9.12.c` for complete program.

Function is as follows:
```c
double inner_product(double a[], double b[], int n)
{
   int i;
   double result = 0;

   for (i = 0; i < n; i++) {
      result += (a[i] * b[i]);
   }

   return result;
}
```
#### Output
Where:
```c
   double a[LEN] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
   double b[LEN] = { 5.1, 4.2, 3.3, 2.4, 1.5 };
```
```
Result: 44.55
```

