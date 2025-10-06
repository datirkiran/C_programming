#include <stdio.h>

int main()
{
    int Arr [4] = {10, 20, 30, 40 };

    printf("Arr : %lu\n", Arr);               //6422288
    printf("&Arr : %lu\n", &Arr);             //6422288
    printf("&Arr[0] : %lu\n", &Arr[0]);       //6422288

return 0;

}