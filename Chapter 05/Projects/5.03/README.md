### Project 5.03
Modify the `broker.c` program from Section 5.2 by making both of the following changes:
```
a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker.
```
### Solution
#### 5.03.c
```c
#include <stdio.h>

int main(void)
{
   float commission, rival_commission, price, shares, value;

   printf("Enter the number of shares: ");
   scanf("%f", &shares);

   printf("Enter the price per share: ");
   scanf("%f", &price);

   value = price * shares;

   if (value < 2500.00f)
      commission = 30.00f + .017f * value;
   else if (value >= 2500.00f && value < 6250.00f)
      commission = 56.00f + .0066f * value;
   else if (value >= 6250.00f && value < 20000.00f)
      commission = 76.00f + .0034f * value;
   else if (value < 50000.00f)
      commission = 100.00f + .0022f * value;
   else if (value < 500000.00f)
      commission = 155.00f + .0011f * value;
   else
      commission = 255.00f + .0009f * value;

   if (commission < 39.00f)
      commission = 39.00f;

   printf("Commission: $%.2f\n", commission);

   if (shares < 2000) 
      rival_commission = .03f * shares;
   else 
      rival_commission = .02f * shares;

   printf("Rival's commission: $%.2f\n", rival_commission + 33.f);

   return 0;
}
```
#### Output
```
Enter the number of shares: 3200
Enter the price per share: 0.9
Commission: $75.01
Rival's commission: $97.00
```
