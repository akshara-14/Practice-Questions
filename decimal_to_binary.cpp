#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = abs(n);
    bool check = true;
    int ans = 0, newans = 0, i = 0;
    while (m != 0)
    {
        int bit = m & 1;
        ans = (bit * pow(10, i) + ans);
        m >>= 1;
        i++;
    }
    if (n < 0)
    {
        int j = 0;
        while (ans != 0)
        {
            if (ans % 10 == 1)
            {
                newans = (0 * pow(10, j) + newans);
                if (j == 0)
                {
                    newans = 1;
                    check = false;
                }
            }
            else
            {
                newans = (1 * pow(10, j) + newans);
                if (check || newans / pow(10, j) == 2)
                {
                    newans = newans + 9 * pow(10, j);
                    check = false;
                }
            }
            j++;
            ans /= 10;
        }

        ans = newans;
    }
    cout << ans << endl;
    return 0;
}