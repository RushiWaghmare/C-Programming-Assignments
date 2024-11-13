#include<stdio.h>
#include<stdlib.h>

int FreqOfEven(int Arr[], int iLenght)
{
    int iCnt = 0, iFreq = 0;

    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFreq ++;
        }
    }

    return iFreq;

}
int main()
{
    int iCnt = 0, iSize = 0;
    int *ptr = NULL, iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iSize; iCnt ++ )
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = FreqOfEven(ptr, iSize);

    printf("Frequeny of Even numbers form array is: %d", iRet);

    free(ptr);

    return 0;
}