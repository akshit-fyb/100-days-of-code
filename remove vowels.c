#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result[100];

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        {
            result[j] = ch;
            j++;
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s", result);
    return 0;
}
