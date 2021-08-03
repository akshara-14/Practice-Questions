#include <stdio.h>
int main()
{
    int a;
    int j = 1;
    printf("Enter a number:");
    scanf("%d", &a);

    for (int i = a; i > 0; i--)
    {
        j = j * i;
    }
    printf("The factorial of %d is %d", a, j);
}