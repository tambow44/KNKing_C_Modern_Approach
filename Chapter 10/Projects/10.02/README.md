### Project 10.02
Modify the `poker.c` program of Section 10.5 by moving the `num_in_rank` and `num_in_suit` array into `main`, which will pass them as arguments to `read_cards` and `analyze_hand`.
### Solution
See `10.02.c` for complete program.
#### Output
```
Enter a card: 2s
Enter a card: 5s
Enter a card: 4s
Enter a card: 3s
Enter a card: 6s
Straight flush

Enter a card: 8c
Enter a card: as
Enter a card: 8c
Duplicate card; ignored.
Enter a card: 7c
Enter a card: ad
Enter a card: 3h
Pair

Enter a card: 6s
Enter a card: d2
Bad card; ignored.
Enter a card: 2d
Enter a card: 9c
Enter a card: 4h
Enter a card: ts
High card

Enter a card: 0
```
