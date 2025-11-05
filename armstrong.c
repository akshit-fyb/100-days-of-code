#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, rem, count = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if((int)sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
