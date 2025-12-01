#include <stdio.h>

int main()
{
    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL)
        return 1;

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char sName[50];
    int sRoll;
    float sMarks;

    for(int i = 0; i < n; i++)
    {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", sName, &sRoll, &sMarks);
        fprintf(fp, "%s %d %.2f\n", sName, sRoll, sMarks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL)
        return 1;

    while(fscanf(fp, "%s %d %f", sName, &sRoll, &sMarks) == 3)
        printf("%s %d %.2f\n", sName, sRoll, sMarks);

    fclose(fp);
    return 0;
}
