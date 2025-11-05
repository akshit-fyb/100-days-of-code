#include <stdio.h>

int main()
{
    char s[100], t[100];
    int i;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int freqS[26] = {0}, freqT[26] = {0};

    for(i = 0; s[i] != '\0'; i++)
        freqS[s[i] - 'a']++;

    for(i = 0; t[i] != '\0'; i++)
        freqT[t[i] - 'a']++;

    int flag = 1;
    for(i = 0; i < 26; i++)
    {
        if(freqS[i] != freqT[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
