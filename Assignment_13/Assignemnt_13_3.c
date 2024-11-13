#include<stdio.h>
#include<stdlib.h>

void DivBy5(int Arr[], int iLenght)
{
    int iCnt = 0;

    printf("The elements divisible by 5  and Even form given array are:\n");
    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {  
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] %2 == 0) 
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
    

    return 0;
}