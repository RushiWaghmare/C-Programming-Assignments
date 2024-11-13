#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakNo(int Arr[], int iLenght)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }

    if (iCnt == iLenght)
    {
        return false;
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *ptr = NULL;
    bool bRet = false;

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

    bRet = CheakNo ( ptr, iSize);

    if(bRet == true)
    {
        printf("Number 11 is present in givne array\n");
    }
    else
    {
        printf("Number 11 is not present in givne array\n");
    }
   
    free(ptr);

    return 0;
}