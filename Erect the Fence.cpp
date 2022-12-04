class Solution
{

    int crossProduct(vector<int> &A, vector<int> &C, vector<int> &B)
    {
        return (B[1] - A[1]) * (C[0] - A[0]) - (C[1] - A[1]) * (B[0] - A[0]);
    }

    static bool equal(vector<int> &a, vector<int> &b)
    {
        return a[0] == b[0] && a[1] == b[1];
    }

public:
    vector<vector<int>> outerTrees(vector<vector<int>> &trees)
    {
        int n = trees.size();

        auto cmp = [&](const vector<int> &a, const vector<int> &b)
        {
            return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
        };
        sort(trees.begin(), trees.end(), cmp);
        vector<vector<int>> L(n), U(n), H;
        int p = 0;

        for (int i = 0; i < n; i++)
        {
            while (p >= 2 && crossProduct(L[p - 2], L[p - 1], trees[i]) < 0)
            {
                p--;
            }
            L[p++] = trees[i];
        }
        L.resize(p);
        p = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            while (p >= 2 && crossProduct(U[p - 2], U[p - 1], trees[i]) < 0)
            {
                p--;
            }
            U[p++] = trees[i];
        }
        U.resize(p);
        for (auto v : L)
            H.push_back(v);
        for (auto v : U)
            H.push_back(v);

        sort(H.begin(), H.end(), cmp);

        H.erase(unique(H.begin(), H.end(), equal), H.end());
        return H;
    }
};