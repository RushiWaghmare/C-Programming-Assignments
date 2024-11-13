#include<stdio.h>
#include<stdbool.h>

int CountOdd ( int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    if( iValue < 0)
    {
        iValue = -iValue;
    }
    
    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit % 2 == 1 )
        {
            iCount ++;
        }
        iValue = iValue / 10;
    }
    return iCount;
    
}
int main()
{
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    iRes = CountOdd(iNum);

    printf("Count of Odd digits: %d", iRes);
    
    return 0;
}