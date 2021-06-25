// There are n cats in a line, labeled from 1 to n, with the i-th cat at position i. They are bored of gyrating in the same spot all day, so they want to reorder themselves such that no cat is in the same place as before. They are also lazy, so they want to minimize the total distance they move. Help them decide what cat should be at each location after the reordering.

// For example, if there are 3 cats, this is a valid reordering: [3,1,2]. No cat is in its original position. The total distance the cats move is 1+1+2=4 as cat 1 moves one place to the right, cat 2 moves one place to the right, and cat 3 moves two places to the left.

#include <stdio.h>

int main()
{
    int t, n[100], s, i;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &s);
        for (int i = 0; i < s; i++)
        {
            if (i % 2 == 0)
            {
                n[i] = i + 2;
            }
            else if (i % 2 != 0)
            {
                n[i] = i;
            }
        }
        if (s % 2 != 0)
        {
            n[s - 3] = s;
            n[s - 2] = s - 2;
            n[s - 1] = s - 1;
        }

        for (int j = 0; j < s; j++)
        {
            printf("%d ", n[j]);
        }
        printf("\n");

        t--;
    }

    return 0;
}