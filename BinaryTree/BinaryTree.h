#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <cstdlib>

using namespace std;

//setting TreeNode is elements of BinaryTree
struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int);
    ~TreeNode();
    bool isLeaf();
};

//setting class BinaryTree
class BinaryTree
{
    private:
        TreeNode* root;
        void sp_addTreeNode(TreeNode*,int);
        bool sp_contain(TreeNode*,int);
        void sp_Print(TreeNode*);//recursive support method print
        void sp_Print1(TreeNode*);//recursive support method print
    public:
        BinaryTree();
        ~BinaryTree();
        void addTreeNode(int);
        void addTreeNode_rescursive(int);
        bool containTreeNode(int);
        void printf();
};


#endif