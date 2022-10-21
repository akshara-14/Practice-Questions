#include <stdio.h>

int main(void)
{
    long int n;
    int s = 0, j = 0;
    int arr[50];
    scanf("%ld", &n);
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            s++;
            arr[j] = i;
            j++;
        }
    }

    printf("%d\n", s);
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
