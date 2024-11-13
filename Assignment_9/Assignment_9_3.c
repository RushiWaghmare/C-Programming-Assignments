#include<stdio.h>

int KMtoMeter (int iKM)
{
    int iMeter = 1000;
    int iResult = 0;

    if (iKM < 0)
    {
        iKM = - iKM;
    }

    iResult = iKM * iMeter;
    
    return iResult;

}
int main()
{
    int iValue = 0;
    int iRes = 0;

    printf("Enter the Distance is KM: ");
    scanf("%d", &iValue);

    iRes = KMtoMeter (iValue);

    printf("Distance in Meter is : %d",iRes);

    return 0;
}