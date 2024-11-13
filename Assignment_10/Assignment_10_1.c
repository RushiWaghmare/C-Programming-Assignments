#include<stdio.h>

int DisplayNum( int iStart, int iEnd)
{   
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");

    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        printf("%d\t", iCnt);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting number: ");
    scanf("%d", &iValue1);

    printf("Enter the Ending number: ");
    scanf("%d", &iValue2);

    DisplayNum(iValue1, iValue2);

    return 0;

}