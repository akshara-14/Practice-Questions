// An array b of length k is called good if its arithmetic mean is equal to 1. More formally, if
// b1+⋯+bkk=1.
// Note that the value b1+⋯+bkk is not rounded up or down. For example, the array [1,1,1,2] has an arithmetic mean of 1.25, which is not equal to 1.

// You are given an integer array a of length n. In an operation, you can append a non-negative integer to the end of the array. What's the minimum number of operations required to make the array good?

// We have a proof that it is always possible with finitely many operations.

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n;
        int arr[n];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
        }
        float avg = (float)sum / n;
        if (avg == 1)
        {
            printf("0\n");
        }
        else if (avg > 1)
        {
            printf("%d\n", sum - n);
        }
        else
        {
            printf("1\n");
        }

        t--;
    }

    return 0;
}