#include<stdio.h>

void Display(int iFreq)
{
    int iCount = 0;
    int iNum = 2;

    while( iCount < iFreq)
    {
        printf("%d\n",iNum);
        iNum = iNum + 2;
        iCount ++;
    }

}
int main()
{   
    int iValue;

    printf("Enter Number");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}