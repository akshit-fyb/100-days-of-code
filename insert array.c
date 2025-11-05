#include <stdio.h>
int main()
{
    int n, i, pos, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    
    arr[pos - 1] = key;
    
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}
