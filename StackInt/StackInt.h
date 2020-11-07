#ifndef STACKINT_H
#define STACKINT_H

#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct Node Node;
class StackInt
{
    private:
        struct Node
        {
            int data;
            Node* next;
        };
        Node* head;

    public:
        StackInt();
        void push(int datum);
        int pop();//return top
        int top();//printf elements top
        bool isEmty();
        void printf();
};

#endif