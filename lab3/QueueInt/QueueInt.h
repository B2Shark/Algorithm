#ifndef QUEUEINT_H
#define QUEUEINT_H

#include <bits/stdc++.h>
using namespace std;

class QueueInt{
    private:
        struct Node{
            int value;
            Node* next;
            Node(int data){
                value = data;
                next = nullptr;
            }
        };
        Node* head;// has a pointer to the fist node
        Node* tail;// and a poiter to the last node
    public:
        QueueInt();//constructor
        void enqueue(int);//append a value
        int dequeue();// return the fist-in value
        bool isEmty();// check whether the stack is Emty
        size_t size();// return the number of elements
        void printf();
};

#endif