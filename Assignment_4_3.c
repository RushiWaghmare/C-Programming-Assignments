#include<stdio.h>

int NonFact(int iValue)
{   
    int iNo = 0;

    if ( iValue < 0 )
    {
        iValue = - iValue;
    }
    
    for (iNo = 1; iNo <= iValue; iNo ++)
    {
        if(iValue % iNo != 0)
        {
           printf("%d\n", iNo);

        }
    }

}
int main()
{
    int iNum = 0, iNum2 = 0;
    int iRes = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNum);

    printf("All non factors of given number: ")
    NonFact(iNum);

    


    return 0;
}