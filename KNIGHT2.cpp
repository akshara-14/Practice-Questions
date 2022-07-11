#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        int moves = abs(x1 - x2) + abs(y1 - y2);
        if ((abs(x1 - x2) == 1 && y1 == y2) || (abs(y1 - y2) == 1 && x1 == x2))
        {
            cout << "no" << endl;
            continue;
        }
        if (moves & 1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
