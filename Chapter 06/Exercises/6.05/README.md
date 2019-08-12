### Exercise 6.05
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
```
a) while (i < 10) {...}
b) for (; i < 10;) {...}
c) do {...} while (i < 10);
```
### Solution
#### 6.05.c
`c)` is not equivalent, `do` will run at least once, then check the `while` condition. Unlike `a)` and `b)`, which will always first check the condition.

See `6.05.c` for reference.

Compiler produced the following output:
```c
6.05.c:14:11: warning: variable 'i' used in loop condition not modified in
      loop body [-Wfor-loop-analysis]
   for (; i < 10;) {
          ^
1 warning generated.
```
#### Output
Each of these statements is a loop without increment; will forever output `i `. i.e. `0 0 0 0 0 0 `.
 
