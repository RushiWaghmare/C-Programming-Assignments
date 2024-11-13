#include<stdio.h>
#include<stdbool.h>

int Equals2 ( int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit == 2)
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

    iRes = Equals2 (iNum);

    printf("Repitation of 2: %d", iRes);
    
    return 0;
}