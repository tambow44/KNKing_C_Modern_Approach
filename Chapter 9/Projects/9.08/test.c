#include <stdio.h>
#include <stdbool.h>

bool testing(void)
{
   printf("Number is ");
   return (90 % 2 == 0) ? true : false ;
}

int main(void)
{

   testing() ? printf ("even.\n") : printf("odd.\n") ;

   return 0;
}
