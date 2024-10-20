#include<stdio.h>

void Display(int iValue)
{   
    int iCnt = 0;

    while( iValue > iCnt)
    {
        printf("*");
        iValue --;

    }
}
int main()
{
    int iNo = 0;

    printf("Enter Number");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}