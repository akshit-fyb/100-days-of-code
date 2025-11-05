#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file = fopen("info.txt", "r");
    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    int ch, charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    while((ch = fgetc(file)) != EOF)
    {
        charCount++;

        if(ch == '\n')
            lineCount++;

        if(!isspace(ch))
        {
            if(!inWord)
            {
                wordCount++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    fclose(file);

    printf("Characters: %d\nWords: %d\nLines: %d\n", charCount, wordCount, lineCount);
    return 0;
}
