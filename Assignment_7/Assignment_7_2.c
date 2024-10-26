#include<stdio.h>

int Display(int iValue)
{
    int iRupees = 0;

    iRupees = 70;
    return iValue * iRupees;

}
int main()
{   
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number of USD: ");
    scanf("%d", &iNum);

    iRes = Display(iNum);

    printf("Rupess: %d", iRes);

    return 0;
    
}