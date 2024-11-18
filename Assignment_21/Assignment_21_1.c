// Input: Row = 4, Col = 4
// Output:
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int UPPER = 65;

    for(i = 0 ; i < iRow; i ++)
    {
        for(j = 0; j < iCol ; j ++)
        {
            printf("%c\t", (char)(UPPER + j));
        }
        
        printf("\n");
    }
}
int  main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}