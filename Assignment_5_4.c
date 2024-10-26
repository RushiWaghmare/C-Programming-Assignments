#include<stdio.h>

void Display(int iValue)
{   
    int iNo = 0;

    for(iNo = 1; iNo <= iValue; iNo++)
    {
        if(iNo %2 != 0)
        {
            printf("%d\t", iNo);
        }
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