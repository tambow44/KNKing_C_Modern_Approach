### Project 10.05
Modify the `poker.c` program of Section 10.05 by allowing "ace-low" straights (ace, two, three, four, five).
### Solution
See 10.05.c for complete program.
Section added to `analyse_hand` function, for solution:
```c
/* check for ace-low */
if (num_in_rank[12] == 1) als_count++;
   for (int i = 0; i < 4; i++)
      if (num_in_rank[i] == 1) als_count++;

   if (als_count == NUM_CARDS)
      ace_low = true;
```

#### Output
```
Enter a card: ac
Enter a card: 2c
Enter a card: 3c
Enter a card: 4c
Enter a card: 5c
Ace-low straight
```
