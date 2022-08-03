#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int c = x - y;
        if (abs(c) % 2 == 0)
            cout << abs(c) / 2 << endl;
        else
            cout <<(abs(c) + 1) / 2 << endl;
    }
    return 0;
}
