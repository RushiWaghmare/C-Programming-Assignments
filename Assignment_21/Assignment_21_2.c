// Input: Row = 4, Col = 4 upper 65 lower 97 to 122
// Output:
/*
Enter number of Rows:
4
Enter number of Columns:
4

A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int UPPER = 65;
    int LOWER = 97;

    for(i = 0 ; i < iRow; i ++)
    {
        for(j = 0; j < iCol ; j ++)
        {
            if( i % 2 == 0)
            {
                printf("%c\t", (char)(UPPER + j));
            }

            else
            {
                printf("%c\t", (char)(LOWER + j));
            }
            
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