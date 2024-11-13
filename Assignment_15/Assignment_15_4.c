#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLenght, int iFirst, int iLast)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt ++)
    {
        if( iFirst <= Arr[iCnt] && Arr[iCnt] <= iLast )
        {
            printf("%d\t",Arr[iCnt]);
            
        }
    }
}

int main()
{
    int iNum = 0, iSize = 0;
    int *ptr = NULL, iCnt = 0;
    int iRet = 0;
    int iStart = 0, iEnd = 0;

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

    printf("Enter the range of numbers you want to display: \n");
    printf("Enter First Number: \n");
    scanf("%d", &iStart);
    printf("Enter Second Number: \n");
    scanf("%d", &iEnd);

    if(iStar > iEnd)
    {
        printf("Invalid input ! ");
        return -1;
    }
    printf("The values in range %d to %d are: ", iStart, iEnd);
    Display(ptr, iSize, iStart, iEnd);
    
    free(ptr);
    
    return 0;
}