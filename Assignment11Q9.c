#include <stdio.h>

int main()
{
float arr[] = {10.3f,43.4f,45.34f,234.45f};
float *p = NULL;
float *q = NULL;

p = arr;
q = &(arr[3]);

printf("%d\n",p);
printf("%d\n",q);
printf("%f\n",*q);
printf("%f\n",*p);
printf("%f\n",*(p+2));
printf("%f\n",*(p+1));
printf("%f\n",p[1]);
printf("%f\n",(2+arr));
printf("%f\n",0[arr]);
printf("%f\n",q-p);
printf("%f\n",(q-2));

return 0;

}