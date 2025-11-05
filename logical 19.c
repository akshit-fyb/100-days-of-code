#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (only one repeated):\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorAll = 0;
    for(i = 0; i < n; i++)
        xorAll ^= arr[i];

    for(i = 0; i < n-1; i++)
        xorAll ^= i;

    printf("Repeated element = %d", xorAll);
    return 0;
}
