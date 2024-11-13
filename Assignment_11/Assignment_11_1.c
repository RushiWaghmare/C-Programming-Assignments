#include<stdio.h>

int ReverseDigit(int iNum)
{   
    int iDigit = 0;

    while( iNum > 0 )
    {
        iDigit = iNum % 10;
        printf("%d\n", iDigit);
        iNum = iNum / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    ReverseDigit(iValue);

    return 0;

}