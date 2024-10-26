#include <stdio.h>
#include <ctype.h>  

typedef int BOOL;  
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue) {
    cValue = tolower(cValue);  


    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u') {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    char cChar = 0;
    BOOL bResult = FALSE;

    printf("Enter a character: ");
    scanf(" %c", &cChar);

    bResult = ChkVowel(cChar);  

    if (bResult == TRUE) {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is not a vowel.\n");
    }

    return 0;
}
