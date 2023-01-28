#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }
    return 0;
}

string infixToPrefix(string infix)
{
    stack<char> operatorStack;
    list<char> infixList;
    string prefix = "";

    for (char c : infix)
    {
        infixList.push_back(c);
    }

    for (char c : infixList)
    {

        if (isalnum(c))
        {
            prefix += c;
        }

        else
        {
            while (!operatorStack.empty() && precedence(c) <= precedence(operatorStack.top()))
            {
                prefix += operatorStack.top();
                operatorStack.pop();
            }

            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty())
    {
        prefix += operatorStack.top();
        operatorStack.pop();
    }

    reverse(prefix.begin(), prefix.end());

    return prefix;
}


int main()
{
    string infix = "A+B*C-D";
    string prefix = infixToPrefix(infix);
    cout << "Infix notation: " << infix << endl;
    cout << "Prefix notation: " << prefix << endl;

    return 0;
}