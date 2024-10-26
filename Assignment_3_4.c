#include <stdio.h>
#include <ctype.h>  

char Display(char cValue)  
{
    cValue = toupper(cValue);  
    return cValue;             
}

int main() {
    char cChar = 0;
    char cRes = 0;

    printf("Enter a character: ");
    scanf(" %c", &cChar);

    cRes = Display(cChar);    
    printf("Uppercase character: %c\n", cRes);

    return 0;
}
