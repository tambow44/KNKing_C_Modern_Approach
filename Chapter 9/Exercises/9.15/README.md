The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one `return` statement.
```c
double median(double x, double y, double z)
{
   if (x <= y)
      if (y <= z) return y;
      else if (x <= z) return z;
      else return x;
   if (z <= y) return y;
   if (x <= z) return x;
   return z;
}
```
### Solution
See `9.15.c` for complete program.

Function is as follows:
```c
double median(double x, double y, double z)
{
   double result;

   if (((x >= y) && ( y <= z)) || ((z >= y) && (x <= y))) {
      result = y;
   } else if (((x >= z) && (y <= z)) || (y >= z && x <= z)) {
      result = z; 
   } else {
      result = x;
   }

   return result;
}
```
### Output
Where:
```c
double x = 1.11, y = 2.22, z = 3.33;
```
```
Median of 1.11, 2.22, 3.33: 2.22
```
