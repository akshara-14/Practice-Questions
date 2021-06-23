#include <stdio.h>

int main()
{
    int marks[2][4] = {{22, 44, 54, 33}, {53, 24, 31, 11}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }

        printf("\n");
    }
}