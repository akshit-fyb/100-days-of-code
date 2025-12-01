#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int topIndex = 0;
    for(int i = 1; i < 5; i++)
    {
        if(students[i].marks > students[topIndex].marks)
            topIndex = i;
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
           students[topIndex].name, students[topIndex].roll_no, students[topIndex].marks);

    return 0;
}
