#include<stdio.h>

double  AreaCircle (float fRad )
{   
    float fPie = 3.14;
    float fResult = 0.0f;
    double dResult = 0.0f;
    
    fResult = fPie * fRad * fRad;

    //Typecasting

    dResult = (double)fResult;

    return dResult;

}
int main()
{
    float fValue = 0.0f;
    double dRes = 0.0f;

    printf("Enter the Radius of Circle: ");
    scanf("%f", &fValue);

    dRes = AreaCircle (fValue);
    printf("Area of Circle is : %f", dRes);
 
    return 0;
}