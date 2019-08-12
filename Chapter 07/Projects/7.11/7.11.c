 #include <stdio.h>

 int main(void)
 {
    char ch, initial;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ') {
       ;
    }

    initial = ch;

    while ((ch = getchar()) != ' ') {
       ;
    }

    while ((ch = getchar()) != '\n') {
         putchar(ch);
    }

     printf(", %c.\n", initial);

    return 0;
 }
