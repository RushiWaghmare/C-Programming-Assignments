#include<stdio.h>

void Display(int iValue)
{   
    int iCnt = 0;

    while(iCnt < iValue)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iNo = 0;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;

}
