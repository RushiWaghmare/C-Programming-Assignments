/*Enter number of Rows:
4
Enter number of Columns:
5
Output:

a   b   c   d   e
1   2   3   4   5
a   b   c   d   e
1   2   3   4   5



*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cCh = '\0' ;
    int iNo = 0;

    cCh = 'a';
    
    for(i = 1; i <= iRow;  i ++)
    {   
        if ( i % 2 == 1)
        {
            cCh = 'a';
        }
        
        for(j = 1; j <= iCol; j ++)
        {  
            if( i % 2 == 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%c\t", cCh);
                cCh ++;
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