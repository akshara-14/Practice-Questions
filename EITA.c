#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int d, x, y, z;
        scanf("%d %d %d %d", &d, &x, &y, &z);
        if (7 * x > (d * y + (7 - d) * z))
        {
            printf("%d\n", 7 * x);
        }
        else
        {
            printf("%d\n", (d * y + (7 - d) * z));
        }
        t--;
    }
    return 0;
}