#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n;
        cin >> a >> b;
        set<char> temp;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                temp.insert(b[i]);
            }
        }
        cout << temp.size() << endl;
    }
    return 0;
}
