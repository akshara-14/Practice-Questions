// In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals won by two different counties respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int G1, S1, B1, G2, S2, B2;
        scanf("%d %d %d %d %d %d", &G1, &S1, &B1, &G2, &S2, &B2);
        if ((G1 + S1 + B1) > (G2 + S2 + B2))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
        t--;
    }
    return 0;
}