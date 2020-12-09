#ifndef AVLTree_H
#define AVLTree_H
#include <bits/stdc++.h>
using namespace std;

class AVLTree{
    private:
        typedef struct Node
        {
           int data;
           Node* left;
           Node* right;
           int height;

           //constructor create new Node
           Node(int val){
               data = val;
               left = right = nullptr;
               height = 1;
               cout <<"insert " <<val<<endl;
           } 

        }node;
        node* root;
        int height(node* cur_node);
        int max(int a, int b);
        node* leftRotate(node* cur_node);
        node* rightRotate(node* cur_node);
        node* sp_insert(node* cur_node, int val);
        int getBalance(node* cur_node);
        void sp_print(node* cur_node);
        
    public:
        AVLTree();
        node* insert(int val);
        void print();
};
#endif