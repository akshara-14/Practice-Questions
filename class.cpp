// Akshara Johari
// 201378

#include <iostream>
#include <string>
using namespace std;

class user
{
public:
    string name;
    string password;
    string accessrights;
    user()
    {
        name = " ";
        password = " ";
        accessrights = "ALL";
    }
};

int main()
{
    user obj;
    string pass;
    string access;
    string name;
    cout << "Name of the user: " << endl;
    cin >> name;
    obj.name = name;
    int n;
    cout << "If you want to change password Press 1" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << " Enter password:" << endl;
        cin >> pass;
        obj.password = pass;
    }
    else
    {
        obj.password = name.substr(0, 3);
    }

    cout << "If you want to change access rights Press 2" << endl;
    int m;
    cin >> m;
    if (m == 2)
    {
        cout << "Take on values among X, R, W, and ALL" << endl;
        cin >> access;
        obj.accessrights = access;
    }
    cout << "Name of the user:" << obj.name << endl;
    cout << "Password : " << obj.password << endl;
    cout << "Access rights : " << obj.accessrights << endl;

    return 0;
}