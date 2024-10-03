#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
    Node *prev = NULL;
};

int main()
{
    Node *linkedListPtr = new Node;

    linkedListPtr->next = new Node;

    linkedListPtr->next->data = 5;

    linkedListPtr->next->next = new Node;

    linkedListPtr->next->next->data = 10;

    linkedListPtr->next->next->prev = linkedListPtr->next;

    return 0;
}