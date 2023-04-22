class Solution
{
public:
    int dp(string &s, int **arr, int start, int end)
    {
        if (start == end)
            return 0;
        if (start > end)
            return 0; // i.e. if the size is less than 0
        if (arr[start][end] != -1)
        {
            return arr[start][end];
        }
        if (s[start] == s[end])
        {
            arr[start][end] = dp(s, arr, start + 1, end - 1);
            return arr[start][end];
        }

        int a = dp(s, arr, start + 1, end) + 1;
        int b = dp(s, arr, start, end - 1) + 1;
        arr[start][end] = min(a, b);
        return min(a, b);
    }

    int minInsertions(string s)
    {
        int **arr = new int *[s.size()];
        for (int i = 0; i < s.size(); i++)
        {
            arr[i] = new int[s.size()];
            for (int j = 0; j < s.size(); j++)
            {
                // initialising with -1
                arr[i][j] = -1;
            }
        }
        return dp(s, arr, 0, s.size() - 1);
    }
};