#include <stdio.h>
int main()
{
    float n1, n2;
    char op;
    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &n2);
    switch(op)
    {
        case '+': printf("Result = %.2f", n1 + n2); break;
        case '-': printf("Result = %.2f", n1 - n2); break;
        case '*': printf("Result = %.2f", n1 * n2); break;
        case '/': 
            if(n2 != 0)
                printf("Result = %.2f", n1 / n2);
            else
                printf("Division by zero not allowed");
            break;
        case '%': 
            if((int)n2 != 0)
                printf("Result = %d", (int)n1 % (int)n2);
            else
                printf("Division by zero not allowed");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
