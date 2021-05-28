// You're given a number N. Print the first N lines of the below-given pattern.

// 1 2 3 4 5
// 10 9 8 7 6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25
// 30 29 28 27 26

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("%d ", k);
                k++;
            }
        }
        else
        {
            k += 4;
            for (int l = 1; l <= 5; l++)
            {
                printf("%d ", k);
                k--;
            }
            k += 6;
        }

        printf("\n");
    }

    return 0;
}