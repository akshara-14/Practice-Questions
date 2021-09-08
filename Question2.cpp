// Name: Akshara Johari
// Roll number: 201378

#include <iostream>
using namespace std;

class bank
{

public:
    char name[30];
    int Account_No, bal;
    char type[15];

    void enter()
    {

        cout << "Enter Your Account Name : ";
        cin >> name;
        cout << "Enter Your Account No. : ";
        cin >> Account_No;
        cout << "Enter Your Account type : ";
        cin >> type;
        cout << "Enter Your Account Balance : ";
        cin >> bal;
    }

    void display()
    {
        cout << "Account Name : " << name << " ";
        cout << "Account No. : " << Account_No << " ";
        cout << "Account Type : " << type << " ";
        cout << "Available Balance : " << bal << " ";
    }

    int deposit()
    {
        return bal;
    }
};

int main()
{

    int n, index, dep_amount, new_balance, withdraw_amount, left_balance;

    cout << "No. of accounts you wanna create : " << endl;
    cin >> n;
    bank cust[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the details of Account " << i + 1 << " : \n";
        cust[i].enter();
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << "\n Account " << i + 1 << " Entered details : \n";
        cust[i].display();
    }

    // Deposit
    cout << "\n\n Enter account index to Deposit money : ";
    cin >> index;
    cout << "Deposit amount : ";
    cin >> dep_amount;
    new_balance = cust[index - 1].deposit() + dep_amount;
    cust[index - 1].bal = new_balance;
    cout << "\nNew Balance in account " << index << " : " << cust[index - 1].bal;

    // Withdraw
    cout << "\n\n Enter account index to Withdraw money : ";
    cin >> index;
    cout << "Withdraw amount : ";
    cin >> withdraw_amount;
    if (cust[index - 1].deposit() > withdraw_amount)
    {
        left_balance = cust[index - 1].deposit() - withdraw_amount;
        cust[index - 1].bal = left_balance;
        cout << "\nLeft Balance in account " << index << " : " << cust[index - 1].bal;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}