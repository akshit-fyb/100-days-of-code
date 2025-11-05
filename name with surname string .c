#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0, lastSpace = -1;
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            lastSpace = i;
    }

    // print initials of first and middle names
    for(i = 0; i <= lastSpace; i++)
    {
        if(i == 0 && name[i] != ' ')
            printf("%c. ", name[i]);
        else if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n')
            printf("%c. ", name[i+1]);
    }

    // print surname in full
    for(i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}
