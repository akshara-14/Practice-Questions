#include <iostream>
using namespace std;

class Node
{
    public :    
        int data;
        Node* next;
};

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    int n , index, data;
    Node* head = NULL;
    Node* prev = NULL;
    cout << "Enter size : ";
    cin >> n;
    cout << "Enter values : ";
    for(int i=0;i<n;i++)
    {
        Node* n = new Node();
        cin >> n->data;
        n->next = NULL;

        if(head==NULL)
        {
            head = n;
            prev = n;
        }            
        else
        {
            prev->next = n;
            prev = prev->next;
        }
    }
    cout << "Enter index of insertion : ";
    cin >> index;
    cout << "Enter data to be inserted : ";
    cin >> data;
    insertAtIndex(head, data, index);
    display(head);    
}
