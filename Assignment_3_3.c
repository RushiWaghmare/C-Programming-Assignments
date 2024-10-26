#include<stdio.h>

int Display(int iValue)
{   
    int iNo = 0;
    if ( iValue <0 )
    {
        iValue = - iValue;
    }
    
    for ( iNo = 1; iNo <= iValue; iNo ++)
    {
        if(iValue % iNo == 0)
        {
            if(iNo %2 == 0)
            {
                printf("%d\n", iNo);
            }
        }
    }

}
int main()
{
    int iNum = 0;

    printf("Enter the Number");
    scanf("%d", &iNum);

    Display(iNum);

    return 0;
}