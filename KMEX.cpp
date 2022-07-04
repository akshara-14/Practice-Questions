#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr[num]++;
        }
        int mex = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i])
            {
                mex++;
            }
            else
            {
                break;
            }
        }

        int availability = n - arr[k];
        if (k <= m && mex == k && availability >= m)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
