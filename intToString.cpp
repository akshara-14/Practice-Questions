#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    string str[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    vector<string> ans(3);
    string num = to_string(n);
    if (num.size() > 3)
    {
        cout << "String length cannot be greater than 3 digits";
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            ans[i] = str[num[i] - '0'];
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}