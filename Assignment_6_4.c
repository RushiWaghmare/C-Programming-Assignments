#include<stdio.h>

void Display(int iValue)
{   
    int iNo = 0;
    int res = 0;

    if(iValue <0 )
    {
        iValue = -iValue;
    }
    
    for(iNo = 1; iNo <= 10; iNo++)
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
    
    Display(iNum);

    return 0;
}