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

    Node *getLeft()
    {
        return left;
    }

    Node *getRight()
    {
        return right;
    }
};

class Tree
{
public:
    Node *root;

    void getMAX(Node *node, int &MAX)
    {
        if (node->data > MAX)
        {
            MAX = node->data;
        }

        if (node->left != NULL)
        {
            getMAX(node->left, MAX);
        }

        if (node->right != NULL)
        {
            getMAX(node->right, MAX);
        }
    }
};

int main()
{
    int MAX = 0;

    Tree *tree = new Tree;
    Node *root = new Node(1);
    Node *left = new Node(2);
    Node *right = new Node(3);

    tree->root = root;
    root->left = left;
    root->right = right;

    tree->getMAX(root, MAX);

    cout << "MAX: " << MAX << endl;

    delete tree;

    return 0;
}