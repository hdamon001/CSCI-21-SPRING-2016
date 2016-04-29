#include "bs_tree.h"

BSTree::BSTree()
{
    root_ = NULL;
    size_ = 0;
}

BSTree::~BSTree()//calls clear function to delete tree
{
    Clear();
}

bool BSTree::Insert(int value)//calls private insert function
{
    return Insert(value, root_);
}

void BSTree::Clear()//calls private clear function
{
    Clear(root_);
}

unsigned int BSTree::size() const//returns size
{
    return size_;
}

string BSTree::InOrder()//calls private in order function
{
    return InOrder(root_);
}

bool BSTree::Insert(int value, BSTNode*& node)
{
    if (node == NULL)//when we finally get to a point where there is nothing
    {
        node = new BSTNode(value);//insert the new node
        size_++;
        return true;
    }
    else if (value < node->contents())//if the given value is less than the current node 
    {
        return Insert(value, node->left_child()); //travel to the next node to the left
    }
    else if (value > node->contents())//if the given value is greater
    {
        return Insert(value, node->right_child());//travel right
    }
    
    return false;
}

void BSTree::Clear(BSTNode*& node)//recursively delete entire tree
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

string BSTree::InOrder(BSTNode* node)//recursively output nodes in numerical order
{
    stringstream out;
    if (node != NULL)
    {
        out << InOrder(node->left_child());//continues to go as far left as it can
        out << node->contents() << " ";
        out << InOrder(node->right_child());
    }
    return out.str();
}