#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int p;
        scanf("%ld", &p);
        printf("2 %ld\n", p - 1);
    }
    return 0;
}