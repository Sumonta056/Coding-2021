#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    // ! switch cannot take float double type data
    // ! any kind of expression outside case will not be excuble

    switch(t) // * any kind of expression
    {
        
        // * t = t+1
        // ? this will not work
        
        case 1 :
        printf("1\n");
        break;// * if u dont use break it will continue like loop

        case 2 :
        printf("2\n");
        break;

        default:
        printf("None\n");
        break;


    }


}