/*Enter number of Rows:
4
Enter number of Columns:
4
Output:

2 4 6 8 10
1 3 5 7 9 
2 4 6 8 10
1 3 5 7 9  


*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iEven = 0, iOdd = 0;

    iEven = 2, iOdd = 1;
    
    for(i = 1; i <= iRow;  i ++)
    {
        if( i % 2 == 0)
            {
                iEven = 2;
            }

        else
        {
            iOdd = 1;
        }
              


        for(j = 1; j <= iCol; j ++)
        {  
             if(i % 2 == 1)
                {
                    printf("%d\t", iEven);
                    iEven = iEven +2;
                }

                else
                {
                    printf("%d\t", iOdd);
                    iOdd = iOdd + 2;
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