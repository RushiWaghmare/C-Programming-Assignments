/*Enter number of Rows:
3
Enter number of Columns:
5

4       4       4       4
3       3       3       3
2       2       2       2
1       1       1       1

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, i = 0,j = 0;
    int iValue = 0;

    iValue = iRow;
    for(i = 1; i<= iRow; i++)
    {
        for (j = 1; j <= iCol ; j ++)
        {
            printf("%d\t", iValue);
        }
        printf("\n");
        iValue --;
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