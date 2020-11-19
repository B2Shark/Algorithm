#ifndef STACKINT_H
#define STACKINT_H

#include <bits/stdc++.h>
using namespace std;

class StackInt{
    private:
        struct Node{
            int value;
            Node* next;
        };
        Node* head;
    public:
        StackInt();//constructor
        void push(int);//append value
        int top();//return top value
        int pop();//return the top value and remove top element
        size_t size();//return the number of elements
        bool isEmty();//check whether the stack is emty
        void printf();
};
#endif