### Exercise 7.14
Does the following statement always compute the fractional part of `f` correctly (assuming that `f` and `frac_part` are `float` variables)?
```c
frac_part = f - (int) f;
```
If not, what's the problem?
### Solution
While `frac_part = f - (int) f;` will read as `float = float - int`. Conversion of `int` to `float`, per precedence, this may very well fail if the value of `f` exceeds the largest permittable value for `int` types.
