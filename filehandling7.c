#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("output.txt", "w");

    if(src == NULL || dest == NULL)
        return 1;

    int ch;
    while((ch = fgetc(src)) != EOF)
    {
        if(islower(ch))
            ch = toupper(ch);
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    return 0;
}
