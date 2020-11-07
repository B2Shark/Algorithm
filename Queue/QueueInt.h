#ifndef QUEUEINT_H
#define QUEUEINT_H

#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct Node Node;

class QueueInt
{
    private:
        struct Node
        {
            int data;
            Node* next;
        };
        Node* head;
        Node* tail;
    public:
        QueueInt();
        void enqueue(int);
        int dequeue();// remove  & return fistelement 
        int last();// return lastelement
        int fist();// return fistelement
        bool isEmty();
        void printf();

};
#endif