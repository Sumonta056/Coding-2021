#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
bool checkUgly(int num){

    while(num % 2 == 0)num/=2;
    while(num % 3 == 0)num/=3;
    while(num % 5 == 0)num/=5;

    return (num == 1) ? true : false;
}
int main(){


    int uglyNumber = 0,cnt = 1;
    for(int i = 1; cnt <= 1500;i++){
        uglyNumber++;
        if(checkUgly(uglyNumber))cnt++;
    }
    printf("The 1500'th ugly number is %d.\n",uglyNumber);
    

   // printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
