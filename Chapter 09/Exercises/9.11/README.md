### Exercise 9.11
Write the following function:
```c
float computer_GPA(char grades[], int n);
```
The `grades` array will contain letter grades (`A`, `B`, `C`, `D`, or `F`, either upper-case or lower-case); `n` is the length of the array. The function should return the average of the grades (assume that `A = 4`, `B = 3`, C = 2`, `D = 1`, and `F = 0`).
### Solution
See `9.11.c` for complete program.

Function is as follows:
```c
float compute_GPA(char grades[], int n)
{
   int i;
   float sum = 0.0f;

   for (i = 0; i < n; i++) {
      switch(toupper(grades[i]))  {
         case 'A':
            sum += 4.0f;
            break;
         case 'B':
            sum += 3.0f;
            break;
         case 'C':
            sum += 2.0f;
            break;
         case 'D':
            sum += 1.0f;
            break;
         case 'F':
            sum += 0.0f;
            break;
         default:
            break;
      }
   }

   return sum / n;
}
```
#### Output
Where:
```c
char grade[LEN] = { 'A', 'A', 'F', 'D', 'C' };
```
```
Grade average: 2.20
```
