#ifndef BST_H
#define BST_H
#include <bits/stdc++.h>
using namespace std;

class BST{
    private:
        typedef struct Node{
            int data;
            Node* left;
            Node* right;
        }node_t;
        node_t* root;
    public:
        BST();//root = null
        ~BST();//delete BST
        node_t* get_root();
        node_t* newNode(int value);
        node_t* insert(node_t* cur_root,int value);
        node_t* find_node(node_t* _root, int value);
        //node_t* find_value(node_t* _root, int value);
        node_t* delete_node(node_t* _root, int value);
        void delete_bst(node_t* _root);
        void print_bst(node_t* _root);
        node_t* find_max(node_t* _root);

};
#endif