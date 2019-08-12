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

