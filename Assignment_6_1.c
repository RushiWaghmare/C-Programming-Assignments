#include<stdio.h>

void Display(int iValue)
{   
    if(iValue < 50)
    {
        printf("Small");
    }
    else if(iValue >50 && iValue < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
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