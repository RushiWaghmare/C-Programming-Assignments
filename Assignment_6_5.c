#include<stdio.h>

int RevTable(int iValue)
{   
    int iNo = 0;
    int res = 0;

    if(iValue <0 )
    {
        iValue = -iValue;
    }

    for(iNo = 10; iNo > 0; iNo--)
    {
       res = iValue * iNo;
       printf("%d\t", res);
    }
}
int main()
{
    int iNum = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);
    
    RevTable(iNum);

    return 0;
}