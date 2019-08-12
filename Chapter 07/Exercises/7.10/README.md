### Exercise 7.10
Suppose that `i` is a variable of type `int`, `j` is a variable of the type `long`, and `k` is a variable of type `unsigned int`. What is the type fo the expression `i + (int) j * k`?
### Solution
The expression will be an `unsigned int`.   
`j` is cast to `int`, and k will promote the expression to `unsigned int`.
