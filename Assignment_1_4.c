#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Cheak(int iNo)
{
    if (iNo%5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL Bvalue = FALSE;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Bvalue = Cheak(iValue);

    if( Bvalue == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;

}