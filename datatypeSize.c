#include <stdio.h>

int main()
{
   char cValue = 's';
   int iValue = 11;
   float fValue = 90.75f;
   double dValue = 98.452546;

   printf("size of character is : %lu\n", sizeof(cValue));
   printf("size of integer is : %lu\n", sizeof(iValue));
   printf("size of float is : %lu\n", sizeof(fValue));
   printf("size of double is : %lu\n", sizeof(dValue));

   return 0;
}
   