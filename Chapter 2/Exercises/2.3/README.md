### Exercise 2.3
Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length`, `width` with initialisers, and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` within the last `printf.

#### dweight.c (Unmodified)

```c
#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	height =  8;
	length = 12;
	 width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
```

### Solution
```c
#include <stdio.h>

int main(void)
{

   int height =  8,
       length = 12,
        width = 10,
       volume = height * length * width;

   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

   return 0;
}
```
