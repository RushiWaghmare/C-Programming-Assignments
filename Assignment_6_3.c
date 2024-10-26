#include<stdio.h>

int Display(int iValue)
{   
    int iNo = 0;
    int iMulti = 1;
    
    if(iValue <0 )
    {
        iValue = -iValue;
    }
    
    for(iNo =1; iNo <= iValue; iNo ++)
    {
            iMulti = iMulti * iNo;
    }
    return iMulti;
}
int main()
{   
    int iNum = 0;
    int iRes = 0;
    
    printf("Enter Number:");
    scanf("%d", &iNum);

    iRes = Display(iNum);
    
    printf("%d", iRes);

    return 0;
}