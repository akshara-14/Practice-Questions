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