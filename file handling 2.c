#include <stdio.h>

int main()
{
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *file = fopen("info.txt", "w");
    if(file == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    fprintf(file, "Name: %sAge: %d\n", name, age);
    fclose(file);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
