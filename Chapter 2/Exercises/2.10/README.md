### Exercise 2.10
In the `dweight.c` program (Tutorial 2.4), which spaces are essential?

### Solution
Here is the `dweight.c` program:

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
This program requires `spaces` in the following places:

1. Between `#include` and `<stdio.h>` (true for all `directives`)  
2. A `linebreak` [type of `space`] after the above `directive` (so, between the `<stdio.h>` and `int main`  
3. Between `return` and `0`  
