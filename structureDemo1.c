#include<stdio.h>

struct demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct demo obj;

     printf("Size of Demo is : %lu\n",sizeof(struct demo));     //12  
     printf("size of object is : %lu\n",sizeof(obj));           //12

    return 0;
}