class Solution
{
public:
    vector<int> ans;
    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        // create an adjacency list
        vector<vector<int>> a(n);
        ans.resize(n);
        for (auto &x : edges)
        {
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }

        dfs(-1, 0, a, labels);
        return ans;
    }

    vector<int> dfs(int prev, int curr, vector<vector<int>> &a, string &labels)
    {
        vector<int> result(26, 0);
        for (auto x : a[curr])
        {
            if (x != prev)
            {
                vector<int> res = dfs(curr, x, a, labels);

                for (int i = 0; i < res.size(); i++)
                    result[i] += res[i];
            }
        }
        ans[curr] = ++result[labels[curr] - 'a'];
        return result;
    }
};