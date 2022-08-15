#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b;
        if (a != b)
        {
            c = min(a, b);
            d = max(a, b);
            while (c < d)
            {
                c = c * 2;
            }
        }
        if (c == d || a == b)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}
