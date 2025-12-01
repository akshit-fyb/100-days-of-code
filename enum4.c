#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main()
{
    enum Status state = FAILURE;

    if(state == SUCCESS)
        printf("Operation Successful\n");
    else if(state == FAILURE)
        printf("Operation Failed\n");
    else if(state == TIMEOUT)
        printf("Operation Timed Out\n");

    return 0;
}
