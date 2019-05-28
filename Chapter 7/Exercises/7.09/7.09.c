#include <stdio.h>

int main(void)
{

   int i = 1;
   int j = 900;
	char c = 'a';

	printf("Size of an \'int\': %d\n", sizeof(i));
	printf("Size of a \'char\': %d\n", sizeof(c));
   printf("Size of \' i / j + \'a\' is: %d\n", sizeof(i / j + 'a'));

   return 0;
}
