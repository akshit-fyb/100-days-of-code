#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            if(len == 0)
                start = i;
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        if(str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }

    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    return 0;
}
