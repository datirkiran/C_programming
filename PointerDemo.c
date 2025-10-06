#include <stdio.h>


main()
{
    int iValue = 11;
    char cValue = 'K';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf("Size Of iPtr : %lu\n", sizeof(iPtr));
    printf("Size Of cPtr : %lu\n", sizeof(cPtr));

    return 0;
    
}