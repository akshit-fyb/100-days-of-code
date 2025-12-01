#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main()
{
    const char *mName[] = {
        "", "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    int mDays[] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for(int m = JAN; m <= DEC; m++)
        printf("%s = %d days\n", mName[m], mDays[m]);

    return 0;
}
