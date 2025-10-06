#include<stdio.h>

struct demo
{
    int i;
    char ch;
    float f;
    int j;
};
int main()
{
    printf(" Size of structure is :%lu\n",sizeof(struct demo));



    return 0;
}