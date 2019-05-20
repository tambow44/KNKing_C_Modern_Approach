#include <stdio.h>

int main(void)
{
   float amount, rate, monthly;
	int i, number_of_payments;

   printf("Enter amount of loan: ");
    scanf("%f", &amount); 
   printf("Enter interest rate: ");
    scanf("%f", &rate);
   printf("Enter monthly payment: ");
    scanf("%f", &monthly);
	printf("Enter number of payments: ");
	 scanf("%d", &number_of_payments);

	for (i = 1; i <= number_of_payments; i++) {
		amount = (amount - monthly) + (((amount * rate) / 100) / 12);
      printf("Balance remaining after payment %2d:  $%.2f\n", i, amount);
   }

    return 0;
}
