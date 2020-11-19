#include "QueueInt.h"

QueueInt::QueueInt(){
    head = tail = nullptr;
}

void QueueInt::enqueue(int data){
    Node* temp = new Node(data);

    if(tail == nullptr)
    {
        head = tail = temp;
        return;
    }

    tail->next = temp;// pointer head unchange & poiter tail change
    tail = temp;// tail pointing temp
}

int QueueInt::dequeue()
{
    int toReturn = head->value;

    Node* curr = head;
    head = head->next;

    if(head == nullptr)
        tail = nullptr;
    
    curr = nullptr;
    delete(curr);

    return toReturn;

}

bool QueueInt::isEmty()
{
    if(head == nullptr && tail == nullptr)
        return true;
    return false;
}

size_t QueueInt::size()
{
    size_t count = 0;
    Node* curr = head;

    while(curr != nullptr)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

void QueueInt::printf()
{
    Node* curr = head;
    while(curr != nullptr)
    {
        cout<< curr->value << "\t";
        curr = curr->next;
    }
}