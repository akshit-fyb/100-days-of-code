#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0], currentSum = arr[0];
    for(i = 1; i < n; i++)
    {
        if(currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of contiguous subarray = %d", maxSum);
    return 0;
}
