#include <stdio.h>

#define LEN 5

void selection_sort(int a[], int n)
{
   int i, p, largest = 0;

   if (n == 0) {
      return;
   }

   for (i = 0; i < n; i++) {
      (a[i] > a[largest]) ? largest = i : largest ;
   }

   p = a[largest];
   a[largest] = a[n - 1];
   a[n - 1] = p;

   selection_sort(a, n - 1);

}

int main(void)
{
   int i, a[LEN];

   printf("Enter %d integers for sorting: ", LEN);
   for (i = 0; i < LEN; i++) {
      scanf("%d", &a[i]);
   }
   
   selection_sort(a, LEN);

   printf("Sorted array: ");
   for (i = 0; i < LEN; i++) {
      printf("%d ", a[i]);
   }
   printf("\n");

   return 0;
}
