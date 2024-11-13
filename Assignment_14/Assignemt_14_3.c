#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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

   
    free(ptr);

    return 0;
}