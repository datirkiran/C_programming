#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;
    int **q = &p;
    int ***a = &q;
    int ****b = &a;
    int *****c = &b;

    printf("%d\n",no);    //11
    printf("%d\n",*p);    //11
    printf("%d\n",**q);    //11
    printf("%d\n",***a);    //11
    printf("%d\n",****b);    //11
    printf("%d\n",*****c);    //11


    return 0;
}