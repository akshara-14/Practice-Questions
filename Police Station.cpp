#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(int N, int a, vector<int> x)
    {
        int index, M, L;
        int diff1 = 0;
        int diff2 = 0;
        for (int i = 0; i < N; i++)
        {
            M = abs(a - x[i]);

            if (M > diff1)
            {
                diff1 = M;
                index = i;
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (i == index)
            {
                continue;
            }
            else
            {
                L = abs(a - x[i]);

                if (L > diff2)
                {
                    diff2 = L;
                }
            }
        }

        return (diff1 + diff2);
    }
};

int main()
{
    int N, a;
    cin >> N >> a;
    vector<int> x(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    Solution ob;
    cout << ob.solve(N, a, x) << "\n";
    return 0;
}