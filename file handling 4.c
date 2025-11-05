#include <stdio.h>

int main()
{
    char sourceFile[100], destFile[100];
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    FILE *src = fopen(sourceFile, "r");
    if(src == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *dest = fopen(destFile, "w");
    if(dest == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
