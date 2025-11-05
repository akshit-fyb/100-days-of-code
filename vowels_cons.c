#include <stdio.h>
int main()
{
    char chx;
    printf("Enter a character: ");
    scanf("%c", &chx);
    if(chx=='a'||chx=='e'||chx=='i'||chx=='o'||chx=='u'||chx=='A'||chx=='E'||chx=='I'||chx=='O'||chx=='U')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
