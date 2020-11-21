#include "BinaryTree.h"

int main(){
    BinaryTree* tree = new BinaryTree();
    tree->addBinaryTreeNode(10);
    tree->addBinaryTreeNode(8);
    tree->addBinaryTreeNode(7);
    tree->addBinaryTreeNode(12);
    tree->addBinaryTreeNode(9);
    tree->addBinaryTreeNode(15);
    tree->addBinaryTreeNode(11);
    tree->addBinaryTreeNode(17);
    tree->addBinaryTreeNode(14);
    /*              10
    *      8                12
    * 7        9      11          15
    *                        14         17
    * 
    */

    tree->printBinaryTree();
    cout<<endl;

    tree->delTreeNode(12);
    tree->printBinaryTree();
}