### Project 10.04
Modify the `poker.c` program of Section 10.05 by having it recognize an additional category, "royal flush" (ace, king, queen, jack, ten of the same suit). A royal flush ranks higher than other hands.
### Solution
See 10.04.c for complete program.

Section added to `analyse_hand` function, for solution:
```c
/* check for royal flush */
for (int i = 8; i < NUM_RANKS; i++)
   if (num_in_rank[i] == 1)
      royal_count++;

if (royal_count == NUM_CARDS)
   royal_flush = true;
```
#### Output
```
Enter a card: ah
Enter a card: kh
Enter a card: qh
Enter a card: jh
Enter a card: th
Royal flush
```
