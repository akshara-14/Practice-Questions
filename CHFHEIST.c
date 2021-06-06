// Chef is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.

#include <stdio.h>

int main(void)
{
    int a, b, p, q, t, sum;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &p, &q);
        if (b < a)
        {
            sum = b * p;
            a = a - b;
            int temp = q;
            while (a >= b)
            {
                sum = sum + (p + q) * b;
                a = a - b;
                q = temp + q;
            }

            if (a != 0)
            {
                sum = sum + (p + q) * a;
            }

            printf("%d\n", sum);
        }
    }

    return 0;
}