// Given an Integer N, write a program to reverse it.

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, rev = 0, remainder;
        scanf("%d", &n);
        while (n != 0)
        {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
        printf("%d\n", rev);
    }
    return 0;
}