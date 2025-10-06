#include<stdio.h>

int main()
{
    int iNO1 = 10;
    const int iNO2 = 20;


    // Below line generates errors
    iNO1++;      //iNO = iNO1 + 1;
    iNO2++;     //iNo = iNO2 + 1;
    iNO2 = 30;

    return 0;
}