#include<stdio.h>

int Display(int iRadius)
{
    int iPie = 3.14;
    int iArea = 0;

    iArea = iPie * iRadius * iRadius;

    return iArea;

}
int main()
{   
    int iNum = 0;
    int iRes = 0;

    printf("Enter Radius: ");
    scanf("%d", &iNum);

    iRes = Display (iNum);

    printf("Area of Circle: %d", iRes);

    return 0;

}