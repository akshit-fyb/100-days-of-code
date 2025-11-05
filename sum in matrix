#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum += mat[i][j];
    printf("Sum of all elements = %d", sum);
    return 0;
}
