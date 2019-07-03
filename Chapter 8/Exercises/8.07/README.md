### Exercise 8.07
Using the shortcuts described in `Section 8.2`, shrink the initializer for the `segments` array (`Exercise 6`) as much as you can.
### Solution
```c
   const int segments[10][7] = {{1, 1, 1, 1, 1, 1},     /* 0 */
                                {0, 1, 1},              /* 1 */
                                {1, 1, 0, 1, 1, 0, 1},  /* 2 */
                                {1, 1, 1, 1, 0, 0, 1},  /* 3 */
                                {0, 1, 1, 0, 0, 1, 1},  /* 4 */
                                {1, 0, 1, 1, 0, 1, 1},  /* 5 */
                                {1, 0, 1, 1, 1, 1, 1},  /* 6 */
                                {1, 1, 1},              /* 7 */
                                {1, 1, 1, 1, 1, 1, 1},  /* 8 */
                                {1, 1, 1, 1, 0, 1, 1}}; /* 9 */
```
