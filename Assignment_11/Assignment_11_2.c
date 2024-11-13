#include<stdio.h>
#include<stdbool.h>

bool FindZero ( int iValue)
{
    int iDigit = 0;

    while( iValue > 0)
    {
        iDigit = iValue % 10;
        if( iDigit == 0)
        {
            return true;
        }
        iValue = iValue / 10;
    }
    return false;
}
int main()
{
    int iNum = 0;
    bool bRes = false;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    bRes = FindZero(iNum);

    if(bRes == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("It doesn't Contains Zero");
    }

    return 0;
}