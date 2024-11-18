#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("#\t");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}