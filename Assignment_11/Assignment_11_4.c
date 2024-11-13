#include<stdio.h>
#include<stdbool.h>

int Equals4 ( int iValue)
{
    int iDigit = 0;
    int iCount = 0;

    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit == 4)
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

    iRes = Equals4(iNum);

    printf("Repitation of 4: %d", iRes);
    
    return 0;
}