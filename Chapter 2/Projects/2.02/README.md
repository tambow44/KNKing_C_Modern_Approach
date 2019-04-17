### Project 2.2
Write a program that computes the volumes of a sphere with a 10 metre radius, using the formula `v = 4/3πr³`. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) *Hint:* C doesn't have an exponentiation operator, so you'll need to multiply `r` by itself twice to compute `r³`.

### Solution
As the requirements are for a 10m radius, we can cheat a bit and hard-code `r` as `1000` (*10 x 10 x 10*).   
For any other number, it would be better to calculate the radius and its cubed state by assigning as variable `radius = r * (r * r)`;
#### 2.2.c
```c
#include <stdio.h>

int main(void)
{
   printf("A sphere with a radius of 10m produces a volume of: %.2f metres-cubed.\n", 4.0f/3.0f * 3.14 * 1000);

   return 0;
}
```
