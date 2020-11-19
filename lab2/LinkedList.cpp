#include "LinkedList.h"

Node::Node(int value)
{
    data = value;
    next = nullptr;
}

LinkedList::LinkedList()
{
    head = nullptr;
}
void LinkedList::addNode(int value)
{
    if(head == nullptr)
        head = new Node(value);
    else
    {
        Node* temp = new Node(value);
        temp->next = head;
        head = temp;
    }
}

void LinkedList::delNode(int value)
{
    Node* curr = head;
    //delete node head
    if(curr->data == value)
    {
        head = head->next;
        curr = nullptr;
        delete(curr);
    }
    else
    {
        Node* prev;
        while(curr != nullptr)
        {
            if(curr->data == value)
                break;
            
            prev = curr;
            curr = curr->next;
        }

        if(curr == nullptr)
        {
            cout<< "not found value" << endl;
        }
        else
        {
            prev->next = curr->next;
            curr = nullptr;
            delete(curr);
        }
        
    }
    
}

void LinkedList::printf()
{
    Node* curr = head;
    while (curr != nullptr)
    {
        cout<< curr->data << "\t";
        curr = curr->next;
    }
    
}