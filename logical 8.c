#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n], answer[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++)
    {
        int prod = 1;
        for(j = 0; j < n; j++)
        {
            if(j != i)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    printf("Output array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);
        if(i != n - 1)
            printf(", ");
    }

    return 0;
}
