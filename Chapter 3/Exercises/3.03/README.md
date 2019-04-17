### Exercise 3.3
For each of the following pairs of `scanf` format strings, indicate whether of not the two strings are equivalent. if they're not, show how they can be distinguished.
```
a) "%d"         versus  " %d"
b) "%d-%d-%d"   versus  "%d -%d -%d"
c) "%f"         versus  "%f "
d) "%f,%f"      versus  "%f, %f"
```
### Solution

Cannot be bothered programming this (as output is too abstract).
(a), (b), and (d) are the same, as the `scanf` function will match zero more more whitespace characters, except the final character.
(c) is not the same, as the trailing whitespace will require input of a non-whitespace (`spaces`, `linebreaks`...) to confirm end of whitespace sequence.
