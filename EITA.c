// Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

// There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.

// Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int d, x, y, z;
        scanf("%d %d %d %d", &d, &x, &y, &z);
        if (7 * x > (d * y + (7 - d) * z))
        {
            printf("%d\n", 7 * x);
        }
        else
        {
            printf("%d\n", (d * y + (7 - d) * z));
        }
        t--;
    }
    return 0;
}