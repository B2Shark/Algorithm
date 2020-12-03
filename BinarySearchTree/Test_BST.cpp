#include "BST.h"

int main(){
    BST* tree = new BST();
    tree->insert(tree->get_root(),10);
    tree->insert(tree->get_root(),5);
    tree->insert(tree->get_root(),15);
    tree->insert(tree->get_root(),3);
    tree->insert(tree->get_root(),4);
    tree->insert(tree->get_root(),12);
    tree->insert(tree->get_root(),17);
    tree->insert(tree->get_root(),19);

    tree->print_bst(tree->get_root());
    cout<<endl;

    tree->delete_node(tree->get_root(),15);
    //cout<< tree->find_max(tree->get_root())->data;
    tree->print_bst(tree->get_root());
}