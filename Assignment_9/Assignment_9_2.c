#include<stdio.h>

double  AreaRactangle (float fWidht, float fHight )
{   
    float fResult = 0.0f;
    double dResult = 0.0f;
    
    fResult = fWidht * fHight;

    //Typecasting

    dResult = (double)fResult;

    return dResult;

}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRes = 0.0f;

    printf("Enter the Widht of rectangle: ");
    scanf("%f", &fValue1);

    printf("Enter the Height of rectangle: ");
    scanf("%f", &fValue2);

    dRes = AreaRactangle (fValue1,fValue2);
    printf("Area of Rectangle is : %f", dRes);
 
    return 0;
}