#include<stdio.h>
#include<stdlib.h>

int DiffOfSum(int Arr[], int iLenght)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;

    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenSum = iEvenSum + iCnt;
        }
    }

    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(iCnt % 2 == 1)
        {
            iOddSum = iOddSum + iCnt;
        }
    }
    
    return (iEvenSum - iOddSum);
}

int main()
{
    int iNo = 0, iRet = 0;
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter the Size of Array: \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = DiffOfSum(ptr,iSize);
    printf("The Diffrence between summation of even elements and odd elements from givne array is: %d\n", iRet);

    free(ptr);

    return 0;
}