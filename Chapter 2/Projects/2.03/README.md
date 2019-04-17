### Project 2.3
Modify the program in `Project 2.2` so that it prompts the user to enter the radius of the sphere.
### Solution

#### 2.3.c
```c
#include <stdio.h>

int main(void)
{
   float pi = 3.14f,
    formula = 4.0f/3.0f,
     radius, cubed;

   printf("Enter radius (metres): ");
   scanf("%f", &radius);

   cubed = radius * (radius * radius);

   printf("A sphere with a radius of %.1fm produces a volume of: %.2f metres-cubed.\n", radius, formula * pi * cubed);

   return 0;
}
```
