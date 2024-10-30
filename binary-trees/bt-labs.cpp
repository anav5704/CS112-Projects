#include <iostream>
#include <stdlib.h>
#include <assert.h>

using namespace std;

template <class dataType>
class BinaryTree
{
public:
    BinaryTree();
    bool isLeaf();
    dataType &getData();
    void insert(const dataType &d);
    BinaryTree *left();
    BinaryTree *right();
    void makeLeft(BinaryTree *T1);
    void makeRight(BinaryTree *T1);

private:
    dataType treeData;
    BinaryTree *leftTree;
    BinaryTree *rightTree;
};

template <class dataType>
BinaryTree<dataType>::BinaryTree()
{
    leftTree = NULL;
    rightTree = NULL;
}

template <class dataType>
bool BinaryTree<dataType>::isLeaf()
{
    return ((this->leftTree == NULL) && (this->rightTree == NULL));
}

template <class dataType>
dataType &BinaryTree<dataType>::getData()
{
    return treeData;
}

template <class dataType>
void BinaryTree<dataType>::insert(const dataType &d)
{
    treeData = d;
}

template <class dataType>
BinaryTree<dataType> *BinaryTree<dataType>::left()
{
    return leftTree;
}

template <class dataType>
BinaryTree<dataType> *BinaryTree<dataType>::right()
{
    return rightTree;
}

template <class dataType>
void BinaryTree<dataType>::makeLeft(BinaryTree *T1)
{
    leftTree = T1;
}

template <class dataType>
void BinaryTree<dataType>::makeRight(BinaryTree *T1)
{
    rightTree = T1;
}

template <class dataType>
void preOrderTraverse(BinaryTree<dataType> *bt)
{
    if (!(bt == NULL))
    {
        cout << bt->getData() << "\t";
        preOrderTraverse(bt->left());
        preOrderTraverse(bt->right());
    }
}

template <class dataType>
void inOrderTraverse(BinaryTree<dataType> *bt)
{
    if (!(bt == NULL))
    {
        inOrderTraverse(bt->left());
        cout << bt->getData() << "\t";
        inOrderTraverse(bt->right());
    }
}

template <class dataType>
void postOrderTraverse(BinaryTree<dataType> *bt)
{
    if (!(bt == NULL))
    {
        postOrderTraverse(bt->left());
        postOrderTraverse(bt->right());
        cout << bt->getData() << "\t";
    }
}

int find_sum(BinaryTree<int> *bt)
{
    if (bt == NULL)
    {
        return 0;
    }

    return bt->getData() + find_sum(bt->left()) + find_sum(bt->right());
}

template <class dataType>
int count_nodes(BinaryTree<dataType> *bt)
{
    if (bt == NULL)
    {
        return 0;
    }

    return 1 + count_nodes(bt->left()) + count_nodes(bt->right());
}

int find_max(BinaryTree<int> *bt)
{
    if (bt == NULL)
    {
        return 0;
    }

    int max = bt->getData();

    int left = find_max(bt->left());
    int right = find_max(bt->left());

    if (left > max)
    {
        max = left;
    }

    if (right > max)
    {
        max = right;
    }

    return max;
}

bool value_exists(BinaryTree<int> *bt, int value)
{
    if (bt == NULL)
    {
        return false;
    }

    if (bt->getData() == value)
    {
        return true;
    }

    return value_exists(bt->left(), value) || value_exists(bt->right(), value);
}

void print_level(BinaryTree<int> *bt, int level)
{
    if (bt == NULL)
    {
        return;
    }

    if (level == 0)
    {
        cout << bt->getData() << " ";
    }

    else
    {
        print_level(bt->left(), level - 1);
        print_level(bt->right(), level - 1);
    }
}

void swap_nodes(BinaryTree<int> *bt)
{
    if (bt == NULL)
    {
        return;
    }

    BinaryTree<int> *temp = bt->left();
    bt->makeLeft(bt->right());
    bt->makeRight(temp);

    swap_nodes(bt->left());
    swap_nodes(bt->right());
}

int main()
{
    BinaryTree<int> *root = new BinaryTree<int>;

    root->insert(2);
    root->makeLeft(new BinaryTree<int>);
    root->makeRight(new BinaryTree<int>);
    root->left()->insert(10);
    root->right()->insert(1);
    root->left()->makeLeft(new BinaryTree<int>);
    root->left()->makeRight(new BinaryTree<int>);
    root->left()->left()->insert(4);
    root->left()->right()->insert(3);
    /*

            2
          /   \
         10    1
        / \
       4  3

    */

    cout << find_sum(root) << endl;
    cout << count_nodes(root) << endl;
    cout << find_max(root) << endl;
    cout << value_exists(root, 10) << endl;

    print_level(root, 2);
    swap_nodes(root);

    inOrderTraverse(root);

    return 0;
}
