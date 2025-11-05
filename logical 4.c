#include <stdio.h>

int main()
{
    int n, i, pivot = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  // sum from 1 to n
    int leftSum = 0;

    for(i = 1; i <= n; i++)
    {
        leftSum += i;
        int rightSum = totalSum - (leftSum - i); // sum from i to n
        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);
    return 0;
}
