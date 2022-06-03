#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> mp;

        int ans = n;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            while (mp[a[i]] > 1)
            {
                mp[a[j]]--;
                j++;
            }

            ans = min(ans, 2 * min(j, n - i - 1) + max(j, n - i - 1));
            // cout<<i<<j<<ans<<endl;
        }

        cout << ans << endl;
    }
    return 0;
}
