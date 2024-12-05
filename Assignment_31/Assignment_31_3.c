#include<stdio.h>
void StrLwrtoUpr(char *src, char *Dest)
{
    int iCnt = 0;
    
    while( *src != '\0')
    {
        //Store Charcters without Space
        if(*src >= 'a' && *src <= 'z')
        {
            Dest[iCnt] = *src - 32;
            iCnt ++;    
        }
        else
        {
            Dest[iCnt] = *src;
            iCnt ++;    
        }

        src ++;
        
           
    }

    Dest[iCnt] = '\0';


}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    StrLwrtoUpr(Arr,Brr);

    printf("String after lower to upper : %s\n",Brr);


    return 0;
}