#include "QueueInt.h"

QueueInt::QueueInt()
{
    head = tail = nullptr;
}

void QueueInt::enqueue(int datum)
{
    Node* temp = new Node();
    temp->data = datum;

    if(tail == nullptr)
    {
        //temp->next = head;
        head = tail = temp;
        return;
    }

    tail->next = temp;// pointer head unchange & poiter tail change
    tail = temp;// tail pointing temp
}

int QueueInt::dequeue()
{
    int toReturn = head->data; //store value of head to Return

    if(head == nullptr)
        return 0;
    
    Node* curr = head;
    head = head->next;

    if(head == nullptr)
        tail = nullptr;
    
    curr = nullptr;
    delete(curr);

    return toReturn;
}

int QueueInt::fist()
{
    int toReturn = head->data;
    return toReturn;
}

int QueueInt::last()
{
    int toReturn = tail->data;
    return toReturn;
}

bool QueueInt::isEmty()
{
    if(head == nullptr && tail == nullptr)
        return true;
    return false;
}

void QueueInt::printf()
{
    Node* curr = head;
    while(curr != nullptr)
    {
        cout<<curr->data<<"\t";
        curr = curr->next;
    }
}