### Exercise 8.06
Calculators, watches and other electronic devices often rely on seven-segment displays for numerical output. To form a digit, such devices "turn on" some of the seven segments while leaving others "off":

```
 _        _    _         _    _    _    _    _ 
| |   |   _|   _|  |_|  |_   |_     |  |_|  |_|
|_|   |  |_    _|    |   _|  |_|    |  |_|   _|
```
Suppose that we want to set up an array that remembers which segments should be "on" for each digit. Let's number the segments as follows:
```
  0
5 6 1
4 3 2
```
Here's what the array might look like, with each row representing one digit:
```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
```
I've given you the first row of the initializer; fill in the rest.
### Solution
Not much point writing a program without demonstrating, so here's the `fragment` required:
```c
   const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},  /* 0 */
                                {0, 1, 1, 0, 0, 0, 0},  /* 1 */
                                {1, 1, 0, 1, 1, 0, 1},  /* 2 */
                                {1, 1, 1, 1, 0, 0, 1},  /* 3 */
                                {0, 1, 1, 0, 0, 1, 1},  /* 4 */
                                {1, 0, 1, 1, 0, 1, 1},  /* 5 */
                                {1, 0, 1, 1, 1, 1, 1},  /* 6 */
                                {1, 1, 1, 0, 0, 0, 0},  /* 7 */
                                {1, 1, 1, 1, 1, 1, 1},  /* 8 */
                                {1, 1, 1, 1, 0, 1, 1}}; /* 9 */
```
