#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, ans = 0;
        scanf("%d", &n);
        int p1[n], p2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p1[i]);
        }
        // printf("\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (p2[i] == 0)
            {
                continue;
            }
            else if (p1[i] == 0)
            {
                ans++;
                continue;
            }
            else if ((i - 1) >= 0 && p1[i - 1] == 1)
            {
                ans++;
                p1[i - 1] = 2;
                continue;
            }
            else if ((i + 1) < n && p1[i + 1] == 1)
            {
                ans++;
                p1[i + 1] = 2;
                continue;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}