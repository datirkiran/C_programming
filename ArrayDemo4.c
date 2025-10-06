#include <stdio.h>

int main()
{
    int Arr [5] ={10, 20, 30, 40, 50};

    printf("Size of Arr : %lu \n",sizeof(Arr));
    printf("Arr : %lu \n",Arr);
    printf("&Arr : %lu \n",&Arr);
    
    printf("Arr + 1 : %lu \n",Arr + 1);
    printf("&Arr + 1: %lu \n",&Arr + 1);

    return 0;
}