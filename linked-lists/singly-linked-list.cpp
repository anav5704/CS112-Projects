#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;

    Node(int data)
    {
        next = NULL;
        this->data = data;
    }
};

class List
{
public:
    Node *head = NULL;

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
        Node *node = head;

        if (node == NULL)
        {
            head = newNode;
        }

        else
        {
            while (node->next != NULL)
            {
                node = node->next;
            }

            node->next = newNode;
        }

        cout << "Appended node with data: " << newNode->data << endl;
        ;
    }

    void removeNode(Node *removeNode)
    {

        if (head == removeNode)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }

        else
        {
            Node *node = head;

            while (node->next != removeNode)
            {
                node = node->next;
            }

            Node *temp = node->next;
            node->next = node->next->next;
            delete node;
        }
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
