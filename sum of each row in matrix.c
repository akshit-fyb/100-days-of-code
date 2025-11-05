#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < r; i++)
    {
        rowSum[i] = 0;
        for(j = 0; j < c; j++)
            rowSum[i] += mat[i][j];
    }
    
    printf("Sum of each row:\n");
    for(i = 0; i < r; i++)
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    
    return 0;
}
