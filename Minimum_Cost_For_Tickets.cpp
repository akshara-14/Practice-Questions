// Dp -> Memoisation
class Solution
{
public:
    int solve(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp)
    {
        if (index >= n)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }

        int day1 = cost[0] + solve(n, days, cost, index + 1, dp);
        // int day7, day30;
        int i;
        for (i = index; i < n && days[i] < days[index] + 7; i++)
            ;
        int day7 = cost[1] + solve(n, days, cost, i, dp);

        for (i = index; i < n && days[i] < days[index] + 30; i++)
            ;
        int day30 = cost[2] + solve(n, days, cost, i, dp);

        dp[index] = min(day1, min(day7, day30));
        return dp[index];
    }

    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        vector<int> dp(n + 1, -1);
        return solve(n, days, costs, 0, dp);
    }
};