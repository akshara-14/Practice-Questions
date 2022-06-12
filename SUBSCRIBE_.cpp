#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k;
        cin >> n >> k;
        cout << ceil(n / 6) * k << endl;
    }
    return 0;
}
