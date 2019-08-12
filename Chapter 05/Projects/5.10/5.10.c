#include <stdio.h>

int main(void)
{
   int grade;

   printf("Enter numerical grade: ");
    scanf("%d", &grade);

   if (grade > 100 || grade < 0) {
      printf("Error\n");
      return 0;
   }

   printf("Letter grade: ");

   switch (grade / 10) {
   case 10: case 9:
		printf("A\n");
      break;
   case 8:
		printf("B\n");
      break;
   case 7:
		printf("C\n");
		break;
   case 6:
		printf("D\n");
      break;
   default:
		printf("F\n");
      break;
   }

   return 0;
}
