#include <stdio.h>

int main()
{
    FILE *fp = fopen("numbers.txt", "r");
    if(fp == NULL)
        return 1;

    int num, total = 0, count = 0;

    while(fscanf(fp, "%d", &num) == 1)
    {
        total += num;
        count++;
    }

    fclose(fp);

    if(count > 0)
        printf("Sum: %d\nAverage: %.2f\n", total, (float)total / count);

    return 0;
}
