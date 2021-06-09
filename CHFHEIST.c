// Chef is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.

#include <stdio.h>

int main(void)
{
    long long int D, d, p, q;

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int sum = 0;
        scanf("%lld %lld %lld %lld", &D, &d, &p, &q);
        long long int a = D / d;
        sum = (p * D) + (q * a * (a - 1)*d)/2 + ((D % d) * q * a);
        // sum =(q * (a / 2) * (a - 1)*d);
        // sum = (p + (D / d) * q) * (D - (D / d) * d) + (D / d) * p * d + (D / d - 1) * (D / d) * q * d / 2;
        printf("%lld\n", sum);
    }

    return 0;
}