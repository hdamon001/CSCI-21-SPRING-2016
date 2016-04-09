
#include "sl_node.h"

SLNode::SLNode()
{
    contents_=0;
    next_node_=NULL;
}

SLNode::SLNode(int contents)
{
    contents_=contents;
    next_node_=NULL;
}

SLNode::~SLNode()
{
    
}

void SLNode::set_contents(int contents)
{
    contents_=contents;
}

int SLNode::contents()
{
    return contents_;
}

void SLNode::set_next_node(SLNode* ptr)
{
    next_node_=ptr;
}

SLNode* SLNode::next_node()
{
    return next_node_;
}