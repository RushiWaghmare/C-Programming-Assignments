#include<stdio.h>
#include<stdbool.h>

int LessThan6  ( int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit < 6 )
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

    iRes = LessThan6 (iNum);

    printf("Count of Digit less than 6: %d", iRes);
    
    return 0;
}