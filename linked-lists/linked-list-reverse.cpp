#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    ~Node()
    {
        delete next;
        next = NULL;
    }
};

Node *reverse(Node *head)
{
    Node *prev = NULL;

    while (head)
    {
        Node *next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return prev;
}

int main()
{

    Node *a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);

    Node *head = reverse(a);

    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }

    delete head;

    return 0;
}