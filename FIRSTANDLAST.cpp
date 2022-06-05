#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        // vector<int>arr[n] ;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            sum = max(sum, arr[i] + arr[i + 1]);
        }
        sum = max(sum, arr[0] + arr[n - 1]);
        cout << sum << endl;
    }
    return 0;
}
