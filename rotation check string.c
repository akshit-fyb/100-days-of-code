#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = 0, len2 = 0, i, flag = 0;
    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    if(len1 != len2)
    {
        printf("Not a rotation");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        int j, k;
        for(j = i, k = 0; k < len2; j++, k++)
        {
            if(j == len1) j = 0;
            if(str1[j] != str2[k])
                break;
        }
        if(k == len2)
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("String 2 is a rotation of String 1");
    else
        printf("Not a rotation");
    return 0;
}
