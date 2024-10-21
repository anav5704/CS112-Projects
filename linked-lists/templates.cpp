#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
    T data;

public:
    Node(T data);
    T getData();
};

template <class T>
Node<T>::Node(T data)
{
    this->data = data;
}

template <class T>
T Node<T>::getData()
{
    return data;
}

int main()
{
    Node<int> *node = new Node<int>(5);

    cout << node->getData() << endl;

    delete node;

    return 0;
}