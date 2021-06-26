// You are given an array a1,a2,…,an consisting of n distinct integers. Count the number of pairs of indices (i,j) such that i<j and ai⋅aj=i+j.

#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        int arr[n], s = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] * arr[j] == i + j + 2)
                {
                    s++;
                }
            }
        }
        printf("%d\n", s);

        t--;
    }
    return 0;
}