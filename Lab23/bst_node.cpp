#include "bst_node.h"

BSTNode::BSTNode()//default constructor
{
    left_child_ = NULL;
    right_child_ = NULL;
    contents_ = 0;
}

BSTNode::BSTNode(int contents)//constructor with parameter for contents
{
    left_child_ = NULL;
    right_child_ = NULL;
    contents_ = contents;
}

BSTNode::~BSTNode()//destructor
{
    left_child_ = NULL;
    right_child_ = NULL;
}

void BSTNode::set_contents(int contents)//mutator for contents
{
    contents_ = contents;    
}

int BSTNode::contents() const//accessor for contents
{
    return contents_;
}

int& BSTNode::contents()
{
    return contents_;
}

void BSTNode::set_left_child(BSTNode* tot)//mutator for left chil
{
    left_child_ = tot;
}

void BSTNode::set_right_child(BSTNode* tot)//mutator for right chil
{
    right_child_ = tot;
}

BSTNode* BSTNode::left_child() const//accessor for left child
{
    return left_child_;
}

BSTNode*& BSTNode::left_child()
{
    return left_child_;
}

BSTNode* BSTNode::right_child() const//accessor for right child
{
    return right_child_;
}

BSTNode*& BSTNode::right_child()
{
    return right_child_;
}