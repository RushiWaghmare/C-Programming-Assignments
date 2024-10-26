#include<stdio.h>

double FtoC(float fFahrenheit)
{   
    float fCelsius = 0.0f;
    double dCelsius = 0.0f;

    
    fCelsius = (fFahrenheit - 32 ) * (5.0/9.0);

    dCelsius = (double)fCelsius;

    return dCelsius;
    
}
int main()
{   
    float fNum = 0.0f, fRes = 0.0f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fNum);

    fRes = FtoC(fNum);

    printf("\nFahrenheit to Celsius: %lf", fRes);

    return 0;

}