#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int i, j, maxLen = 0, len;
    for(i = 0; s[i] != '\0'; i++)
    {
        int freq[256] = {0};
        len = 0;
        for(j = i; s[j] != '\0'; j++)
        {
            if(freq[(int)s[j]] == 0)
            {
                freq[(int)s[j]] = 1;
                len++;
            }
            else
                break;
        }
        if(len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}
