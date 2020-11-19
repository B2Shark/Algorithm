#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int);
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList();
        void addNode(int value);
        void delNode(int value);
        void printf();
};

#endif