#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int arr[m];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == n)
        {
            cout << "yes\n";
            goto no;
        }
    }
    cout << "no";
no:
    return 0;
}