#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int data;

    Node(int data)
    {
        prev = NULL;
        next = NULL;
        this->data = data;
    }
};

class List
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    ~List()
    {
        while (head != NULL)
        {
            cout << "Removed node with data: " << head->data << endl;
            removeNode(head);
        }
    }

    void appendNode(Node *newNode)
    {
        if (head == NULL)
        {
            head = newNode;
        }

        else
        {
            tail->next = newNode;
            newNode->prev = tail;
        }

        tail = newNode;

        cout << "Appended node with data: " << newNode->data << endl;
    }

    void removeNode(Node *removeNode)
    {
        // Check if node to remove is head
        if (removeNode->prev == NULL)
        {

            head = removeNode->next;
        }

        else
        {

            removeNode->prev->next = removeNode->next;
        }

        // Check is node to remove is tail
        if (removeNode->next == NULL)
        {

            tail = removeNode->prev;
        }

        else
        {

            removeNode->next->prev = removeNode->prev;
        }

        delete removeNode;
    }

    Node *getNode(int index)
    {
        Node *node = head;

        for (int i = 0; i < index; i++)
        {
            node = node->next;
        }

        return node;
    }
};

int main()
{
    List *list = new List;

    list->appendNode(new Node(1));
    list->appendNode(new Node(2));
    list->appendNode(new Node(3));
    list->appendNode(new Node(4));
    list->appendNode(new Node(5));

    delete list;

    return 0;
}