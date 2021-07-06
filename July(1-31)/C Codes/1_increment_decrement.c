#include <stdio.h>

int main()
{
    int a = 5;

    printf("%d %d %d", a++, a++, ++a);
}

// See printf() uses stack. Means your last argument is treated first then 2nd last argument at second place…. first argument is treated at last.

// Then second thing to remember is postfix increment/decrement has higher priority than prefix. This simply means that postfix will assign its value first then increment and prefix will increment first then assign its value just before that statement is completed.

// Now let me show you how that statement actually executed.

// int a = 5;

// printf ("%d %d %d", a++, a++, ++a);

// Step 1: last argument is treated first. ++a becomes 6 but that last is not assigned value of 6 yet. It’s waiting for whole statement to execute then assign value. Yet we get value of a as 6

// Step 2: Now its time to treat 2nd or I can say 2nd last argument. Told you post increment instantly assigns value then do increment operation. So 2nd argument gets value assigned to 6. Increment is now done and value of a turns out to be 7.

// Step 3: that 7 value is assigned to first argument and it turns value of a to 8. Now that all the operations are performed so it’s time for pre-increment to do its left out work(assignment of value). So last argument gets value of 8.

// So answer of your query is : 7 6 8

// And one more thing to remember:The answer may vary compiler to compiler. Many compiler have different implementations of printf(). So my answer is strict to gcc.