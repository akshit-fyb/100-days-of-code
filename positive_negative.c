#include <stdio.h>
int main()
{
    int numx;
    printf("Enter a number: ");
    scanf("%d", &numx);
    if(numx >= 0)
    {
        if(numx == 0)
            printf("The number is zero");
        else
            printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}
