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

bool BSTree::Remove(int value)
{
    return Remove(value, root_);
}

int BSTree::FindMin()
{
    if (root_ == NULL)
    {
        return 0;
    }
    
    return FindMin(root_);
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

bool BSTree::Remove(int value, BSTNode*& node)
{
    if (node == NULL)//if the recursive fuunction reaches null, then the number is not there and returns false
    {
        return false;
    }
    else if (node->contents() == value)
    {
        if (node->left_child() == NULL && node->right_child() == NULL)//if we have reached the value and the node has no children
        {
            delete node;//just remove it
            node = NULL;
            size_--;//size decrement
        }
        else if (node->left_child() != NULL && node->right_child() != NULL)//if it has two children
        {
            int temp = FindMin(node->right_child());
            node->set_contents(temp);//replace the node with the smallest child of the node to be deleted
            Remove(temp, node->right_child());//delete the original node we used to replace
        }
        else//if there is only one child
        {
            if (node->left_child() != NULL)//if it is a left child
            {
                node = node->left_child();//replace the node with the left child
            }
            else if (node->right_child() != NULL)//if its a right child
            {
                node = node->right_child();//replace the node with the right child
            }
            size_--;
        }
        return true;
    }
    else if (value > node->contents())//if the value is greater than the current value
    {
        Remove(value, node->right_child());//traverse to the right
    }
    else if (value < node->contents())//or traverse left if opposite
    {
        Remove(value, node->left_child());
    }
}

int BSTree::FindMin(BSTNode* node) const
{
    if (node->left_child() != NULL)//traverse as far left as possible
    {
        return FindMin(node->left_child());
    }
    
    return node->contents();//return value furthest left
}