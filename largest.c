#include <stdio.h>
int main()
{
    int a1, b1, c1;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a1, &b1, &c1);
    if(a1 > b1)
    {
        if(a1 > c1)
            printf("Largest is %d", a1);
        else
            printf("Largest is %d", c1);
    }
    else
    {
        if(b1 > c1)
            printf("Largest is %d", b1);
        else
            printf("Largest is %d", c1);
    }
    return 0;
}
