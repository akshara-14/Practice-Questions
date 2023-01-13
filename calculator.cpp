#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m;
    char o;
    cout << "Enter two numbers: " << endl;
    cin >> n >> m;
    cout << "Choose the operation to be performed:" << o << endl;
    cin >> o;
    switch (o)
    {
    case '*':
        cout << n << o << m << "=" << n * m << endl;
        break;
    case '/':
        cout << n << o << m << "=" << n / m << endl;
        break;
    case '+':
        cout << n << o << m << "=" << n + m << endl;
        break;
    case '-':
        cout << n << o << m << "=" << n - m << endl;
        break;

    default:
        cout << "Incorrect choice" << endl;
        break;
    }
    return 0;
}