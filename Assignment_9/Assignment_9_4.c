#include<stdio.h>

double TempChange (float fFer)
{
    float fCelsius = 0.0f;
    double dCelsius = 0.0f;

    fCelsius = (fFer - 32 ) * (5.0 / 9.0) ;
    
    // Typecasting

    dCelsius = (double)fCelsius;

    return dCelsius;

}
int main()
{
    float fValue = 0.0f;
    double dRes = 0.0f;

    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRes = TempChange( fValue );
    
    printf("Distance in Meter is : %f",dRes);

    return 0;
}