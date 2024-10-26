#include<stdio.h>

void Display( int iValue)
{   
    int iNum = - iValue;

    while ( iNum <= iValue)
    {
        printf("%d\t", iNum);
        iNum ++;
    }
}
int main()
{   
    int iNo = 0;

    printf("Enter Number: ");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}