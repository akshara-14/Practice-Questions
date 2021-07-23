#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        long int c1, c2, n;
        scanf("%d", &n);
        c2 = n / 3;
        c1 = c2;
        if (n % 3 == 0)
        {
            printf("%d %d\n", c1, c2);
        }

        else if (n % 3 == 1)
        {
            printf("%d %d\n", c1 + 1, c2);
        }

        else if (n % 3 == 2)
        {
            printf("%d %d\n", c1, c2 + 1);
        }
        t--;
    }
    return 0;
}