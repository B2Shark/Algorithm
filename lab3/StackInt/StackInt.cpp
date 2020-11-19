#include "StackInt.h"

StackInt::StackInt()
{
    head = nullptr;
}

void StackInt::push(int data)
{
    //create new node
    Node* temp = new Node();
    temp->value = data;

    temp->next = head;
    head = temp;
}

int StackInt::top()
{
    int toReturn = head->value;
    return toReturn;
}

int StackInt::pop()
{
    int toReturn = head->value;
    Node* curr = head;
    head = head->next;
    curr = nullptr;
    delete(curr);

    return toReturn;
}

size_t StackInt::size()
{
    Node* curr = head;
    size_t count = 0;

    while(curr != nullptr)
    {
        count++;
        curr = curr->next;
    }

    return count;
}

bool StackInt::isEmty()
{
    if(head == nullptr)
        return true;
    return false;
}

void StackInt::printf()
{
    Node* curr = head;
    while(curr != nullptr)
    {
        cout<< curr->value << "\t";
        curr = curr->next;
    }
}