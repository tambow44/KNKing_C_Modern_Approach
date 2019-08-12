#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int age, teenager;

   printf("Enter your age: ");
   scanf("%d", &age);

   teenager = age >= 13 && age <= 19;

   printf("You are ");
   if (teenager == true)
      printf("a teenager.\n");
   else
      printf("not a teenager.\n");

   return 0;
}
