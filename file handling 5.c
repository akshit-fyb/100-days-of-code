#include <stdio.h>

int main()
{
    char filename[100], text[200];
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // consume leftover newline

    FILE *file = fopen(filename, "a");
    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);
    printf("Text appended successfully.\n");
    return 0;
}
