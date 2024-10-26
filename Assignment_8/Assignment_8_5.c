#include<stdio.h>

double SqFtoSqM(int iNum)
{
    float fValue = 0.0f;
    float fSqFeet = 0.0f;
    float fNum = 0.0f;
    double dSqFeet = 0.0f;

    fValue = 0.0929;
    fNum = (float)iNum;

    fSqFeet = fValue * fNum;

    dSqFeet = (double)fSqFeet;

    return dSqFeet;

}

int main()
{   
    int iNum = 0;
    double dRes = 0.0f;

    printf("Enter the area in Square feet: ");
    scanf("%d", &iNum);

    dRes = SqFtoSqM(iNum);

    printf("Squre meter is; %lf", dRes);

    return 0;
    
}