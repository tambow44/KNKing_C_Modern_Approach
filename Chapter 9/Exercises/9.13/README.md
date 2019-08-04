### Exercise 9.13
Write the following function, which evaluates a chess position:
```c
int evaluate_position(char board[8][8]);
```
`board` represents a configuration of pieces on a chessboard, where the letters `K`, `Q`, `R`, `B`, `N`, `P` represent White pieces, and the letters `k`, `q`, `r`, `b`, `n`, and `p` represent Black pieces.
`evaluate_position` should sum the values of the White pieces (`Q = 9`, `R = 5`, `B = 3`, `N = 3`, `P = 1`). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has advantage in material and negative if Black has an advantage.
### Solution
See `9.13.c` for complete program.

Function is as follows:
```c
int evaluate_position(char board[8][8])
{
   int i, j, black = 0, white = 0;

   for (i = 0; i < 8; i++) {
      for (j = 0; j < 8; j++) {
         /* White pieces */
         board[i][j] == 'Q' ? white += 9 : white ;
         board[i][j] == 'R' ? white += 5 : white ;
         board[i][j] == 'B' ? white += 3 : white ;
         board[i][j] == 'N' ? white += 3 : white ;
         board[i][j] == 'P' ? white += 1 : white ;
         /* Black pieces */
         board[i][j] == 'q' ? black += 9 : black ;
         board[i][j] == 'r' ? black += 5 : black ;
         board[i][j] == 'b' ? black += 3 : black ;
         board[i][j] == 'n' ? black += 3 : black ;
         board[i][j] == 'p' ? black += 1 : black ;
      }
   }

   return white - black;
}
```
#### Output
Where:
```c
   char board[8][8] = {{ 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' },
                       { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { '.', '.', '.', '.', '.', '.', '.', '.' },
                       { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
                       { 'r', 'n', 'b' ,'q', 'k', 'b', 'n', 'r' }};
```
```
There is no advantage.
```
