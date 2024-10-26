#include<stdio.h>

int Display (int iHeight, int iWidth)
{
    int iArea = 0;

    iArea = iHeight * iWidth;

    return iArea;
}
int main()
{   
    int iNum1 = 0, iNum2 = 0, iRes = 0;

    printf("Enter the Height for rectangle: ");
    scanf("%d", &iNum1);

    printf("Enter the Width for rectangle: ");
    scanf("%d", &iNum2);

    iRes = Display (iNum1, iNum2);

    printf("Area of Rectangle: %d", iRes);

    return 0;
    
}