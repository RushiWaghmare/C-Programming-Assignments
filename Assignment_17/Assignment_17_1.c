#include<stdio.h>
#include<stdlib.h>

void Display (int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$   *\t");
    }
}

int main()
{   
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    if(iValue > 0)
    {
        Display(iValue);
    }
    else
    {
        printf("Invalid Number !");
        return -1;
    }


    return 0;
}