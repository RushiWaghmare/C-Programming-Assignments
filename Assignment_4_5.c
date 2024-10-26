#include<stdio.h>

int NonFactSum(int iValue)
{   
    int iNo = 0;
    int iDiff = 0;
    int iSum_1 = 0;
    int iSum_2 = 0;

    if ( iValue < 0 )
    {
        iValue = - iValue;
    }
    
    for (iNo = 1; iNo <= iValue; iNo ++)
    {
        if(iValue % iNo == 0)
        {
           printf("%d\n", iNo);

           iSum_1 = iSum_1 + iNo;
        }
    }

    for (iNo = 1; iNo <= iValue; iNo ++)
    {
        if(iValue % iNo != 0)
        {
           printf("%d\n", iNo);

           iSum_2 = iSum_2 + iNo;
        }
    }

    iDiff = iSum_1 - iSum_2;
    
    return iDiff;

}
int main()
{
    int iNum = 0;
    int iRes = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNum);

    iRes = NonFactSum(iNum);
    
    if (iRes < 0)
    {
        printf("Actual difference between summation of all factors and non-factors is: %d\n", iRes);
        
        iRes = - iRes;
        printf("Final difference between summation of all factors and non-factors is: %d\n", iRes);
    }
    else 
    {
        printf("Final difference between summation of all factors and non-factors is: %d\n", iRes);
    }
    
    return 0;
}