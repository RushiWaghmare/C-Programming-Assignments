#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheakNo( int Arr[], int iLenght, int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if (iCnt == iLenght)
    {
        return -1;
    }
    else 
    {
        return iCnt;
    }

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
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the number you want to search:\n");
    scanf("%d", &iNum);

    iRet = CheakNo(ptr, iSize, iNum);
    
    //printf("The Index of number %d in given array is: %d\n",iNum,iRet);

    if (iRet == -1)
    {
        printf("Number is not present\n");
    }
    else
    {
        printf("First occurance of number is %d\n", iRet);
    }
    free(ptr);
    
    return 0;
}