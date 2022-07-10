#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, min = 0;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
            min = min + x;
        }

        if (find(arr.begin(), arr.end(), 1) != arr.end() || min % 2)
        {
            cout << "chef" << endl;
        }

        else
            cout << "chefina" << endl;
    }
    return 0;
}
