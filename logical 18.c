#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d elements (numbers from 0 to %d, one missing):\n", n-1, n);
    for(i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for(i = 0; i < n-1; i++)
        sum += arr[i];

    printf("Missing number = %d", total - sum);
    return 0;
}
