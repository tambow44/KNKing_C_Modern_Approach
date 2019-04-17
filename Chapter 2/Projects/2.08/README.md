### Project 2.8
Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:

```
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
```

Display each balance with two digits after the decimal point. *Hint*: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate.   
To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.

### Solution
#### 2.8.c
```c
#include <stdio.h>

int main(void)
{
    float amount, rate, monthly;

    printf("Enter amount of loan: ");
    scanf("%f", &amount); 
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly); 

    amount = (amount - monthly) + (((amount * rate) / 100) / 12);
    printf("Balance remaining after first payment:  $%.2f\n", amount);

    amount = (amount - monthly) + (((amount * rate) / 100) / 12);
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount = (amount - monthly) + (((amount * rate) / 100) / 12);
    printf("Balance remaining after third payment:  $%.2f\n", amount); 

    return 0;
}

```
