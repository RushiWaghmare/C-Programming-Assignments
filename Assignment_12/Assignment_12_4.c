#include<stdio.h>
#include<stdbool.h>

int DigitMulti ( int iValue)
{
    int iDigit = 0;
    int iMulti = 1;

    if( iValue < 0)
    {
        iValue = -iValue;
    }
    
    while( iValue > 0)
    {
        iDigit = iValue % 10;
        iMulti = iMulti * iDigit;
        iValue = iValue / 10;
    }
    return iMulti;
    
}
int main()
{
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    iRes = DigitMulti (iNum);

    printf("Multiplication of digits: %d", iRes);
    
    return 0;
}