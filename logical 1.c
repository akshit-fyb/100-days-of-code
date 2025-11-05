#include <stdio.h>

int main()
{
    int n, i, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d", first, last);
    return 0;
}
