#include<stdio.h>
#include<stdbool.h>

int CountDigit ( int iValue)
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
        if( iDigit >=3 && iDigit <= 7 )
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

    iRes = CountDigit (iNum);

    printf("Count of digits between 3 and 7: %d", iRes);
    
    return 0;
}