#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLenght)
{
    int iCnt = 0, iDigit = 0;


    for (iCnt = 0; iCnt < iLenght; iCnt ++)
    {   
        int iTemp = 0;
        iTemp = Arr[iCnt];
        int iFreq = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iFreq ++;
            iTemp = iTemp / 10;
        }

        if(iFreq == 3)
        {
                printf("%d", Arr[iCnt]);
        }

        printf("\n");

    }
    

}

int main()
{
    int iCnt = 0, *ptr = NULL;
    int iSize = 0;

    printf("Enter the size of Array:\n");
    scanf("%d", &iSize);

    if(iSize > 0)
    {
        ptr = (int *)malloc(iSize * sizeof(int));
    }
    
    else
    {
        printf("Invlid Size !");
        return -1;
    }

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("3 Digit elements from givne array are:\n");
    Display(ptr, iSize);

    free(ptr);


    return 0;
}