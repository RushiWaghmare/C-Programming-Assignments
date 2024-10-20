#include<stdio.h>

void Display(int iValue)
{   
    if(iValue < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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