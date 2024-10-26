#include<stdio.h>

int Display(int iCount)
{   
    int iValue = 0;

    for(iValue = 1; iValue <= iCount; iValue ++)
    {
        printf("%d\t", iValue);
    }
}
int main()
{   
    int iNum = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    Display(iNum);

    return 0;
}