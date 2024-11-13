#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheakNo(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0, iFreq = 0;
    
    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq ++;
        }
    }

   return iFreq;
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *ptr = NULL;
    int iRet = 0, iValue = 0;

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

    printf("Enter the elements want to search:\n");
    scanf("%d", &iValue);

    iRet = CheakNo ( ptr, iSize, iValue);

    printf("The Frequecny of number %d is: %d",iValue, iRet);

    free(ptr);

    return 0;
}