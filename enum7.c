#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main()
{
    enum Role r = USER;

    if(r == ADMIN)
        printf("Admin access granted\n");
    else if(r == USER)
        printf("User access granted\n");
    else if(r == GUEST)
        printf("Guest access limited\n");

    return 0;
}
