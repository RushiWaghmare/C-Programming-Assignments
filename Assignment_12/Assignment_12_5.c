#include<stdio.h>
#include<stdbool.h>

int DiffDigit ( int iValue)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iSum = 0;

    if( iValue < 0)
    {
        iValue = -iValue;
    }
    
    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit % 2 == 0 )
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iValue = iValue / 10;
    }

    printf("Sum of Even Digits: %d\n",iEven);
    printf("Sum of Odd Digits: %d\n", iOdd);

    iSum = iEven - iOdd;

    return iSum;
    
}
int main()
{
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    iRes = DiffDigit(iNum);

    printf("Diff between sum of Even digits and Odd digits: %d", iRes);
    
    return 0;
}