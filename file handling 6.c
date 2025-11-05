#include <stdio.h>

int main()
{
    char filename[100], line[200];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if(file == NULL)
    {
        printf("File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("File contents:\n");
    while(fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
