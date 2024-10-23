#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int data)
    {
        left = NULL;
        right = NULL;
        this->data = data;
    }

    void setLeft(Node *left)
    {
        this->left = left;
    }

    Node *getLeft()
    {
        return left;
    }

    void setRight(Node *right)
    {
        this->right = right;
    }

    Node *getRight()
    {
        return right;
    }

    int getData()
    {
        return data;
    }

    bool isLeaf()
    {
        if (this->left == NULL && this->right == NULL)
        {
            return true;
        }

        return false;
    }

    ~Node()
    {
        delete left;
        delete right;
    }
};

#endif