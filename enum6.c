#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main()
{
    int choice, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("1.ADD  2.SUBTRACT  3.MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    enum Menu op = choice;

    switch(op)
    {
        case ADD:
            printf("Result = %d\n", x + y);
            break;
        case SUBTRACT:
            printf("Result = %d\n", x - y);
            break;
        case MULTIPLY:
            printf("Result = %d\n", x * y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
