#include <iostream>
#include "tree.h"
#include "node.h"

using namespace std;

int main()
{
    int MAX = 0;

    Tree *tree = new Tree;

    tree->root = new Node(0);
    tree->root->left = new Node(1);
    tree->root->right = new Node(2);
    tree->root->left->left = new Node(3);
    tree->root->left->right = new Node(4);
    tree->root->right->left = new Node(5);
    tree->root->right->right = new Node(6);

    //        0
    //       / \
    //      1   2
    //     / \ / \
    //    3  4 5  6

    cout << tree->getRight(tree->root) << endl;

    delete tree;

    return 0;
}