#include <stdio.h>


main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    //p + q;   // not allowed
    p = p + 3;  // allowed
    printf("Data pointed by p is : %d\n",*p);   //111



    return 0;
    
}