#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct Node Node;

class LinkedList
{
    private:
        struct Node
        {
            int value;
            Node* next;
        };
        Node* head;
    public:
        LinkedList();
        void insertItem(int);
        void insertFist(int);
        void insertLast(int);//appedItem
        void makeList(LinkedList* my_list,int intArrays[], int numNodes);//add elements of Array into LikedList
        void deleteItem(int);
        void printList();
};
#endif