#include <stdio.h>
int main()
{
    char str[100];
    int i, spaceCount = 0, digitCount = 0, specialCount = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            digitCount++;
        else if(str[i] == ' ')
            spaceCount++;
        else if(str[i] != '\n')
            specialCount++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d", spaceCount, digitCount, specialCount);
    return 0;
}
