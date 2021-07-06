#include <stdio.h>
#include<conio.h>

int main()

{

    char ch;
    printf("Enter Your Sentence \n");
    while (1)
    {
        ch = getch();
        if ((int)ch == 13)
            break;
        printf("%c", ch);
    }
}
