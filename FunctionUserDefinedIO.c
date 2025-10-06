# include <stdio.h>

int Addition (int iNo1, int iNo2)
{
    int iSum=0;
    iSum=iNo1 + iNo2;
    return iSum;
}

int main()
{
    int value1=0, int value2=0, Ans=0;

    printf("Enter First Value:");
    scanf("%d",& value1);

     printf("Enter Second Value:");
     scanf("%d",& value2);

     Ans=Addition (value1, value2);
     printf("Addition is %d\n", Ans);

     return 0;


}