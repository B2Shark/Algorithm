#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

struct TreeNode{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int);
};

class BinaryTree{
    private:
        TreeNode* root;
        void sp_addBinaryTreeNode(TreeNode*,int);
        void sp_printBinaryTree(TreeNode*);
        TreeNode* maxValue(TreeNode*, int data);
        void sp_delTreeNode(TreeNode* node, int data);
    public:
        BinaryTree();
        void addBinaryTreeNode(int data);
        void printBinaryTree();
        void delTreeNode(int data);
};

#endif