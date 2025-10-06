#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    char ch2;
    float f;
    int j;
};
int main()
{
    printf(" Size of structure is :%lu\n",sizeof (struct Demo));



    return 0;
}