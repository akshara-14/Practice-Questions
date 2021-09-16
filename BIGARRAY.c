#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int n, s;
        scanf("%ld %ld", &n, &s);
        long long int sum = (n * (n + 1)) / 2;

        if (sum-s>=1 && sum-s<=n)
        {
            printf("%ld\n", sum - s);
        }

        else
        {
            printf("-1\n");
        }
    }
    return 0;
}