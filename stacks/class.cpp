#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
    T data;
    Node<T> *next;

public:
    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    Node<T> *getNext()
    {
        return next;
    }

    void setNext(Node<T> *next)
    {
        this->next = next;
    }

    int getData()
    {
        return data;
    }
};

template <class T>
class Stack
{
private:
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }

    ~Stack()
    {
        while (head != NULL)
        {
            pop();
        }
    }

    void push(Node<T> data)
    {
        Node<T> *node = new Node<T>(data);
        node->setNext(head);
        head = node;
    }

    void pop()
    {
        Node<T> *temp = head;
        head = head->getNext();
        delete temp;
    }
};

int main()
{
    Stack<int> *stack = new Stack<int>;

    stack->push(1);
    stack->push(2);
    stack->push(3);

    delete stack;

    return 0;
}