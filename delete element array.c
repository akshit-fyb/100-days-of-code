#include <stdio.h>
int main()
{
    int n, i, val, index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &val);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
        printf("Element not found\n");
    else
    {
        for(i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
        printf("Array after deletion:\n");
        for(i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}
