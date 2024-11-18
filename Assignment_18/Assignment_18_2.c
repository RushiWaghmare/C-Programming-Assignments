#include<stdio.h>

int Pattern(int iNo)
{
    int iDoller = 70;
    return iDoller * iNo;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Doller:\n");
    scanf("%d", &iValue);

    iRet = Pattern(iValue);
    printf("Rupees: %d", iRet);
    
    return 0;
}