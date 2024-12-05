#include<stdio.h>
void StrToggle(char *src, char *Dest)
{
    int iCnt = 0;
    
    while( *src != '\0')
    {
        //Store Charcters without Space
        if(*src >= 'A' && *src <= 'Z')
        {
            Dest[iCnt] = *src + 32;
            iCnt ++;    
        }
        else
        {
            Dest[iCnt] = *src - 32;
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

    StrToggle(Arr,Brr);

    printf("String after Toggle: %s\n",Brr);


    return 0;
}