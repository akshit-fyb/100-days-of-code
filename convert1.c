#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining_seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining_seconds = seconds % 3600;
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    printf("Time = %d:%d:%d\n", hours, minutes, remaining_seconds);

    return 0;
}
