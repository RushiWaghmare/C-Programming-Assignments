#include<stdio.h>

double SqftToSqMet (float fDis)
{
    float fSqM = 0.0f;
    float fResult = 0.0f;
    double dResult = 0.0f;

    if (fDis < 0)
    {
        fDis = -fDis;
    }
    
    fSqM = 0.0929;

    fResult = fSqM * fDis;

    //TyepCast

    dResult = (double)fResult;

    return dResult;

}
int main()
{
    float fValue = 0.0f;
    double dRes = 0.0f;

    printf("Enter the value in Square Feet: ");
    scanf("%f", &fValue);

    dRes = SqftToSqMet (fValue);

    printf("Area in  Square Meter is : %f",dRes);

    return 0;
}