#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Required sum: ");
    scanf("%d", &x);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                sum++;
            }
        }
    }

    printf("Number of ordered pairs: %d", sum);

    return 0;
}