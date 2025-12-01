#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main()
{
    enum Signal light = RED;

    if(light == RED)
        printf("Stop\n");
    else if(light == YELLOW)
        printf("Wait\n");
    else if(light == GREEN)
        printf("Go\n");

    return 0;
}
