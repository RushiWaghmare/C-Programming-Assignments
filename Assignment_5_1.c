#include<stdio.h>

void Display(int iValue)
{   
    int iCount = 0;

    for(iCount = 1; iCount <= iValue; iCount++)
    {
        printf("$\t *\t");
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