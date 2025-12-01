#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee emp[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and salary for employee %d: ", i+1);
        scanf("%s %d %f", emp[i].name, &emp[i].id, &emp[i].salary);
    }

    FILE *fp = fopen("employees.dat", "wb");
    if(fp == NULL)
        return 1;

    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    struct Employee readEmp[3];
    fp = fopen("employees.dat", "rb");
    if(fp == NULL)
        return 1;

    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee Details from file:\n");
    for(int i = 0; i < 3; i++)
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               readEmp[i].name, readEmp[i].id, readEmp[i].salary);

    return 0;
}

