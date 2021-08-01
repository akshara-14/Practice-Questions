// Gregor is learning about RSA cryptography, and although he doesn't understand how RSA works, he is now fascinated with prime numbers and factoring them.

// Gregor's favorite prime number is P. Gregor wants to find two bases of P. Formally, Gregor is looking for two integers a and b which satisfy both of the following properties.

// Pmoda=Pmodb, where xmody denotes the remainder when x is divided by y, and
// 2≤a<b≤P.
// Help Gregor find two bases of his favorite prime number!

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