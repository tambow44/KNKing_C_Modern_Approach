### Project 2.7
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:

```
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
```

*Hint*: Divide the amount by 20 to determine the number of $20 bills needed, and
then reduce the amount by the totoal value of the $20 bills. Repeat for the
other bill sizes. Be sure to use integer values throughout, not floating-point
numbers.

### Solution
#### 2.7.c
```c
#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount); 

    twenty = amount / 20;
    amount = (amount - (twenty * 20));

    ten = amount / 10;
    amount = (amount - (ten * 10));

    five = amount / 5;
    amount = (amount - (five * 5));

    one = amount / 1;
    amount = (amount - (one * 1));

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}

```
