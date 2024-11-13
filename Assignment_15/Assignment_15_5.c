#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLenght)
{
    int iCnt = 0, iProduct = 1;
    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }

    return iProduct;
}

int main()
{
    int iNum = 0, iSize = 0;
    int *ptr = NULL, iCnt = 0;
    int iRet = 0;

    printf("Enter the Size of Array: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Not able to allocate Memory\n");
        return -1;
    }

    printf("Enter the %d elements:\n",iSize);
    
    if(iSize > 0)
    {
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            scanf("%d", &ptr[iCnt]);
        }
    }

    else
    {
        printf("Invalid Size");
        return -1;

    }
    
    iRet =  Product(ptr, iSize);
    printf("Product of all odd numbers from array is: %d", iRet);

    free(ptr);
    
    return 0;
}