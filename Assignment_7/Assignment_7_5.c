#include<stdio.h>

int Display(int iValue)
{   
    int iNo = 0, iMulti1 = 1, iMulti2 =1, iDiff = 0;
    
    for (iNo = 1; iNo <= iValue; iNo++)
    {
       if(iNo %2 == 0)
        {
            iMulti1 = iMulti1 * iNo;
        }
    }

    for (iNo = 1; iNo <= iValue; iNo++)
    {
       if(iNo %2 != 0)
        {
            iMulti2 = iMulti2 * iNo;
        }
    }

    iDiff = iMulti1 - iMulti2;

    return iDiff;

    
}
int main()
{   
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    iRes = Display(iNum);

    printf("Difference between factorial of even and odd number: %d", iRes);

    return 0;

}