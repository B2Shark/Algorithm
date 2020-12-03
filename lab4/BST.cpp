#include "BST.h"

BST::BST(){
    root = nullptr;

}

BST::~BST(){
    delete_bst(root);
}

BST::node_t* BST::get_root(){
    return root;
}

/* Creates a new node from a given value, allocating heap memory for it. */
BST::node_t* BST::newNode(int value){
    node_t* newNode = new node_t;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
}

/* Inserts a new value into a given binary search tree, 
 * allocating heap memory for it.
 */
BST::node_t* BST::insert(node_t* cur_root, int value){
    if(root == nullptr)
        return (root = newNode(value));
    if(cur_root == nullptr)
        return (cur_root = newNode(value));
    
    if(value < cur_root->data)
        cur_root->left = insert(cur_root->left,value);
    else if(value > cur_root->data)
        cur_root->right = insert(cur_root->right,value);
    return cur_root;
}

/* determine whether node with value exists in tree
 * (don't swap parameter order -- it's confusing)
 */
BST::node_t* BST::find_node(node_t* _root,int value){
    if(_root == nullptr || _root->data == value)
        return _root;
    else if(value > _root->data)
        return find_node(_root->right,value);
    else
        return find_node(_root->left,value);
    
    return _root;
}

BST::node_t* BST::find_max(node_t* _root){
    if(_root == nullptr)
        return nullptr;
    while(_root->right != nullptr){
        _root = _root->right;
    }

    return _root;
}

BST::node_t* BST::delete_node(node_t* _root, int value){
    if(_root == nullptr)
        return nullptr;
    else if(value < _root->data){
        _root->left = delete_node(_root->left,value);
    }
    else if(value > _root->data){
        _root->right = delete_node(_root->right,value);
    }
    else{
        //No child
        if(_root->left == nullptr && _root->right == nullptr){
            delete(_root);
            _root = nullptr;
        }
        //One child
        else if(_root->right == nullptr){
            node_t* temp = _root;
            _root = _root->left;
            delete(temp);
        }
        else if(_root->left == nullptr){
            node_t* temp = _root;
            _root = _root->right;
            delete(temp);
        }
        //Two child
        else if(_root->left != nullptr && _root->right != nullptr){
            node_t* temp = find_max(_root->left);
            _root->data = temp->data;
            _root->left = delete_node(_root->left,temp->data);
        }
    }
    return _root;
}
/* Given a pointer to the root, frees the memory associated with 
 * an entire tree.
 */
void BST::delete_bst(node_t* _root){
    if(_root != nullptr){
        delete_bst(_root->left);
        delete_bst(_root->right);
        delete(_root);
    }

    root = nullptr;
}

/* Given a pointer to the root, prints all of
 * the values in a tree.
 */
void BST::print_bst(node_t* _root){
    if(_root != nullptr){
        cout<< _root->data << "\t";
        print_bst(_root->left);
        print_bst(_root->right);
    }
}

int minVal = 19;
int BST::minVal_even(node_t* _root){
    if(_root != nullptr){
        if(_root->data < minVal && _root->data % 2 == 0){
            minVal = _root->data;
            return minVal;
        }
        minVal_even(_root->right);
        minVal_even(_root->left);
    }
    return minVal;
}

