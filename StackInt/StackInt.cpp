#include "StackInt.h"

StackInt::StackInt()
{
    head = nullptr;
}

void StackInt::push(int datum)
{
    Node* temp = new Node();
    temp->data = datum;
    temp->next = head;
    head = temp;
}

int StackInt::pop()
{
    Node* curr = head;
    
    if(curr != nullptr)
    {
        int toReturn = head->data;
        head = head->next;
        curr = nullptr;
        delete(curr);
        return toReturn;
    }
    return 0;
}

int StackInt::top()
{
    int toReturn = head->data;
    return toReturn;
}

bool StackInt::isEmty()
{
    Node* curr = head;
    if(curr == nullptr)
        return true;
    return false;
}

void StackInt::printf()
{
    Node* curr = head;
    while(curr != nullptr)
    {
        cout<<curr->data<<"\t";
        curr = curr->next;
    }
}