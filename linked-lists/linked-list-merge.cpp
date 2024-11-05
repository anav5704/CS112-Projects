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

Node *merge(Node *a, Node *b)
{
    Node *c = new Node(0);
    Node *head = c;

    while (a && b)
    {

        if (a->data <= b->data)
        {
            c->next = a;
            a = a->next;
        }

        else
        {
            c->next = b;
            b = b->next;
        }

        c = c->next;
    }

    if (a)
    {
        c->next = a;
    }

    if (b)
    {
        c->next = b;
    }

    return head;
}

int main()
{

    Node *a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);

    Node *b = new Node(2);
    b->next = new Node(4);
    b->next->next = new Node(6);

    Node *head = merge(a, b);

    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }

    delete head;

    return 0;
}