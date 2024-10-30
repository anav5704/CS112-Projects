#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "node.h"

using namespace std;

class Tree
{
public:
    Node *root;

    Tree()
    {
        root = NULL;
    }

    Node *getRoot()
    {
        return root;
    }

    void preOrder(Node *node)
    {
        cout << node->getData() << " ";

        if (node->getLeft() != NULL)
        {
            preOrder(node->left);
        }

        if (node->getRight() != NULL)
        {
            preOrder(node->right);
        }
    }

    void inOrder(Node *node)
    {
        if (node->getLeft() != NULL)
        {
            inOrder(node->left);
        }

        cout << node->getData() << " ";

        if (node->getRight() != NULL)
        {
            inOrder(node->right);
        }
    }

    void postOrder(Node *node)
    {
        if (node->getLeft() != NULL)
        {
            postOrder(node->left);
        }

        if (node->getRight() != NULL)
        {
            postOrder(node->right);
        }

        cout << node->getData() << " ";
    }

    void printLeaves(Node *node)
    {
        if (node->isLeaf())
        {
            cout << node->getData() << endl;
        }

        if (node->getLeft() != NULL)
        {
            printLeaves(node->left);
        }

        if (node->getRight() != NULL)
        {
            printLeaves(node->right);
        }
    }

    int countLeaves(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        if (node->isLeaf())
        {
            return 1;
        }

        return countLeaves(node->left) + countLeaves(node->right);
    }

    int getMax(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }
        int max = node->getData();

        int left = getMax(node->getLeft());
        int right = getMax(node->getRight());

        max = left > max ? left : max;
        max = right > max ? right : max;

        return max;
    }

    int getMin(Node *node)
    {
        if (node == NULL)
        {
            return 100;
        }

        int min = node->getData();

        int left = getMin(node->getLeft());
        int right = getMin(node->getRight());

        min = left < min ? left : min;
        min = right < min ? right : min;

        return min;
    }

    int getHeight(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int left = getHeight(node->getLeft());
        int right = getHeight(node->getRight());

        if (left > right)
        {
            return 1 + left;
        }
        else
        {
            return 1 + right;
        }
    }

    int getSize(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        return 1 + getSize(node->left) + getSize(node->right);
    }

    int getSum(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        return node->getData() + getSum(node->left) + getSum(node->right);
    }

    int getLeft(Node *node)
    {
        if (node->getLeft() == NULL)
        {
            return node->getData();
        }

        return getLeft(node->getLeft());
    }

    int getRight(Node *node)
    {
        if (node->getRight() == NULL)
        {
            return node->getData();
        }

        return getRight(node->getRight());
    }

    ~Tree()
    {
        delete root;
    }
};

#endif