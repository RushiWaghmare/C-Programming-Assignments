#include<stdio.h.>
/*
input: Row = 4; col = 4
*   *   *   *
*       *   *
*   *       *
*   *   *   *
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {   
            if( i == j)
            {
                printf("%d\t", j);
            }

            else if ( (i == 1 )|| (i == iRow))
            {
                printf("%d\t", j);
            }

            else if((j ==1 ) || ( j == iCol))
            {
                printf("%d\t", j);
            }

            else
            {
                printf(" \t");
            }

    
        }
        
        printf("\n");
        
    }

    printf("\n");
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns:");
    scanf("%d %d", &iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
