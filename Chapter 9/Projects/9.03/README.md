### Project 9.03
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
```c
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
```
`main` first calls `generate_random_walk`, which initializes the array to contain `'.'` characters and then replaces some of these characters by the letters `A` through `Z`, as described in the original project. `main` then calls `print_array` to display the array on the screen.
### Solution
See `9.03.c` for complete program.
#### Functions
`generate_random_walk`:
```c
void generate_random_walk(char walk[N][N])
{
   int i = 0, j = 0, direction;
   bool up, down, left, right;
   char alphabet = 'A';

   walk[0][0] = alphabet++;

   srand((unsigned) time(NULL));

   while (alphabet <= 'Z') {
      up = down = left = right = direction = false;
      direction = (rand() % 4);

        if (i-1 >= 0 && walk[i-1][j] == false) {
         up = true;
      } if (i+1  < N && walk[i+1][j] == false) {
         down = true;
      } if (j-1 >= 0 && walk[i][j-1] == false) {
         left = true;
      } if (j+1  < N && walk[i][j+1] == false) {
         right = true;
      }

      /* break out of program if direction is 'full'  */ 
      if (up + down + left + right == false) { 
            break;
         }

      switch(direction) {
         case 0 :
            if (up) {
               walk[--i][j] = alphabet++;
            }
            break;
         case 1 :
            if (down) {
               walk[++i][j] = alphabet++;
            }
            break;
         case 2 :
            if (left) {
               walk[i][--j] = alphabet++;
            }
            break;
         case 3 :
            if (right) {
               walk[i][++j] = alphabet++;
            }
            break;
         default :
            break;
      }
   }
}
```
`print_array`:
```c
void print_array(char walk[N][N])
{
   int i, j;

   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
         if (walk[i][j] == false) {
            walk[i][j] = '.';
         }
       printf("%c ", walk[i][j]);
      }
      printf("\n");
   }
   printf("\n");
}
```
#### Output
```
A D E . . . . . . .
B C F . . . . . . .
I H G . . . . . . .
J . . . . . . . . .
K . . . . . . . . .
L O P Q R S T . . .
M N . . . . U . . .
. . . . . . V . . .
. . . . Y X W . . .
. . . . Z . . . . .
```
