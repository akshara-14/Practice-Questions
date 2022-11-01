class Solution
{
public:
    int dp[101][101];
    int n, m;
    bool isValid(int a, int b)
    {
        return (a >= 0 && a < n && b >= 0 && b < m);
    }

    int ok(vector<vector<int>> &grid, int r, int c)
    { // r=row, c=column
        if (r == n)
        {
            return c;
        }
        else if (isValid(r, c))
        {
            if (grid[r][c] == 1 && isValid(r, c + 1) && grid[r][c + 1] == 1)
            {
                if (dp[r + 1][c + 1] != -2)
                {
                    return dp[r + 1][c + 1];
                }
                else
                {
                    return dp[r + 1][c + 1] = ok(grid, r + 1, c + 1);
                }
            }
            if (grid[r][c] == -1 && isValid(r, c - 1) && grid[r][c - 1] == -1)
            {
                if (dp[r + 1][c - 1] != -2)
                {
                    return dp[r + 1][c - 1];
                }
                else
                {
                    return dp[r + 1][c - 1] = ok(grid, r + 1, c - 1);
                }
            }
        }
        return -1;
    }

    vector<int> findBall(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                dp[i][j] = -2;
            }
        }
        vector<int> answer(m);
        for (int i = 0; i < m; i++)
        {
            answer[i] = ok(grid, 0, i);
        }

        return answer;
    }
};