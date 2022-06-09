#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> arr;

void solve()
{
    for (int j = 0; j < 30; j++)
    {
        int x = 1 << j;      // x denotes 2 power of j
        vector<int> v = {0}; // This vector stores the indices that will have 2^j present in them

        for (int i = 0; i < n; i++)
            if (arr[i] & x)
                v.push_back(i + 1);

        if (v.size() > 2)
        {
            v.back() = n;
            cout << "YES\n"
                 << v.size() - 1 << endl;

            for (int k = 1; k < v.size(); k++)
            {
                cout << v[k - 1] + 1 << " " << v[k] << endl;
            }
            return;
        }
    }
    cout << "NO\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        arr.resize(n);
        for (int &i : arr)
            cin >> i;
        solve();
    }
    return 0;
}