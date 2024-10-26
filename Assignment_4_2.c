#include<stdio.h>

int RevFact(int iValue)
{   
    int iNo = 0;
    int iValue2 = 0;

    if ( iValue <0 )
    {
        iValue = - iValue;
    }
    
    for (iValue2 = iValue; iValue2 >= 0; iValue2 --)
    {
        if(iValue % iValue2 == 0)
        {   
           printf("%d\n", iValue2);
        }
    }


}
int main()
{
    int iNum = 0, iNum2 = 0;
    int iRes = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNum);

    printf("All decreasing order factors of given number: %d", iRes);

    RevFact(iNum);

    return 0;
}