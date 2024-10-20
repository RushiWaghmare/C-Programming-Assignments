#include<stdio.h>

void Display(int iNo, int iFreq)
{
    int i = 0;

    for(i = 1; i <= iFreq; i++)
    {
        printf("%d\n", iNo);
    }
}
int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue);

    printf("Enter second number: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;

}