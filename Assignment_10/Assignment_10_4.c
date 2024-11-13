#include<stdio.h>

int DisplayEvenSum( int iStart, int iEnd)
{   
    int iCnt = 0;
    int iSum = 0;
    
    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");
        return 0;

    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }

    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRes = 0;

    printf("Enter the starting number: ");
    scanf("%d", &iValue1);

    printf("Enter the Ending number: ");
    scanf("%d", &iValue2);

    iRes = DisplayEvenSum(iValue1, iValue2);

    if (iRes != 0)
    {
        printf("The Addition of all Even numbers from given range: %d", iRes);
    }
    

    return 0;

}