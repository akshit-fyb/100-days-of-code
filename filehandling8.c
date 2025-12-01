#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL)
        return 1;

    int ch;
    int vCount = 0, cCount = 0;

    while((ch = fgetc(fp)) != EOF)
    {
        if(isalpha(ch))
        {
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vCount++;
            else
                cCount++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vCount);
    printf("Consonants: %d\n", cCount);

    return 0;
}
