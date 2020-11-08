#include "BinaryTree.h"

int main()
{
    BinaryTree* tree = new BinaryTree();

    // tree->addTreeNode(7);
    // tree->addTreeNode(12);
    // tree->addTreeNode(6);
    // tree->addTreeNode(5);
    // tree->addTreeNode(3);
    // tree->addTreeNode(16);

    tree->printf();

    tree->addTreeNode_rescursive(7);
    tree->addTreeNode_rescursive(12);
    tree->addTreeNode_rescursive(6);
    tree->addTreeNode_rescursive(5);
    tree->addTreeNode_rescursive(3);
    tree->addTreeNode_rescursive(4);
    tree->addTreeNode_rescursive(16);
    tree->addTreeNode_rescursive(10);

    tree->printf();

    // cout<<endl;
    // if(tree->containTreeNode(12))
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;
}