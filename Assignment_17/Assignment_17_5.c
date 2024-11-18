#include<stdio.h>
void Display( int iNo )
{
    int iCnt = 0;
    int iRes = 0;

    for(iCnt = 1; iCnt <= 5; iCnt ++)
    {
        iRes = iCnt  * 4;
        printf("%d\n", iRes);

    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    if(iValue > 0)
    {
        Display (iValue);
    }

    else
    {
        printf("Invalid Number !");
        return -1;
    }

    return 0;
}