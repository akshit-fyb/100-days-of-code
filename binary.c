#include <stdio.h>
int main()
{
    int n, bin[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0)
        printf("Binary = 0");
    else
    {
        while(n > 0)
        {
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }
        printf("Binary = ");
        for(i = i - 1; i >= 0; i--)
            printf("%d", bin[i]);
    }
    return 0;
}
