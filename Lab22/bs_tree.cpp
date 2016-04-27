#include "bs_tree.h"

BSTree::BSTree()
{
    root_ = NULL;
    size_ = 0;
}

BSTree::~BSTree()
{
    Clear();
}

bool BSTree::Insert(int value)
{
    return Insert(value, root_);
}

void BSTree::Clear()
{
    Clear(root_);
}

unsigned int BSTree::size() const
{
    return size_;
}

string BSTree::InOrder()
{
    return InOrder(root_);
}

bool BSTree::Insert(int value, BSTNode*& node)
{
    if (node == NULL)
    {
        node = new BSTNode(value);
        size_++;
        return true;
    }
    else if (value < node->contents())
    {
        return Insert(value, node->left_child());
    }
    else if (value > node->contents())
    {
        return Insert(value, node->right_child());
    }
    
    return false;
}

void BSTree::Clear(BSTNode*& node)
{
    if (node != NULL)
    {
        Clear(node->left_child());
        Clear(node->right_child());
        delete node;
        node = NULL;
        size_--;
    }
}

string BSTree::InOrder(BSTNode* node)
{
    stringstream out;
    if (node != NULL)
    {
        out << InOrder(node->left_child());
        out << node->contents() << " ";
        out << InOrder(node->right_child());
    }
    return out.str();
}