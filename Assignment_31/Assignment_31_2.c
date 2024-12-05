#include<stdio.h>
void StrCpyRev(char *src, char *Dest)
{
    int iCnt = 0;
    
    while( *src != '\0')
    {
        //Store Charcters without Space
        if(*src != ' ')
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

    StrCpyRev(Arr,Brr);

    printf("String after : %s\n",Brr);


    return 0;
}