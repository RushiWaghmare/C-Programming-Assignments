#include<stdio.h>

int KMtoMeter(int iKM)
{   
    int iMeter = 0, iValue = 0;

    iValue = 1000;

    iMeter  = iValue * iKM;

    return iMeter;
}
int main()
{   
    int iNum = 0, iRes = 0;

    printf("Enter distance in Kilometer: ");
    scanf("%d", &iNum);

    iRes = KMtoMeter(iNum);

    printf("\nKM to Meter: %d", iRes);

    return 0;

}