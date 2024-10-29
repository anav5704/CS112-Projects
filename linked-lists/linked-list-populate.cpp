#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

int main()
{
    Node *node = NULL, *head = NULL;

    int data, sentinel = -1;

    cout << "Enter node data: ";
    cin >> data;

    // Create new nodes until user enters sentinel value

    while (data != sentinel)
    {
        node = new Node;
        node->data = data;
        node->next = NULL;

        if (head == NULL)
        {
            head = node;
        }

        else
        {
            Node *current = head;

            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = node;
        }

        cout << "Enter node data: ";
        cin >> data;
    }

    // Print node data

    Node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    // Deallocate memory

    current = head;

    while (current != NULL)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}