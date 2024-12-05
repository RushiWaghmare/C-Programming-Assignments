#include<stdio.h>
void StrCpyRev(char *src, char *Dest)
{
    int iCnt = 0;
    
    while( *src != '\0')
    {
        printf("%c\n", *src);
        
        Dest[iCnt] = *src;
        iCnt ++;
        src++;
    }

    //Dest[iCnt] = '\0';
    printf("String after Copy: %s\n", Dest);

    char *cStart = Dest;
    char *cEnd = Dest; 
    char cTemp = '\0';

    while(*cEnd != '\0')
    {
        cEnd ++;
    }

    cEnd --;

    while(cStart < cEnd)
    {
        cTemp = *cStart;
        *cStart = *cEnd;
        *cEnd = cTemp;

        cStart ++;
        cEnd --;
    }
       
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    StrCpyRev(Arr,Brr);

    printf("String after reverse: %s\n",Brr);


    return 0;
}