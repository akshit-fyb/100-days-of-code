#include <stdio.h>
int main()
{
    long num, temp;
    int count[10] = {0}, i, max = 0, digit;
    printf("Enter an integer number: ");
    scanf("%ld", &num);
    temp = (num < 0) ? -num : num;  // handle negative numbers
    while(temp != 0)
    {
        count[temp % 10]++;
        temp /= 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }
    printf("Digit %d occurs the most (%d times)", digit, max);
    return 0;
}
