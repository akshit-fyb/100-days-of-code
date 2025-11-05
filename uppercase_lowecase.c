#include <stdio.h>
int main()
{
    char sym;
    printf("Enter a character: ");
    scanf("%c", &sym);
    if(sym >= 'A' && sym <= 'Z')
        printf("Uppercase alphabet");
    else if(sym >= 'a' && sym <= 'z')
        printf("Lowercase alphabet");
    else if(sym >= '0' && sym <= '9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}
