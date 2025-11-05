#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i, j, k, len;
    len = 0;
    while(str[len] != '\0') len++;

    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++)
        {
            for(k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
