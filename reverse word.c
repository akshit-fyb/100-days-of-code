#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start, end;
    while(str[i] != '\0' && str[i] != '\n')
    {
        // find start of word
        while(str[i] == ' ') i++;
        if(str[i] == '\0' || str[i] == '\n') break;
        start = i;

        // find end of word
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        end = i - 1;

        // reverse the word
        while(start < end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence with reversed words: %s", str);
    return 0;
}
