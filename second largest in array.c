#include <stdio.h>
int main()
{
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(n < 2)
    {
        printf("Array should have at least 2 elements");
        return 0;
    }

    largest = second = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
            second = arr[i];
    }
    printf("Second largest element = %d", second);
    return 0;
}
