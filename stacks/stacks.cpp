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
        cout << "Deleted node" << endl;
    }
};

class Stack
{
public:
    Node *head;

    Stack()
    {
        head = NULL;
    }

    void push(Node *node)
    {
        node->next = head;
        head = node;
    }

    bool pop()
    {
        if (head == NULL)
        {
            return false;
        }

        else
        {
            Node *node = head;
            head = head->next;
            delete node;

            return true;
        }
    }

    void print()
    {
        for (Node *node = head; node != NULL; node = node->next)
        {
            cout << node->data << endl;
        }
    }

    void clear()
    {
        while (head != NULL)
        {
            pop();
        }
    }
};

int main()
{
    Stack *stack = new Stack;

    stack->push(new Node(1));
    stack->push(new Node(2));
    stack->push(new Node(3));

    stack->print();
    stack->clear();

    delete stack;

    return 0;
}