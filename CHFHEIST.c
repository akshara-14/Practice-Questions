#include <stdio.h>

int main(void)
{
    long long int t, D, d, p, q;
    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {
        long long int sum = 0;
        scanf("%lld %lld %lld %lld", &D, &d, &p, &q);
        long long int a = D / d;
        sum = (p * D) + (q * a * (a - 1) * d) / 2 + ((D % d) * q * a);

        printf("%lld\n", sum);
    }

    return 0;
}