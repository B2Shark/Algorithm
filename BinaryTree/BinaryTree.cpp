#include "BinaryTree.h"

//constructor TreeNode
TreeNode::TreeNode(int datum)
{
    data = datum;
    left = right = nullptr;
}

TreeNode::~TreeNode()
{
    cout<< "Call destructor TreeNode" << endl;
}

bool TreeNode::isLeaf()
{
    return left == nullptr && right == nullptr;
}
// constructor BinaryTree

BinaryTree::BinaryTree()
{
    root = nullptr;
}

// destructor
BinaryTree::~BinaryTree()
{
    cout<< "Call destructor BinaryTree" << endl;
}

// method add one TreeNode into BinaryTree
void BinaryTree::addTreeNode(int datum)
{
    if(root == nullptr)
    {
        root = new TreeNode(datum);
        return;
    }

    TreeNode* curr = root;

    while (true)
    {
        if(datum == curr->data)
            return;
        if(datum < curr->data)
        {
            if(curr->left != nullptr)// if curr->left have element curr go curr->left 
                curr = curr->left;
            else
            {
                curr->left = new TreeNode(datum);
                break;
            } 
        }

        if(datum > curr->data)
        {
            if(curr->right != nullptr)
                curr = curr->right;
            else
            {
                curr->right = new TreeNode(datum);
                break;
            }
                
        }
        
    }

}

// add = recursive 
void BinaryTree::addTreeNode_rescursive(int datum)
{
    if(root == nullptr)
    {
        root = new TreeNode(datum);
        cout<< "root: " << datum << endl;
        return;
    }

    TreeNode* curr = root;
    sp_addTreeNode(curr,datum);
}

//
void BinaryTree::sp_addTreeNode(TreeNode* node ,int datum)
{
    // node = root |-> fist run
    if(node->left == nullptr || node->right == nullptr)
    {
        if(datum > node->data)
        {
            if(node->right != nullptr)
            {
                node = node->right;
                return;
            }
            else
            {
                node->right = new TreeNode(datum);
                return;
            }
            
        }

        else if(datum < node->data)
        {
            if(node->left != nullptr)
            {
                node = node->left;
                return;
            }
            else
            {
                node->left = new TreeNode(datum);
                return;
            }
            
        }
    }

    if (datum < node->data)
        sp_addTreeNode(node->left, datum);
    if (datum > node->data)
        sp_addTreeNode(node->right, datum);


}

// print BinaryTree
void BinaryTree::printf()
{
    TreeNode* curr = root;
    sp_Print(curr);
}

void BinaryTree::sp_Print(TreeNode* node)
{
    if(node != nullptr)
    {   
        // sort min -> max
        sp_Print(node->left);
        cout << node->data << "-";
        //support_Print(node->left);
        sp_Print(node->right);
    }
}

void BinaryTree::sp_Print1(TreeNode* node)
{
    cout<< node->data << "-";
    if(node->left != nullptr)
        sp_Print1(node->left);
    if(node->right != nullptr)
        sp_Print1(node->right);
}

bool BinaryTree::containTreeNode(int value)
{
    TreeNode* curr = root;
    return sp_contain(curr,value);
}

bool BinaryTree::sp_contain(TreeNode* node,int value)
{
    if(node == nullptr)
        return false;
    if(value == node->data)
        return true;
    else if(value < node->data)
        return sp_contain(node->left,value);
    else if(value > node->data)
        return sp_contain(node->right,value);
}