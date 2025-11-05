#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("Diagonal traversal of the matrix:\n");
    for(int d = 0; d < r + c - 1; d++)
    {
        for(i = 0; i < r; i++)
        {
            j = d - i;
            if(j >= 0 && j < c)
                printf("%d ", mat[i][j]);
        }
    }
    return 0;
}
