#include<stdio.h>

int NonFactSum(int iValue)
{   
    int iNo = 0;
    int iSum = 0;

    if ( iValue < 0 )
    {
        iValue = - iValue;
    }
    
    for (iNo = 1; iNo <= iValue; iNo ++)
    {
        if(iValue % iNo != 0)
        {
           printf("%d\n", iNo);

           iSum = iSum + iNo;
        }
    }

    return iSum;

}
int main()
{
    int iNum = 0;
    int iRes = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNum);

    iRes = NonFactSum(iNum);

    printf("Summation of all Non-factors of Given number: %d", iRes);

    return 0;
}