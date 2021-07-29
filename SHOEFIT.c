// You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0) or a right shoe (represented using 1). Given A, B, C, representing the information for each shoe, find out whether you can go out now, wearing one left shoe and one right shoe.

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        if ((A == 1 || B == 1 || C == 1) && (A == 0 || B == 0 || C == 0))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
