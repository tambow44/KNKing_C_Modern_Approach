### Project 6.12
Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than ε, where ε is a small (floating-point) number entered by the user.
### Solution
#### 6.12.c
```c
#include <stdio.h>

int main(void)
{
   int n, i, j, fact;
   float e, term, eps;

	fact = 1;
	term = e = 1.0f;

   printf("Enter digit for n: ");
    scanf("%d", &n);

   printf("Enter float for ε (epsilon): ");
    scanf("%f", &eps);

   for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
         fact *= j;
      }

      term = 1.0f/fact;

      if (term < eps) {
         break;
      } else {
         e += term;
         fact = 1;
      }
   }

   printf("Approximation of e: %.4f\n", e);

   return 0;
}
```
#### Output
```
Enter digit for n: 4 
Enter float for ε (epsilon): 0.001
Approximation of e: 2.7083
```
