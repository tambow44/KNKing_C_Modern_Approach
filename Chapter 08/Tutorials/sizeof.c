#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))
#define SIZEOF(b) ((int) (sizeof(b) / sizeof(b[0])))

int main(void)
{
   int i, j;

   printf("Enter size of array: ");
    scanf("%d", &i);

   char a[i];

   printf("array size: %d\n", SIZEOF(a)); return 0;

   printf("Enter %d characters for array: ", i);

   for (j = 0; j < i; j++) {
      scanf(" %c", &a[j]);
   }
   
   printf("\n------------------\n\n");

   printf("Size of array: %lu\n", sizeof(a));
   printf("Length of array: %lu\n", sizeof(a) / sizeof(a[0]));

   printf("Contents of array:");

   for (j = 0; j < i; j++) {
      printf("%c", a[j]);
   }

   printf("\n");

   return 0;
}
