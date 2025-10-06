#include<stdio.h> 

int main()
{ 
    char cValue = 's';
    int iValue = 11;
   float fValue = 90.75f;
   double dValue = 98.452546;
   
   printf("Adderess of cValue is : %c\n",&cValue);
   printf("Adderess of iValue is : %lu\n",&iValue);
   printf("Adderess of fValue is : %f\n",&fValue);
   printf("Adderess of dValue is : %lf\n",&dValue);


    return 0;
}