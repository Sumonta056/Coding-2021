#include <stdio.h>
#include <conio.h>
// Example for getche() in C
int main()
{
    // char c;
    // c = getche();
    // printf("%c", c);
    // return 0;
    printf("\n%c", getche());

    //     Like getch(), this is also a non-standard function present in conio.h. It reads a single character from the keyboard and
    //      displays immediately on output screen without waiting for enter key.

    //     Input: g(without enter key as it is not buffered)
    // Output: Program terminates immediately.
    //         But when you use DOS shell in Turbo C,
    //         double g, i.e., 'gg'

    return 0;
}
