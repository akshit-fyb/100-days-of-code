#include <stdio.h>
int main()
{
    char date[20];
    int day, year;
    char month[4];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d", day, year);
    return 0;
}
