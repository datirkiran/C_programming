#include<stdio.h>

struct Demo
{
    int i;
    int j;

};

struct Hello
{
    int no;
    float mark;
    struct Demo dobj;    //Nested

};

int main()
{
    printf("size of hello structure id : %lu\n", sizeof(struct Hello));
   



    return 0;
}