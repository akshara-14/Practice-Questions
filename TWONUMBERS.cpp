#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        if (n == 2)
            cout << 0 << endl;

        else if (n % 2 == 0)
        {
            if ((n / 2 - 1) % 2 == 1)
                cout << (n / 2 - 1) * (n / 2 + 1) - 1 << endl;
            else
                cout << (n / 2 - 2) * (n / 2 + 2) - 1 << endl;
        }

        else
            cout << ((n - 1) / 2 * (n + 1) / 2) - 1 << endl;
    }
    return 0;
}
