#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        if ((maxT * maxN) <= sumN)
        {
            cout << int(pow(maxN, 2) * maxT) << endl;
        }
        else
        {
            int division = sumN / maxN;
            // cout<<division<<endl;
            int rem = sumN % maxN;
            // cout<<rem<<endl;
            cout << fixed << int(pow(maxN, 2) * division) + int(pow(rem, 2)) << endl;
        }
    }
    return 0;
}
