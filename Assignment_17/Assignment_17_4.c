#include<stdio.h>
void Display( int iNo )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 == 1)
        {
            printf("%d\t", iCnt);
        }
        
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