#include<stdio.h>
#include<stdlib.h>

int SmallNo(int Arr[], int iLenght)
{
    int iCnt = 0,iMin= 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = SmallNo(ptr, iSize);
    printf("Smallest number form array is: %d", iRet);


    return 0;
}