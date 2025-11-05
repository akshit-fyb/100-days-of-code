#include <stdio.h>
int main()
{
    int num, rem, prod = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10;
        if(rem % 2 != 0)
        {
            prod = prod * rem;
            flag = 1;
        }
        num = num / 10;
    }
    if(flag == 1)
        printf("Product of odd digits = %d", prod);
    else
        printf("No odd digits");
    return 0;
}
