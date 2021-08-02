// There is a chessboard of size n by n. The square in the i-th row from top and j-th column from the left is labelled (i,j).

// Currently, Gregor has some pawns in the n-th row. There are also enemy pawns in the 1-st row. On one turn, Gregor moves one of his pawns. A pawn can move one square up (from (i,j) to (i−1,j)) if there is no pawn in the destination square. Additionally, a pawn can move one square diagonally up (from (i,j) to either (i−1,j−1) or (i−1,j+1)) if and only if there is an enemy pawn in that square. The enemy pawn is also removed.

// Gregor wants to know what is the maximum number of his pawns that can reach row 1?

// Note that only Gregor takes turns in this game, and the enemy pawns never move. Also, when Gregor's pawn reaches row 1, it is stuck and cannot make any further moves.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, ans = 0;
        scanf("%d", &n);
        int p1[n], p2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p1[i]);
        }
        // printf("\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (p2[i] == 0)
            {
                continue;
            }
            else if (p1[i] == 0)
            {
                ans++;
                continue;
            }
            else if ((i - 1) >= 0 && p1[i - 1] == 1)
            {
                ans++;
                p1[i - 1] = 2;
                continue;
            }
            else if ((i + 1) < n && p1[i + 1] == 1)
            {
                ans++;
                p1[i + 1] = 2;
                continue;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}