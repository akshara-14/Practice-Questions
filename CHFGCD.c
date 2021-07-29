// Chef has two positive integers X and Y. Now Chef wants to perform some number of operations (possibly zero) on them. In each operation, Chef can choose either X or Y and increment it by 1. Find the minimum number of operations Chef needs to perform so that there is a positive integer strictly greater than 1 which divides both X and Y (In other words, the greatest common divisor of X and Y should be greater than 1).

#include <stdio.h>
int gcd(long int a, long int b){
    if(b > a){
    if (a == 0)
        return b;
    return gcd(b%a, a);
    }
    else{
        if (b == 0)
        return a;
    return gcd(b, a%b);
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int x, y;
        scanf("%ld %ld", &x, &y);
        
        if (x % 2 == 0 && y % 2 == 0)
        {
            printf("0\n");
        }
        
        else if (gcd(x, y) > 1)
        {
            printf("0\n");
        }
        
        else if (gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1)
        {
            printf("1\n");
        }

        else
        {
            printf("2\n");

        }
    }
    return 0;
}