### Exercise 8.01
We discuessed using the expression `sizeof(a) / sizeof(a[0])` to calculate the number of elements in an array. The expression `sizeof(a) / sizeof(t)`, where  `t` is the type of `a`'s elements, would also work, but it's considered an inferior technique. Why?
### Solution
The first technique is more dynamic. Should you change the type of `a` (i.e. `short` to `long`), you will need to change all instances of `t`.
