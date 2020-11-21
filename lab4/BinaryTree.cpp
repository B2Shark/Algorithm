#include "BinaryTree.h"

TreeNode::TreeNode(int data){
    value = data;
    left = nullptr;
    right = nullptr;
}

BinaryTree::BinaryTree(){
    root = nullptr;
}

void BinaryTree::addBinaryTreeNode(int data){

    if(root == nullptr)
    {
        root = new TreeNode(data);
        cout << "add root: " << data << endl;
        return;
    }
    
    TreeNode* node = root;
    sp_addBinaryTreeNode(node,data);
}

void BinaryTree::sp_addBinaryTreeNode(TreeNode* node, int data){

    
    if(node->left == nullptr || node->right == nullptr){
        if(data > node->value){
            if(node->right != nullptr){
                cout<<"node right != null"<< endl;
                sp_addBinaryTreeNode(node->right,data);
                return;
            }
            else{
                node->right = new TreeNode(data);\
                cout<< "add: " << data << endl;
                return;
            }
        }
        if(data < node->value){
            if(node->left != nullptr){
                cout<<"node left != null"<< endl;
                sp_addBinaryTreeNode(node->left,data);
                return;
            }
            else{
                node->left = new TreeNode(data);
                cout<< "add: " << data<< endl;
                return;
            }
        }
    }

    if(data > node->value)
        sp_addBinaryTreeNode(node->right,data);
    else
        sp_addBinaryTreeNode(node->left,data);
}

void BinaryTree::printBinaryTree(){
    TreeNode* node = root;
    sp_printBinaryTree(node);
}

void BinaryTree::sp_printBinaryTree(TreeNode* node){
    
    /*PreOder(Node-Left_Right)
     *InOder(L-N-R)
     *PostOder(L-R-N)
    */ 
    //PreOder
    if(node != nullptr)
    {
        cout<< node->value << "\t";
        sp_printBinaryTree(node->left);
        sp_printBinaryTree(node->right);
    }
}

void BinaryTree::delTreeNode(int data){
    if(root == nullptr)
        return;

    TreeNode* node = root;
    sp_delTreeNode(node,data);
}

void BinaryTree::sp_delTreeNode(TreeNode* node, int data){
    
    TreeNode* prev;// Poiter before node delete 
    while (true)
    {
        //find node can delete
        if(data > node->value){
            prev = node;
            node = node->right;
        }
        else if(data < node->value){
            prev = node;
            node = node->left;
        }
        //node->value == data
        else{
            //node haven't child
            if(node->left == nullptr && node->right == nullptr){
                if(data < prev->value){
                    prev->left = node->left; // nullptr
                    delete(node);
                    return;
                }
                if(data > prev->value){
                    prev->right = node->right;
                    delete(node);
                    return;
                }
            }
            // node haven't one child
            if(node->right == nullptr){
                prev->right = node->left;
                delete(node);
                return;
            }

            if(node->left == nullptr){
                prev->right = node->right;
                delete(node);
                return;
            }

            //node have two child --right
            if(node->left != nullptr && node->right != nullptr){
                //swap value
                int temp = node->value;
                node->value = node->right->value;
                node->right->value = temp;

                if(data > prev->value){
                    prev = prev->right;//prev = node;
                    node = node->right;// node -> right;
                    prev->right = node->right;
                    delete(node);
                    return;
                }
                if(data < prev->value){
                    prev = prev->left;//prev = node;
                    node = node->right;// node -> right;
                    prev->right = node->right;
                    delete(node);
                    return;
                }

                //delete root

            }

        }
    }
    
    
}

TreeNode* BinaryTree::maxValue(TreeNode* node, int data){
    
    TreeNode* nodeMaxValue = node;
    while(nodeMaxValue != nullptr){
        nodeMaxValue = nodeMaxValue->left;
    }

    return nodeMaxValue;
}


