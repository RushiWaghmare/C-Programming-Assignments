#include<stdio.h>

int DisplayEvenNum( int iStart, int iEnd)
{   
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");

    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        if((iCnt % 2 ) == 0)
        {
            printf("%d\t", iCnt);
        }
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

    DisplayEvenNum(iValue1, iValue2);

    return 0;

}