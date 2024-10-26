#include<stdio.h>

int Display(int iValue)
{   
    int iNo = 0, iMulti = 1;
    
    for (iNo = 1; iNo <= iValue; iNo++)
    {
       if(iNo %2 == 0)
        {
            iMulti = iMulti * iNo;
        }
    }
    return iMulti;
}
int main()
{   
    int iNum = 0;
    int iRes = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    iRes = Display(iNum);

    printf("Even Factorial of Number: %d", iRes);

    return 0;

}