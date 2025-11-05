#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    if(name[i] != ' ' && name[i] != '\n')
        printf("%c", name[i]); // first initial

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n')
            printf("%c", name[i+1]);
    }

    return 0;
}

