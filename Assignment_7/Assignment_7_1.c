#include<stdio.h>

void Display(int iValue)
{   
    int iNo1 = 0;
    int iNo2 = 0;

    for (iNo1 = 1; iNo1 <= iValue; iNo1++)
    {
        printf("*\t");
    }

    for (iNo2 = 1; iNo2 <= iValue; iNo2++)
    {
        printf("#\t");
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