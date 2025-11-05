#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    char temp;
    printf("Enter a string: ");
    scanf("%s", str);  // reads until space

    for(i = 0; str[i] != '\0'; i++);  // find length
    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s", str);
    return 0;
}
