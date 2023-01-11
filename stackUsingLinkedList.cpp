#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int val)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop(int val)
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        top = top->next;
    }
}

void display()
{
    struct Node *ptr;
    if (top == NULL)
        cout << "stack is empty";
    else
    {
        ptr = top;
        cout << "Stack elements are: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main()
{
    int val, choice, n;
    do
    {
        cout << "Write 1 to push and 2 to pop the value" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            cout << endl;
            push(val);
            break;

        case 2:
            pop(val);
            break;

        default:
            cout << "incorrect choice" << endl;
            break;
        }
        display();

        cout << "Write 1 to continue and 0 to exit" << endl;
        cin >> n;
        
    } while (n);
}