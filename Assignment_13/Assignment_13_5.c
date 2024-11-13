#include<stdio.h>
#include<stdlib.h>

void DivBy5(int Arr[], int iLenght)
{
    int iCnt = 0;

    printf("The elements Multiple of 11 form given array are:\n");
    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {  
        if(Arr[iCnt] % 11 == 0) 
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
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

    DivBy5(ptr,iSize);
    
    free(ptr);
    
    return 0;
}