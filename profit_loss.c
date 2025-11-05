#include <stdio.h>
int main()
{
    float cp, sp, per;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if(sp > cp)
    {
        per = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", per);
    }
    else if(cp > sp)
    {
        per = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", per);
    }
    else
        printf("No profit no loss");
    return 0;
}
