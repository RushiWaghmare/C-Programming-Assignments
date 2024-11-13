#include<stdio.h>
#include<stdlib.h>

int LargeSmallDiff(int Arr[], int iLenght)
{
    int iCnt = 0, iMax = 0, iMin = 0;
    int iDiff = 0;

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iDiff = (iMax - iMin);
}
int main()
{   
    int iSize = 0, iCnt = 0, *ptr = NULL;
    int iRet = 0 ;

    printf("Enter the size of array:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(iSize > 0)
    {
        printf("Enter the elements:\n");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            scanf("%d", &ptr[iCnt]);
        }
    }
    else
    {
        printf("Invalid input\n");
        return -1;
    }

    iRet = LargeSmallDiff(ptr, iSize);
    printf("Difference between Largest number and Smallest number form array is: %d", iRet);


    return 0;
}