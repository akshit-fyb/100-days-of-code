#include <stdio.h>
int main()
{
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);  // reads until space

    for(i = 0; str[i] != '\0'; i++); // find length
    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");
    return 0;
}
