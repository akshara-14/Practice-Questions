#include <iostream>
using namespace std;

void solution()
{
    long long n, k;
    cin >> n >> k;
    if (k == 2)
    {
        cout << "ODD" << endl;
    }
    else if (n % 2 != 0 && k == 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}
