#include <iostream>
using namespace std;

class Node
{
    public:    
        int data;
        Node* next;
};

void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

struct Node *deleteAtIndex(struct Node *head, int index)
{

    struct Node *a = head;
    struct Node *b = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        a = a->next;
        b = b->next;
    }

    a->next = b->next;
    free(b);
    return head;
}

int main()
{
    int size , index;
    Node* head = NULL;
    Node* prev = NULL;
    cout << "Enter size : ";
    cin >> size;
    cout << "Enter values : ";
    for(int i=0;i<size;i++)
    {
        Node* size = new Node();
        cin >> size->data;
        size->next = NULL;

        if(head==NULL)
        {
            head = size;
            prev = size;
        }            
        else
        {
            prev->next = size;
            prev = prev->next;
        }
    }
    cout << "Enter index of deletion : ";
    cin >> index;
    deleteAtIndex(head, index);
    print(head);    
}