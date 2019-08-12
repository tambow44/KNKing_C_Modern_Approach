### Project 9.01
Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function `selection_sort`. When given an array with `n` elements, `selection_sort` must do the following:

1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first `n - 1` elements of the array.
### Solution
See `9.01.c` for complete program.

Function is as follows:
```c
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
```
### Output
```
Enter 5 integers for sorting: 2 5 14 3 16
Sorted array: 2 3 5 14 16
---
Integers for sorting: 45 22 87 9 110
Sorted array: 9 22 45 87 110
```
