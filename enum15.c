#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n)
{
    int topIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(students[i].marks > students[topIndex].marks)
            topIndex = i;
    }
    return students[topIndex];
}

int main()
{
    struct Student students[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    struct Student top = getTopStudent(students, 5);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
