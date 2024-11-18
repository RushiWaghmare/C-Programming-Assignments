#include<stdio.h>
void Display(int iNo)
{   
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt ++ )
    {
        printf("%d  *\t", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if( iValue > 0)
    {
        Display(iValue);
    }
    else
    {
        printf("Invlid input !");
    }


    return 0 ;
}