#include<stdio.h>

int Display()
{   
    int i = 0, iValue =0;

    i = 1;
    
    while (i <= 5)
    {
        printf("%d\n",i);
        i ++;
    }
    
}
int main()
{
    Display();

    return 0;
}