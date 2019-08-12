### Exercise 6.13
Rewrite the following loop so that its body is empty:
```c
for (n = 0; m > 0; n++) {
	m /= 2;
}
```
### Solution
#### 6.13.c
```c

#include <stdio.h>

int main(void)
{
	int m = 10, n;

	for (n = 0; m > 0; n++, m /= 2) {
	}

	return 0;
}
```
