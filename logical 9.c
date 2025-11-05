#include <stdio.h>

int main()
{
    int n, k, i, j, sum, maxSum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    maxSum = 0;
    for(i = 0; i <= n - k; i++)
    {
        sum = 0;
        for(j = i; j < i + k; j++)
            sum += arr[j];
        if(i == 0 || sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d = %d", k, maxSum);
    return 0;
}
