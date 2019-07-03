#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
   int i, j;

   printf("Enter size of array: ");
    scanf("%d", &i);

   int a[i];

   printf("Enter %d numbers for array: ", i);

   for (j = 0; j < i; j++) {
      scanf("%d", &a[j]);
   }
   
   printf("\n------------------\n\n");

   printf("Size of array: %lu\n", sizeof(a));
   printf("Length of array: %lu\n", sizeof(a) / sizeof(a[0]));

   printf("Contents of array:");

   for (j = 0; j < i; j++) {
      printf(" %d", a[j]);
   }

   printf("\n");

   printf("\n------------------\n\n");

   for (j = 0; j < SIZE; j++) {
      a[j] = 0;
   }

   printf("Contents of array:");

   for (j = 0; j < i; j++) {
      printf(" %d", a[j]);
   }

   printf("\n");

   printf("Size of array: %lu\n", sizeof(a));
   printf("Length of array: %lu\n", sizeof(a) / sizeof(a[0]));

   printf("\n------------------\n\n");

   return 0;
}
