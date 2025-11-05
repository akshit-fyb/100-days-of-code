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

    int total = 0;
    for(i = 0; i < n; i++)
        total += arr[i];

    int leftSum = 0, pivot = -1;
    for(i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - arr[i])
        {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d", pivot);
    return 0;
}
