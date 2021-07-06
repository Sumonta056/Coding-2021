// Example for getch() in C
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("%c", getch());
    return 0;

    //     Input:  g (Without enter key)
    // Output: Program terminates immediately.
    //         But when you use DOS shell in Turbo C,
    //         it shows a single g, i.e., 'g'
}
