### Exercise 8.02
The Q&A section shows how to use a *letter* as an array subscript. Descript how to use a *digit* (in character form) as a subscript.
### Solution
Using a digit `d` (in character form) as a subscript into an array, write:
```c
ch[d-'0'];
```
Per Q&A, assumes digits have consecutive codes in its underlying character set, which ASCII does.
