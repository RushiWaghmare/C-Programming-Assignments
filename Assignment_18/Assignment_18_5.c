#include<stdio.h>

int EvenFactorial(int iNo)
{
    int OddMulti = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            OddMulti = OddMulti * iCnt;
        }
    }

    int EvenMulti = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            EvenMulti = EvenMulti * iCnt;
        }
    }
    return  EvenMulti - OddMulti;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Fatorial %d", iRet);
    
    return 0;
}