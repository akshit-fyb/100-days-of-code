#include <stdio.h>
int main()
{
    int n, i, j, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(mat[i][i] == mat[j][j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");
    return 0;
}
