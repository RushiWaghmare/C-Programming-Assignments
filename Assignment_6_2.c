#include<stdio.h>

void Display(int iValue)
{   

    if ( iValue > 9 )
    {
        printf("Invalid Number");
    }
    
    else if( iValue == 0 )
    {
        printf("Zero");

    }

    else if( iValue == 1 )
    {
        printf("One");

    }

    else if( iValue == 2 )
    {
        printf("Two");

    }

    else if( iValue == 3 )
    {
        printf("Three");

    }

    else if( iValue == 4 )
    {
        printf("Four");

    }

    else if( iValue == 5 )
    {
        printf("Five");

    }

    else if( iValue == 6 )
    {
        printf("Six");

    }

    else if( iValue == 7 )
    {
        printf("Seven");

    }

    else if( iValue == 8 )
    {
        printf("Eight");

    }

    else if( iValue == 9 )
    {
        printf("Nine");

    }

}
int main()
{
    int iNum = 0;

    printf("Enter Number: ");
    scanf("%d", &iNum);

    Display(iNum);

    return 0;
}