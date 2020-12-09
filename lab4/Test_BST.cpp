#include "BST.h"

int main(){
    BST* tree = new BST();
    tree->insert(10);
    tree->insert(5);
    tree->insert(15);
    tree->insert(3);
    tree->insert(1);
    tree->insert(12);
    tree->insert(17);
    tree->insert(19);

    tree->print();
    cout<<endl;

    tree->delete_node(15);
    tree->print();
    //cout<<tree->minVal_even(tree->get_root());
}