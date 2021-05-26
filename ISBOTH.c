// You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). If N is divisible by both 5 and 11 then print "BOTH"(without quotes). If N is not divisible by 5 or 11 then print "NONE"(without quotes).

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("BOTH");
    }

    else if (n % 5 == 0 || n % 11 == 0)
    {
        printf("ONE");
    }

    else
    {
        printf("NONE");
    }
    return 0;
}
