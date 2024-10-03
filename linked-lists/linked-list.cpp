#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

// Recursive function that returns a pointer to the nth node
Node *getNthNode(Node *node, int n)
{
    if (n == 0)
    {
        return node;
    }

    else
    {
        return getNthNode(node->next, n - 1);
    }
}

int main()
{
    Node *linkedListPtr = new Node;

    Node *node1 = new Node;
    Node *node2 = new Node;
    Node *node3 = new Node;

    linkedListPtr->next = node1;

    node1->next = node2;
    node1->data = 100;

    node2->next = node3;
    node2->data = 200;

    node3->data = 300;

    cout << getNthNode(linkedListPtr, 3)->data << endl; // Output: 300

    delete linkedListPtr;
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
