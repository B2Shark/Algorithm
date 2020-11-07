#include "LinkedList.h"

int main()
{
    LinkedList *list = new LinkedList();
    // list->printList();

    // cout<<endl;


    int arr[] = {1,3,4,5};
    list->makeList(list,arr,4);
    list->insertItem(5);
    list->insertItem(7);
    list->insertItem(8);

    list->insertLast(3);
    list->insertFist(9);
    //delete fistNode
    //list->deleteItem(5);
    list->printList();
}