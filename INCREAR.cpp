#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y;
        a = abs(x - y);

        if (x > y)
        {
            b = a / 2;
            if (a % 2 != 0)
            {
                b = b + 2;
            }
        }
        else if (x < y)
        {
            b = a;
        }
        else if (x == y)
        {
            b = 0;
        }
        cout << b << endl;
    }
    return 0;
}
