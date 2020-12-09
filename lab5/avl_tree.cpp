#include "avl_tree.h"

AVLTree::AVLTree(){
    root = nullptr;
    cout<< "constructor initialization is successful"<<endl;
}

int AVLTree::height(node* cur_node){
    if(cur_node == nullptr)
        return 0;
    return cur_node->height;
}

int AVLTree::max(int a, int b){
    return a > b ? a : b;
}

// A utility function to right rotate subtree rooted with y. See the diagram given above.
//left- left case
AVLTree::node* AVLTree::rightRotate(node* cur_node){
    node* left_cur = cur_node->left;
    node* r_left_cur = left_cur->right;

    //Perform rotaiton
    left_cur->right = cur_node;
    cur_node->left = r_left_cur;

    //update heights
    cur_node->height = max(height(cur_node->left),height(cur_node->right)) + 1;
    left_cur->height = max(height(left_cur->left),height(left_cur->right)) + 1;

    return left_cur;
}

//right- right case 
AVLTree::node* AVLTree::leftRotate(node* cur_node){
    node* right_cur = cur_node->right;
    node* l_right_cur = right_cur->left;

    //Perform rotation
    right_cur->left = cur_node;
    cur_node->right = l_right_cur;

    //Update heights
    cur_node->height = max(height(cur_node->left),height(cur_node->right)) + 1;
    right_cur->height = max(height(right_cur->left),height(right_cur->right)) + 1;

    //return newRoot
    return right_cur;
}

int AVLTree::getBalance(node* cur_node){
    if(cur_node == nullptr)
        return 0;
    return height(cur_node->left) - height(cur_node->right);
}

AVLTree::node* AVLTree::insert(int val){
    if(root == nullptr)
        return root = new Node(val);
    node* cur_node = root;
    return sp_insert(cur_node,val);
}

AVLTree::node* AVLTree::sp_insert(node* cur_node, int val){

    /* 1. Perform the normal BST insertion */
    if(cur_node == nullptr)
        return cur_node = new Node(val);
    if(val < cur_node->data)
        cur_node->left = sp_insert(cur_node->left, val);
    else if (val > cur_node->data)
        cur_node->right = sp_insert(cur_node->right, val);
    else
        return cur_node;

    /* 2. Update height of this ancestor node */
    cur_node->height = max(height(cur_node->left), height(cur_node->right)) + 1;

    /* 3. Get the balance factor of this ancestor node to check whether this node became unbalanced */
    int balance = getBalance(cur_node);

    cout <<"- Balance: "<< balance <<"\t Current data:"<< cur_node->data << endl;

    // If this node becomes unbalanced, then there are 4 cases
    // Left left case
    if(balance > 1 && val < cur_node->left->data)
        return rightRotate(cur_node);

    // Right right case
    if(balance < -1 && val > cur_node->right->data)
        return leftRotate(cur_node);
    
    // Right left case
    if(balance < -1 && val < cur_node->right->data){
        cur_node->right = rightRotate(cur_node->right);
        return leftRotate(cur_node);
    }

    //Left right case
    if(balance > 1 && val > cur_node->left->data){
        cur_node->left = leftRotate(cur_node->left);
        return rightRotate(cur_node);
    }
    cout<< "--insert successfully" << endl;
    /* return the (unchanged) node pointer */
    return cur_node;
}

void AVLTree::print(){
    if(root == nullptr)
        cout << "Tree is emty"<< endl;
    node* cur_node = root;
    cout<< "Preorder traversal of the constructed AVL tree is" << endl;
    sp_print(cur_node);
}

void AVLTree::sp_print(node* cur_node){
    
    if(cur_node != nullptr){
        cout<< cur_node->data << "\t";
        sp_print(cur_node->left);
        sp_print(cur_node->right);
    }
    
}