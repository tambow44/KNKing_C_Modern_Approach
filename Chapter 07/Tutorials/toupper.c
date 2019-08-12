#include <stdio.h>
#include <ctype.h>

int main(void)
{

	unsigned char ch = '\0';

	while (ch != '0') {
		printf("Enter a character: ");
		 scanf(" %c", &ch);

		ch = toupper(ch);

		printf("Upper case is: %c\n", ch);
	}

	return 0;
}
