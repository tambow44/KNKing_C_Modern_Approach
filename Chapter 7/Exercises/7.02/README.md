### Exercise 7.02
Which of the following are not legal constants in C? Classify each legal constant as either integer or floating point?
```
a) 010E2
b) 32.1E+5
c) 0790
d) 100_000
e) 3.987e-2
```
### Solution
`c)` and `d)` are illegal: `0790` is undefined by numeral `9` in octal numbering; `100_00` because of the underscore.

`a)`, `b)`, and `e)` are legal, all floating point constants.

